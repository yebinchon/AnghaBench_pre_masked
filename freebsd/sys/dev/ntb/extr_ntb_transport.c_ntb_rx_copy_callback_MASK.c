
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_qp {int dummy; } ;
struct ntb_queue_entry {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ntb_transport_qp*) ;

__attribute__((used)) static inline void
FUNC_1(struct ntb_transport_qp *VAR_1, void *VAR_2)
{
 struct ntb_queue_entry *VAR_3;

 VAR_3 = VAR_2;
 VAR_3->flags |= VAR_0;
 FUNC_0(VAR_1);
}
