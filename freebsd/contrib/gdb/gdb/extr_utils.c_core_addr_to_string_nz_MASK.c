
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int addr ;
typedef int CORE_ADDR ;


 char* FUNC_0 () ;
 int FUNC_1 (int const,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,char*) ;

const char *
FUNC_4 (const CORE_ADDR VAR_0)
{
  char *VAR_1 = FUNC_0 ();
  FUNC_3 (VAR_1, "0x");
  FUNC_2 (VAR_1, FUNC_1 (VAR_0, sizeof (VAR_0)));
  return VAR_1;
}
