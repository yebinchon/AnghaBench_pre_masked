
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct completion {scalar_t__ done; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct task_struct* VAR_4 ;
 int FUNC_3 (struct task_struct*,int) ;
 int FUNC_4 (struct completion*,int *,char*,int,int ) ;
 int FUNC_5 (struct completion*) ;
 int FUNC_6 (struct completion*) ;
 int FUNC_7 (struct completion*,int ) ;
 int FUNC_8 (struct completion*,int ) ;

int
FUNC_9(struct completion *VAR_5, int VAR_6)
{
 struct task_struct *VAR_7;
 int VAR_8;

 if (FUNC_2())
  return (0);

 VAR_7 = VAR_4;

 if (VAR_6 != 0)
  VAR_6 = VAR_1 | VAR_2;
 else
  VAR_6 = VAR_2;
 VAR_8 = 0;
 for (;;) {
  FUNC_5(VAR_5);
  if (VAR_5->done)
   break;
  FUNC_4(VAR_5, ((void*)0), "completion", VAR_6, 0);
  if (VAR_6 & VAR_1) {
   FUNC_0();
   VAR_8 = -FUNC_8(VAR_5, 0);
   FUNC_1();
   if (VAR_8 != 0) {
    FUNC_3(VAR_7, VAR_8);
    VAR_8 = -VAR_0;
    goto intr;
   }
  } else {
   FUNC_0();
   FUNC_7(VAR_5, 0);
   FUNC_1();
  }
 }
 if (VAR_5->done != VAR_3)
  VAR_5->done--;
 FUNC_6(VAR_5);

intr:
 return (VAR_8);
}
