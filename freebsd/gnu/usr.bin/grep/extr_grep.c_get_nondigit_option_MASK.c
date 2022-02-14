
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int*) ;
 int FUNC_1 (int,char* const*,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3 (int VAR_3, char *const *VAR_4, int *VAR_5)
{
  int VAR_6;
  char VAR_7[sizeof (uintmax_t) * VAR_0 + 4];
  char *VAR_8 = VAR_7;


  VAR_7[0] = '\0';

  while (VAR_6 = FUNC_1 (VAR_3, VAR_4, VAR_2, VAR_1, ((void*)0)),
  '0' <= VAR_6 && VAR_6 <= '9')
    {


      VAR_8 -= VAR_7[0] == '0';

      *VAR_8++ = VAR_6;
      if (VAR_8 == VAR_7 + sizeof VAR_7 - 4)
 {



   FUNC_2 (VAR_8, "...");
   VAR_8 += 3;
   break;
 }
    }
  if (VAR_8 != VAR_7)
    {
      *VAR_8 = '\0';
      FUNC_0 (VAR_7, VAR_5);
    }

  return VAR_6;
}
