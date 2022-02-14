
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct sysarch_args {int op; int parms; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct thread*) ;
 int FUNC_1 (struct thread*,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct thread*,int ) ;
 int FUNC_3 (struct thread*,int ) ;
 int FUNC_4 (struct thread*,int ) ;
 int FUNC_5 (struct thread*,int ) ;
 int FUNC_6 (struct thread*,int ) ;
 int FUNC_7 (int ,int *,int *) ;

int
FUNC_8(struct thread *VAR_4, struct sysarch_args *VAR_5)
{
 int VAR_6;
 switch (VAR_5->op) {
 case 128:
  VAR_6 = FUNC_5(VAR_4, VAR_5->parms);
  break;
 case 132:
  VAR_6 = FUNC_2(VAR_4, VAR_5->parms);
  break;
 case 129:
  VAR_6 = FUNC_4(VAR_4, VAR_5->parms);
  break;
 case 131:
  VAR_6 = FUNC_3(VAR_4, VAR_5->parms);
  break;
 case 130:
  VAR_6 = FUNC_6(VAR_4, VAR_5->parms);
  break;
 default:
  VAR_6 = VAR_2;
  break;
 }
 return (VAR_6);
}
