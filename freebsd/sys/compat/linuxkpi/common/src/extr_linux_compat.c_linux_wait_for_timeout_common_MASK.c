
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct completion {scalar_t__ done; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct task_struct* VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct task_struct*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct completion*,int *,char*,int,int ) ;
 int FUNC_6 (struct completion*) ;
 int FUNC_7 (struct completion*) ;
 int FUNC_8 (struct completion*,int) ;
 int FUNC_9 (struct completion*,int ) ;
 int FUNC_10 (struct completion*,int ) ;

int
FUNC_11(struct completion *VAR_7, int VAR_8, int VAR_9)
{
 struct task_struct *VAR_10;
 int VAR_11 = VAR_6 + VAR_8;
 int VAR_12;

 if (FUNC_2())
  return (0);

 VAR_10 = VAR_5;

 if (VAR_9 != 0)
  VAR_9 = VAR_2 | VAR_3;
 else
  VAR_9 = VAR_3;

 for (;;) {
  FUNC_6(VAR_7);
  if (VAR_7->done)
   break;
  FUNC_5(VAR_7, ((void*)0), "completion", VAR_9, 0);
  FUNC_8(VAR_7, FUNC_4(VAR_11));

  FUNC_0();
  if (VAR_9 & VAR_2)
   VAR_12 = -FUNC_10(VAR_7, 0);
  else
   VAR_12 = -FUNC_9(VAR_7, 0);
  FUNC_1();

  if (VAR_12 != 0) {

   if (VAR_12 == -VAR_1) {
    VAR_12 = 0;
   } else {

    FUNC_3(VAR_10, VAR_12);
    VAR_12 = -VAR_0;
   }
   goto done;
  }
 }
 if (VAR_7->done != VAR_4)
  VAR_7->done--;
 FUNC_7(VAR_7);


 VAR_12 = FUNC_4(VAR_11);
done:
 return (VAR_12);
}
