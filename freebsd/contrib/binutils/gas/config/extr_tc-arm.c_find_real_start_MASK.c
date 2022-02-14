
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbolS ;


 char* FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char const*) ;
 int * FUNC_5 (char*) ;

__attribute__((used)) static symbolS *
FUNC_6 (symbolS * VAR_1)
{
  char * VAR_2;
  const char * VAR_3 = FUNC_1 (VAR_1);
  symbolS * VAR_4;




  if (VAR_3 == ((void*)0))
    FUNC_3 ();






  if (FUNC_2 (VAR_1) || VAR_3[0] == '.')
    return VAR_1;

  VAR_2 = FUNC_0 ((".real_start_of", VAR_3, ((void*)0)));
  VAR_4 = FUNC_5 (VAR_2);

  if (VAR_4 == ((void*)0))
    {
      FUNC_4 ("Failed to find real start of function: %s\n", VAR_3);
      VAR_4 = VAR_1;
    }

  return VAR_4;
}
