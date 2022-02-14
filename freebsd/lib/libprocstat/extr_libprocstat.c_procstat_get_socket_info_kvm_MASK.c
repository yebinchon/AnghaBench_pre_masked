
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u_long ;
struct unpcb {scalar_t__ unp_conn; } ;
struct sockstat {uintptr_t so_addr; char* dname; int dom_family; uintptr_t so_pcb; uintptr_t inp_ppcb; uintptr_t unp_conn; int recvq; int sendq; int so_snd_sb_state; int so_rcv_sb_state; int proto; int type; void* fs_typedep; } ;
struct TYPE_4__ {int sb_ccc; int sb_state; } ;
struct TYPE_3__ {int sb_ccc; int sb_state; } ;
struct socket {int dom_family; TYPE_2__ so_rcv; TYPE_1__ so_snd; scalar_t__ so_pcb; int pr_protocol; int so_type; scalar_t__ dom_name; scalar_t__ pr_domain; scalar_t__ so_proto; } ;
struct protosw {int dom_family; TYPE_2__ so_rcv; TYPE_1__ so_snd; scalar_t__ so_pcb; int pr_protocol; int so_type; scalar_t__ dom_name; scalar_t__ pr_domain; scalar_t__ so_proto; } ;
struct inpcb {scalar_t__ inp_ppcb; } ;
struct filestat {uintptr_t so_addr; char* dname; int dom_family; uintptr_t so_pcb; uintptr_t inp_ppcb; uintptr_t unp_conn; int recvq; int sendq; int so_snd_sb_state; int so_rcv_sb_state; int proto; int type; void* fs_typedep; } ;
struct domain {int dom_family; TYPE_2__ so_rcv; TYPE_1__ so_snd; scalar_t__ so_pcb; int pr_protocol; int so_type; scalar_t__ dom_name; scalar_t__ pr_domain; scalar_t__ so_proto; } ;
typedef size_t ssize_t ;
typedef struct sockstat kvm_t ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockstat*) ;
 int FUNC_1 (struct sockstat*,int) ;
 int FUNC_2 (struct sockstat*,unsigned long,char*,int) ;
 int FUNC_3 (struct sockstat*,unsigned long,struct socket*,int) ;
 int FUNC_4 (char*,int ,char*) ;
 int FUNC_5 (char*,void*) ;

__attribute__((used)) static int
FUNC_6(kvm_t *VAR_2, struct filestat *VAR_3,
    struct sockstat *VAR_4, char *VAR_5)
{
 struct domain VAR_6;
 struct inpcb VAR_7;
 struct protosw VAR_8;
 struct socket VAR_9;
 struct unpcb VAR_10;
 ssize_t VAR_11;
 void *VAR_12;

 FUNC_0(VAR_2);
 FUNC_0(VAR_4);
 FUNC_0(VAR_3);
 FUNC_1(VAR_4, sizeof(*VAR_4));
 VAR_12 = VAR_3->fs_typedep;
 if (VAR_12 == ((void*)0))
  goto fail;
 VAR_4->so_addr = (uintptr_t)VAR_12;

 if (!FUNC_3(VAR_2, (unsigned long)VAR_12, &VAR_9,
     sizeof(struct socket))) {
  FUNC_5("can't read sock at %p", (void *)VAR_12);
  goto fail;
 }

 if (!FUNC_3(VAR_2, (unsigned long)VAR_9.so_proto, &VAR_8,
     sizeof(struct protosw))) {
  FUNC_5("can't read protosw at %p", (void *)VAR_9.so_proto);
  goto fail;
 }

 if (!FUNC_3(VAR_2, (unsigned long)VAR_8.pr_domain, &VAR_6,
     sizeof(struct domain))) {
  FUNC_5("can't read domain at %p",
      (void *)VAR_8.pr_domain);
  goto fail;
 }
 if ((VAR_11 = FUNC_2(VAR_2, (unsigned long)VAR_6.dom_name, VAR_4->dname,
     sizeof(VAR_4->dname) - 1)) < 0) {
  FUNC_5("can't read domain name at %p", (void *)VAR_6.dom_name);
  VAR_4->dname[0] = '\0';
 }
 else
  VAR_4->dname[VAR_11] = '\0';




 VAR_4->type = VAR_9.so_type;
 VAR_4->proto = VAR_8.pr_protocol;
 VAR_4->dom_family = VAR_6.dom_family;
 VAR_4->so_pcb = (uintptr_t)VAR_9.so_pcb;




 switch(VAR_6.dom_family) {
 case 130:
 case 129:
  if (VAR_8.pr_protocol == VAR_0) {
   if (VAR_9.so_pcb) {
    if (FUNC_2(VAR_2, (u_long)VAR_9.so_pcb,
        (char *)&VAR_7, sizeof(struct inpcb))
        != sizeof(struct inpcb)) {
     FUNC_5("can't read inpcb at %p",
         (void *)VAR_9.so_pcb);
    } else
     VAR_4->inp_ppcb =
         (uintptr_t)VAR_7.inp_ppcb;
    VAR_4->sendq = VAR_9.so_snd.sb_ccc;
    VAR_4->recvq = VAR_9.so_rcv.sb_ccc;
   }
  }
  break;
 case 128:
  if (VAR_9.so_pcb) {
   if (FUNC_2(VAR_2, (u_long)VAR_9.so_pcb, (char *)&VAR_10,
       sizeof(struct unpcb)) != sizeof(struct unpcb)){
    FUNC_5("can't read unpcb at %p",
        (void *)VAR_9.so_pcb);
   } else if (VAR_10.unp_conn) {
    VAR_4->so_rcv_sb_state = VAR_9.so_rcv.sb_state;
    VAR_4->so_snd_sb_state = VAR_9.so_snd.sb_state;
    VAR_4->unp_conn = (uintptr_t)VAR_10.unp_conn;
    VAR_4->sendq = VAR_9.so_snd.sb_ccc;
    VAR_4->recvq = VAR_9.so_rcv.sb_ccc;
   }
  }
  break;
 default:
  break;
 }
 return (0);

fail:
 if (VAR_5 != ((void*)0))
  FUNC_4(VAR_5, VAR_1, "error");
 return (1);
}
