
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unp_defer {struct file* ud_fp; } ;
struct thread {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct unp_defer*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct file*,struct thread*) ;
 struct unp_defer* FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (struct file*) ;

__attribute__((used)) static void
FUNC_8(struct file *VAR_7)
{
 struct unp_defer *VAR_8;

 if (FUNC_7(VAR_7)) {
  VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_0, VAR_1);
  VAR_8->ud_fp = VAR_7;
  FUNC_1();
  FUNC_0(&VAR_5, VAR_8, VAR_3);
  FUNC_2();
  FUNC_3(&VAR_6, 1);
  FUNC_6(VAR_2, &VAR_4);
 } else
  (void) FUNC_4(VAR_7, (struct thread *)((void*)0));
}
