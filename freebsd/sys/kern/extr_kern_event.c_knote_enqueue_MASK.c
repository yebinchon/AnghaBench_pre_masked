
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqueue {int kq_count; int kq_head; } ;
struct knote {int kn_status; struct kqueue* kn_kq; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct kqueue*) ;
 int FUNC_2 (int *,struct knote*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct kqueue*) ;

__attribute__((used)) static void
FUNC_4(struct knote *VAR_2)
{
 struct kqueue *VAR_3 = VAR_2->kn_kq;

 FUNC_1(VAR_2->kn_kq);
 FUNC_0((VAR_2->kn_status & VAR_0) == 0, ("knote already queued"));

 FUNC_2(&VAR_3->kq_head, VAR_2, VAR_1);
 VAR_2->kn_status |= VAR_0;
 VAR_3->kq_count++;
 FUNC_3(VAR_3);
}
