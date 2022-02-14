
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct trapframe {int dummy; } ;
struct intr_event {int dummy; } ;
struct TYPE_3__ {int td_pflags; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct intr_event*,struct trapframe*) ;
 struct intr_event** VAR_3 ;
 int * VAR_4 ;
 int FUNC_5 (TYPE_1__*,int ,struct trapframe*) ;
 int VAR_5 ;

void
FUNC_6(struct trapframe *VAR_6)
{
 struct intr_event *VAR_7;
 int VAR_8;

 FUNC_1(VAR_5);
 VAR_8 = -1;
 while ((VAR_8 = FUNC_2(VAR_8)) != -1) {
  VAR_4[VAR_8]++;
  VAR_7 = VAR_3[VAR_8];
  if (FUNC_4(VAR_7, VAR_6) != 0) {

   FUNC_3(VAR_8);
  }
 }




}
