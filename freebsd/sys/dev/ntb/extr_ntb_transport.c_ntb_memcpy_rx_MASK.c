
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_transport_qp {int dummy; } ;
struct ntb_queue_entry {unsigned int len; int * buf; struct ifnet* cb_data; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (int ,char*,...) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (void*,unsigned int,int ,struct ifnet*,int *) ;
 int FUNC_2 (struct ntb_transport_qp*,struct ntb_queue_entry*) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(struct ntb_transport_qp *VAR_2, struct ntb_queue_entry *VAR_3,
    void *VAR_4)
{
 struct ifnet *VAR_5 = VAR_3->cb_data;
 unsigned int VAR_6 = VAR_3->len;

 FUNC_0(VAR_1, "RX: copying %d bytes from offset %p", VAR_6, VAR_4);

 VAR_3->buf = (void *)FUNC_1(VAR_4, VAR_6, 0, VAR_5, ((void*)0));
 if (VAR_3->buf == ((void*)0))
  VAR_3->len = -VAR_0;


 FUNC_3();

 FUNC_0(VAR_1, "RX: copied entry %p to mbuf %p.", VAR_3, VAR_3->buf);
 FUNC_2(VAR_2, VAR_3);
}
