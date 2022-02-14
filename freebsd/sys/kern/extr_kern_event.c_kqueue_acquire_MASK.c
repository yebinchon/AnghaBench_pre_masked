
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqueue {int kq_state; int kq_refcnt; } ;
struct file {scalar_t__ f_type; struct kqueue* f_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kqueue*) ;
 int FUNC_1 (struct kqueue*) ;

__attribute__((used)) static int
FUNC_2(struct file *VAR_3, struct kqueue **VAR_4)
{
 int VAR_5;
 struct kqueue *VAR_6;

 VAR_5 = 0;

 VAR_6 = VAR_3->f_data;
 if (VAR_3->f_type != VAR_0 || VAR_6 == ((void*)0))
  return (VAR_1);
 *VAR_4 = VAR_6;
 FUNC_0(VAR_6);
 if ((VAR_6->kq_state & VAR_2) == VAR_2) {
  FUNC_1(VAR_6);
  return (VAR_1);
 }
 VAR_6->kq_refcnt++;
 FUNC_1(VAR_6);

 return VAR_5;
}
