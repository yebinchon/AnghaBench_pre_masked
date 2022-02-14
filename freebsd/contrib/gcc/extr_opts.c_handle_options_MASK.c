
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int *) ;
 int FUNC_2 (char*,char const*) ;
 unsigned int FUNC_3 (char const**,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 char const* VAR_2 ;

__attribute__((used)) static void
FUNC_4 (unsigned int VAR_3, const char **VAR_4, unsigned int VAR_5)
{
  unsigned int VAR_6, VAR_7;

  for (VAR_7 = 1; VAR_7 < VAR_3; VAR_7 += VAR_6)
    {
      const char *VAR_8 = VAR_4[VAR_7];


      if (VAR_8[0] != '-' || VAR_8[1] == '\0')
 {
   if (VAR_2 == ((void*)0))
     {
     VAR_2 = VAR_8;
       VAR_0
  = FUNC_1 (VAR_2, &VAR_1);
     }
   FUNC_0 (VAR_8);
   VAR_6 = 1;
   continue;
 }

      VAR_6 = FUNC_3 (VAR_4 + VAR_7, VAR_5);

      if (!VAR_6)
 {
   VAR_6 = 1;
   FUNC_2 ("unrecognized command line option \"%s\"", VAR_8);
 }
    }
}
