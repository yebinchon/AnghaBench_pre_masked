
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid_namespace {int child_reaper; int reboot; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct pid_namespace VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;

int FUNC_4(struct pid_namespace *VAR_6, int VAR_7)
{
 if (VAR_6 == &VAR_4)
  return 0;

 switch (VAR_7) {
 case 128:
 case 129:
  VAR_6->reboot = VAR_1;
  break;

 case 130:
 case 131:
  VAR_6->reboot = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(&VAR_5);
 FUNC_1(VAR_3, VAR_6->child_reaper);
 FUNC_3(&VAR_5);

 FUNC_0(0);


 return 0;
}
