
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pam_handle_t ;


 int VAR_0 ;
 char const** VAR_1 ;
 int FUNC_0 (char*,int,char*,int) ;

const char *
FUNC_1(const pam_handle_t *VAR_2,
 int VAR_3)
{
 static char VAR_4[16];

 (void)VAR_2;
 if (VAR_3 >= 0 && VAR_3 < VAR_0) {
  return (VAR_1[VAR_3]);
 } else {
  FUNC_0(VAR_4, sizeof VAR_4, "#%d", VAR_3);
  return (VAR_4);
 }
}
