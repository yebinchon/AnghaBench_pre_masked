
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2net_sock_container {scalar_t__ sc_handshake_ok; int sc_page_off; int sc_tv_advance_stop; int sc_sock; int sc_page; int sc_tv_advance_start; } ;
struct o2net_msg {int data_len; } ;
struct o2net_handshake {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct o2net_msg*,char*,int) ;
 int FUNC_3 (struct o2net_sock_container*) ;
 int FUNC_4 (struct o2net_sock_container*,struct o2net_msg*) ;
 int FUNC_5 (int ,void*,size_t) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct o2net_sock_container*,char*,...) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct o2net_sock_container *VAR_3)
{
 struct o2net_msg *VAR_4;
 int VAR_5 = 0;
 void *VAR_6;
 size_t VAR_7;

 FUNC_7(VAR_3, "receiving\n");
 FUNC_1(&VAR_3->sc_tv_advance_start);

 if (FUNC_8(VAR_3->sc_handshake_ok == 0)) {
  if(VAR_3->sc_page_off < sizeof(struct o2net_handshake)) {
   VAR_6 = FUNC_6(VAR_3->sc_page) + VAR_3->sc_page_off;
   VAR_7 = sizeof(struct o2net_handshake) - VAR_3->sc_page_off;
   VAR_5 = FUNC_5(VAR_3->sc_sock, VAR_6, VAR_7);
   if (VAR_5 > 0)
    VAR_3->sc_page_off += VAR_5;
  }

  if (VAR_3->sc_page_off == sizeof(struct o2net_handshake)) {
   FUNC_3(VAR_3);
   if (FUNC_8(VAR_3->sc_handshake_ok == 0))
    VAR_5 = -VAR_1;
  }
  goto out;
 }


 if (VAR_3->sc_page_off < sizeof(struct o2net_msg)) {
  VAR_6 = FUNC_6(VAR_3->sc_page) + VAR_3->sc_page_off;
  VAR_7 = sizeof(struct o2net_msg) - VAR_3->sc_page_off;
  VAR_5 = FUNC_5(VAR_3->sc_sock, VAR_6, VAR_7);
  if (VAR_5 > 0) {
   VAR_3->sc_page_off += VAR_5;



   if (VAR_3->sc_page_off == sizeof(struct o2net_msg)) {
    VAR_4 = FUNC_6(VAR_3->sc_page);
    if (FUNC_0(VAR_4->data_len) >
        VAR_2)
     VAR_5 = -VAR_0;
   }
  }
  if (VAR_5 <= 0)
   goto out;
 }

 if (VAR_3->sc_page_off < sizeof(struct o2net_msg)) {

  goto out;
 }


 VAR_4 = FUNC_6(VAR_3->sc_page);

 FUNC_2(VAR_4, "at page_off %zu\n", VAR_3->sc_page_off);


 if (VAR_3->sc_page_off - sizeof(struct o2net_msg) < FUNC_0(VAR_4->data_len)) {

  VAR_6 = FUNC_6(VAR_3->sc_page) + VAR_3->sc_page_off;
  VAR_7 = (sizeof(struct o2net_msg) + FUNC_0(VAR_4->data_len)) -
     VAR_3->sc_page_off;
  VAR_5 = FUNC_5(VAR_3->sc_sock, VAR_6, VAR_7);
  if (VAR_5 > 0)
   VAR_3->sc_page_off += VAR_5;
  if (VAR_5 <= 0)
   goto out;
 }

 if (VAR_3->sc_page_off - sizeof(struct o2net_msg) == FUNC_0(VAR_4->data_len)) {



  VAR_5 = FUNC_4(VAR_3, VAR_4);
  if (VAR_5 == 0)
   VAR_5 = 1;
  VAR_3->sc_page_off = 0;
 }

out:
 FUNC_7(VAR_3, "ret = %d\n", VAR_5);
 FUNC_1(&VAR_3->sc_tv_advance_stop);
 return VAR_5;
}
