
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char*) ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int,char*,int) ;

__attribute__((used)) static void
FUNC_5(
 int VAR_3,
 off_t VAR_4,
 int VAR_5
 )
{

 if (FUNC_2(VAR_3, VAR_4, VAR_0) == -1)
 {
  (void) FUNC_1(VAR_2, "%s: lseek fails: ", VAR_1);
  FUNC_3("");
  FUNC_0(1);
 }
 if (FUNC_4(VAR_3, (char *)&VAR_5, sizeof(int)) != sizeof(int))
 {
  (void) FUNC_1(VAR_2, "%s: write fails: ", VAR_1);
  FUNC_3("");
  FUNC_0(1);
 }
 return;
}
