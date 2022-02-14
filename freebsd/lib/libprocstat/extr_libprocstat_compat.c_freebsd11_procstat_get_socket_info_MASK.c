
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockstat {int dname; int type; int sa_peer; int sa_local; int so_snd_sb_state; int so_rcv_sb_state; int proto; int dom_family; int unp_conn; int so_pcb; int so_addr; int inp_ppcb; } ;
struct procstat {int dummy; } ;
struct freebsd11_sockstat {int dname; int type; int sa_peer; int sa_local; int so_snd_sb_state; int so_rcv_sb_state; int proto; int dom_family; int unp_conn; int so_pcb; int so_addr; int inp_ppcb; } ;
struct filestat {int dummy; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct procstat*,struct filestat*,struct sockstat*,char*) ;

int
FUNC_2(struct procstat *VAR_0, struct filestat *VAR_1,
    struct freebsd11_sockstat *VAR_2, char *VAR_3)
{
 struct sockstat VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_1, &VAR_4, VAR_3);
 if (VAR_5 != 0)
  return (VAR_5);
 VAR_2->inp_ppcb = VAR_4.inp_ppcb;
 VAR_2->so_addr = VAR_4.so_addr;
 VAR_2->so_pcb = VAR_4.so_pcb;
 VAR_2->unp_conn = VAR_4.unp_conn;
 VAR_2->dom_family = VAR_4.dom_family;
 VAR_2->proto = VAR_4.proto;
 VAR_2->so_rcv_sb_state = VAR_4.so_rcv_sb_state;
 VAR_2->so_snd_sb_state = VAR_4.so_snd_sb_state;
 VAR_2->sa_local = VAR_4.sa_local;
 VAR_2->sa_peer = VAR_4.sa_peer;
 VAR_2->type = VAR_4.type;
 FUNC_0(VAR_2->dname, VAR_4.dname, sizeof(VAR_4.dname));
 return (0);
}
