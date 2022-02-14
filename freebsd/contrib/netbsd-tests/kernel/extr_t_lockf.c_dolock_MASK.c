
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int,int ) ;

__attribute__((used)) static int
FUNC_3(int VAR_2, int VAR_3, off_t VAR_4, off_t VAR_5)
{
 off_t VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_2, VAR_4, VAR_0);
 if (VAR_6 == -1) {
  return VAR_1;
 }
 FUNC_0(VAR_6 == VAR_4, "lseek to wrong offset");
 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_5);
 if (VAR_7 == -1) {
  return VAR_1;
 }
 return 0;
}
