
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_header {int dummy; } ;
typedef int off_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*) ;

__attribute__((used)) static bool FUNC_6(char *VAR_2, off_t VAR_3)
{
 if (VAR_3 < sizeof(struct fdt_header) ||
     FUNC_1(VAR_2) != VAR_0 ||
     FUNC_5(VAR_2) > VAR_1 ||
     FUNC_0(VAR_2) >= VAR_1 ||
     FUNC_4(VAR_2) >= VAR_3 ||
     FUNC_3(VAR_2) >= VAR_3 ||
     FUNC_2(VAR_2) >= VAR_3)
  return 0;
 else
  return 1;
}
