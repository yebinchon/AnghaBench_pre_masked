
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t sig ;
struct TYPE_8__ {TYPE_3__* sighand; } ;
struct TYPE_7__ {int siglock; TYPE_2__* action; } ;
struct TYPE_5__ {int sa_handler; } ;
struct TYPE_6__ {TYPE_1__ sa; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;

int FUNC_4(int VAR_3)
{
 if (!FUNC_3(VAR_3) || VAR_3 < 1)
  return -VAR_0;

 FUNC_1(&VAR_2->sighand->siglock);
 VAR_2->sighand->action[(VAR_3)-1].sa.sa_handler = VAR_1;
 FUNC_0();
 FUNC_2(&VAR_2->sighand->siglock);
 return 0;
}
