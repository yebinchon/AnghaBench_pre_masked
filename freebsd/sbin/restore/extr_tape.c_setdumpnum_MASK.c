
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtop {int mt_count; int mt_op; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ,int) ;
 int VAR_8 ;
 char* FUNC_4 (int ) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct mtop VAR_10;

 if (VAR_2 == 1 || VAR_9 != 1)
  return;
 if (VAR_7) {
  FUNC_1(VAR_8, "Cannot have multiple dumps on pipe input\n");
  FUNC_0(1);
 }
 VAR_10.mt_op = VAR_0;
 VAR_10.mt_count = VAR_2 - 1;





  if (!VAR_6 && FUNC_2(VAR_5, VAR_1, (char *)&VAR_10) < 0)
   FUNC_1(VAR_8, "ioctl MTFSF: %s\n", FUNC_4(VAR_3));
}
