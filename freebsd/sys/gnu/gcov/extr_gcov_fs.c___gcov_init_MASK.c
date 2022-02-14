
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct gcov_info*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct gcov_info*) ;
 unsigned int FUNC_2 (struct gcov_info*) ;
 int VAR_3 ;
 int FUNC_3 (int ,char*,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(struct gcov_info *VAR_4)
{
 static unsigned int VAR_5;

 FUNC_4(&VAR_3);
 if (VAR_5 == 0) {
  VAR_5 = FUNC_2(VAR_4);




  FUNC_3(VAR_1, "version magic: 0x%x\n", VAR_5);
 }




 FUNC_1(VAR_4);
 if (VAR_2)
  FUNC_0(VAR_0, VAR_4);
 FUNC_5(&VAR_3);
}
