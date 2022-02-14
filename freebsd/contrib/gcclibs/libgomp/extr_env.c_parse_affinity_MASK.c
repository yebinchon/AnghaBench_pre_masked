
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned short*) ;
 char* FUNC_1 (char*) ;
 unsigned short* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (char*) ;
 unsigned short* FUNC_3 (unsigned short*,size_t) ;
 unsigned long FUNC_4 (char*,char**,int ) ;

__attribute__((used)) static bool
FUNC_5 (void)
{
  char *VAR_2, *VAR_3;
  unsigned long VAR_4, VAR_5, VAR_6;
  unsigned short *VAR_7 = ((void*)0);
  size_t VAR_8 = 0, VAR_9 = 0, VAR_10;

  VAR_2 = FUNC_1 ("GOMP_CPU_AFFINITY");
  if (VAR_2 == ((void*)0))
    return 0;

  do
    {
      while (*VAR_2 == ' ' || *VAR_2 == '\t')
 VAR_2++;

      VAR_4 = FUNC_4 (VAR_2, &VAR_3, 0);
      VAR_5 = VAR_4;
      VAR_6 = 1;
      if (VAR_2 == VAR_3 || VAR_4 >= 65536)
 goto invalid;

      VAR_2 = VAR_3;
      if (*VAR_2 == '-')
 {
   VAR_5 = FUNC_4 (++VAR_2, &VAR_3, 0);
   if (VAR_2 == VAR_3 || VAR_5 >= 65536 || VAR_5 < VAR_4)
     goto invalid;

   VAR_2 = VAR_3;
   if (*VAR_2 == ':')
     {
       VAR_6 = FUNC_4 (++VAR_2, &VAR_3, 0);
       if (VAR_2 == VAR_3 || VAR_6 == 0 || VAR_6 >= 65536)
  goto invalid;

       VAR_2 = VAR_3;
     }
 }

      VAR_10 = (VAR_5 - VAR_4) / VAR_6 + 1;
      if (VAR_9 + VAR_10 >= VAR_8)
 {
   unsigned short *VAR_11;

   if (VAR_8 < 64)
     VAR_8 = 64;
   if (VAR_8 > VAR_10)
     VAR_8 <<= 1;
   else
     VAR_8 += 2 * VAR_10;
   VAR_11 = FUNC_3 (VAR_7, VAR_8 * sizeof (unsigned short));
   if (VAR_11 == ((void*)0))
     {
       FUNC_0 (VAR_7);
       FUNC_2 ("not enough memory to store GOMP_CPU_AFFINITY list");
       return 0;
     }

   VAR_7 = VAR_11;
 }

      while (VAR_10--)
 {
   VAR_7[VAR_9++] = VAR_4;
   VAR_4 += VAR_6;
 }

      while (*VAR_2 == ' ' || *VAR_2 == '\t')
 VAR_2++;

      if (*VAR_2 == ',')
 VAR_2++;
      else if (*VAR_2 == '\0')
 break;
    }
  while (1);

  VAR_0 = VAR_7;
  VAR_1 = VAR_9;
  return 1;

 invalid:
  FUNC_2 ("Invalid value for enviroment variable GOMP_CPU_AFFINITY");
  return 0;
}
