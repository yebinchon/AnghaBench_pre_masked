
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,double) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static double
FUNC_3(
 char *VAR_1,
 int VAR_2
 )
{
 register char *VAR_3;
 register char *VAR_4;
 double VAR_5;
 double VAR_6;
 int VAR_7;
 char VAR_8[32];
 char *VAR_9;

 if (VAR_2) {



  if (*VAR_1 == 'N' || *VAR_1 == 'n')
      VAR_7 = 0;
  else if (*VAR_1 == 'S' || *VAR_1 == 's')
      VAR_7 = 1;
  else
      VAR_7 = -1;
 } else {



  if (*VAR_1 == 'E' || *VAR_1 == 'e')
      VAR_7 = 0;
  else if (*VAR_1 == 'W' || *VAR_1 == 'w')
      VAR_7 = 1;
  else
      VAR_7 = -1;
 }

 if (VAR_7 >= 0)
     VAR_1++;

 VAR_9 = FUNC_2(VAR_1, ':');
 if (VAR_9 != ((void*)0)) {



  VAR_3 = VAR_1;
  VAR_4 = VAR_8;
  while (VAR_3 < VAR_9)
      *VAR_4++ = *VAR_3++;
  *VAR_4 = '\0';
  VAR_3++;
  VAR_5 = FUNC_0(VAR_8);
  VAR_6 = 60.0;
  VAR_9 = FUNC_2(VAR_3, ':');
  if (VAR_9 != ((void*)0)) {
   VAR_4 = VAR_8;
   while (VAR_3 < VAR_9)
       *VAR_4++ = *VAR_3++;
   *VAR_4 = '\0';
   VAR_3++;
   VAR_5 += FUNC_0(VAR_8) / VAR_6;
   VAR_6 = 3600.0;
  }
  if (*VAR_3 != '\0')
      VAR_5 += FUNC_0(VAR_3) / VAR_6;
 } else {
  VAR_5 = FUNC_0(VAR_1);
 }

 if (VAR_7 == 1)
     VAR_5 = -VAR_5;

 if (VAR_0 > 2)
     (void) FUNC_1("latitude/longitude %s = %g\n", VAR_1, VAR_5);

 return VAR_5;
}
