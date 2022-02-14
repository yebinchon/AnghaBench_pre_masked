
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int EditLine ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

int
FUNC_2(EditLine *VAR_3, char *VAR_4)
{
 int VAR_5;
 wchar_t VAR_6 = 0;

 VAR_5 = FUNC_0(VAR_3, &VAR_6);
 *VAR_4 = '\0';
 if (VAR_5 <= 0)
  return VAR_5;
 VAR_5 = FUNC_1(VAR_6);
 if (VAR_5 == VAR_0) {
  VAR_2 = VAR_1;
  return -1;
 } else {
  *VAR_4 = (char)VAR_5;
  return 1;
 }
}
