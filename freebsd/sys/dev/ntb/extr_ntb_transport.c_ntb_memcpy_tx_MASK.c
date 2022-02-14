
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_queue_entry {int len; int * buf; } ;
struct mbuf {int dummy; } ;


 int FUNC_0 (int ,char*,int ,void*) ;
 int VAR_0 ;
 int FUNC_1 (struct mbuf*,int ,int ,void*) ;
 int FUNC_2 (struct ntb_queue_entry*) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(struct ntb_queue_entry *VAR_1, void *VAR_2)
{

 FUNC_0(VAR_0, "TX: copying %d bytes to offset %p", VAR_1->len, VAR_2);
 if (VAR_1->buf != ((void*)0)) {
  FUNC_1((struct mbuf *)VAR_1->buf, 0, VAR_1->len, VAR_2);





  FUNC_3();
 }

 FUNC_2(VAR_1);
}
