
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct kqueue {int kq_state; int kq_sel; scalar_t__ kq_count; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct kqueue*) ;
 int VAR_0 ;
 int FUNC_1 (struct kqueue*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct file*,struct kqueue**) ;
 int FUNC_4 (struct kqueue*,int) ;
 int FUNC_5 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_6(struct file *VAR_4, int VAR_5, struct ucred *VAR_6,
 struct thread *VAR_7)
{
 struct kqueue *VAR_8;
 int VAR_9 = 0;
 int VAR_10;

 if ((VAR_10 = FUNC_3(VAR_4, &VAR_8)))
  return VAR_1;

 FUNC_0(VAR_8);
 if (VAR_5 & (VAR_2 | VAR_3)) {
  if (VAR_8->kq_count) {
   VAR_9 |= VAR_5 & (VAR_2 | VAR_3);
  } else {
   FUNC_5(VAR_7, &VAR_8->kq_sel);
   if (FUNC_2(&VAR_8->kq_sel))
    VAR_8->kq_state |= VAR_0;
  }
 }
 FUNC_4(VAR_8, 1);
 FUNC_1(VAR_8);
 return (VAR_9);
}
