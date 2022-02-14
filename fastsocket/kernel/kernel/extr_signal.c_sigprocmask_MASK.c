
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sigset_t ;
struct TYPE_4__ {TYPE_1__* sighand; int blocked; } ;
struct TYPE_3__ {int siglock; } ;


 int VAR_0 ;



 TYPE_2__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(int VAR_2, sigset_t *VAR_3, sigset_t *VAR_4)
{
 int VAR_5;

 FUNC_3(&VAR_1->sighand->siglock);
 if (VAR_4)
  *VAR_4 = VAR_1->blocked;

 VAR_5 = 0;
 switch (VAR_2) {
 case 130:
  FUNC_2(&VAR_1->blocked, &VAR_1->blocked, VAR_3);
  break;
 case 128:
  FUNC_1(&VAR_1->blocked, &VAR_1->blocked, VAR_3);
  break;
 case 129:
  VAR_1->blocked = *VAR_3;
  break;
 default:
  VAR_5 = -VAR_0;
 }
 FUNC_0();
 FUNC_4(&VAR_1->sighand->siglock);

 return VAR_5;
}
