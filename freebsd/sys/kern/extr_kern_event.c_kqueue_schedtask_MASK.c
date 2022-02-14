
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqueue {int kq_state; int kq_task; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct kqueue*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct kqueue *VAR_3)
{

 FUNC_1(VAR_3);
 FUNC_0(((VAR_3->kq_state & VAR_0) != VAR_0),
     ("scheduling kqueue task while draining"));

 if ((VAR_3->kq_state & VAR_1) != VAR_1) {
  FUNC_2(VAR_2, &VAR_3->kq_task);
  VAR_3->kq_state |= VAR_1;
 }
}
