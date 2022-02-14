
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ocs_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(ocs_t *VAR_1, char *VAR_2, char *VAR_3)
{
 int VAR_4;

 if (FUNC_2(VAR_3, "false") == 0) {
  FUNC_0(VAR_0);
  VAR_4 = 0;
 } else if (FUNC_2(VAR_3, "true") == 0) {
  FUNC_1(VAR_0);
  VAR_4 = 0;
 } else {
  VAR_4 = -1;
 }

 return VAR_4;
}
