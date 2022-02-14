
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqueue {int kq_refcnt; } ;


 int FUNC_0 (struct kqueue*) ;
 int FUNC_1 (struct kqueue*) ;
 int FUNC_2 (struct kqueue*) ;
 int FUNC_3 (int*) ;

__attribute__((used)) static void
FUNC_4(struct kqueue *VAR_0, int VAR_1)
{
 if (VAR_1)
  FUNC_1(VAR_0);
 else
  FUNC_0(VAR_0);
 VAR_0->kq_refcnt--;
 if (VAR_0->kq_refcnt == 1)
  FUNC_3(&VAR_0->kq_refcnt);
 if (!VAR_1)
  FUNC_2(VAR_0);
}
