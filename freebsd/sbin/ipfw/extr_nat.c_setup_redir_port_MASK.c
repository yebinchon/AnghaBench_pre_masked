
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_short ;
struct TYPE_3__ {void* s_addr; } ;
struct nat44_cfg_spool {void* port; TYPE_1__ addr; } ;
struct nat44_cfg_redir {scalar_t__ proto; int pport_cnt; int rport_cnt; int spool_cnt; void* pport; void* rport; TYPE_1__ raddr; void* lport; TYPE_1__ paddr; TYPE_1__ laddr; int mode; } ;
typedef int port_range ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (char*,TYPE_1__*,char*,int *) ;
 scalar_t__ FUNC_6 (char*,char*,int *) ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 (int ,char*) ;
 scalar_t__ FUNC_9 (char) ;
 int * FUNC_10 (char*,char) ;
 char* FUNC_11 (char*,char*) ;

__attribute__((used)) static int
FUNC_12(char *VAR_5, int *VAR_6, char ***VAR_7)
{
 struct nat44_cfg_redir *VAR_8;
 char *VAR_9, *VAR_10, *VAR_11 = ((void*)0);
 size_t VAR_12;
 u_short VAR_13;
 port_range VAR_14;

 VAR_13 = 0;

 VAR_8 = (struct nat44_cfg_redir *)VAR_5;
 VAR_8->mode = VAR_4;

 VAR_5 = &VAR_5[sizeof(struct nat44_cfg_redir)];
 VAR_12 = sizeof(struct nat44_cfg_redir);




 VAR_8->proto = FUNC_7(**VAR_7);
 VAR_10 = **VAR_7;
 (*VAR_7)++; (*VAR_6)--;




 if (FUNC_10(**VAR_7, ',') != ((void*)0)) {
  VAR_8->laddr.s_addr = VAR_2;
  VAR_8->lport = ~0;
  VAR_13 = 1;
  VAR_11 = **VAR_7;
 } else {





  if (VAR_8->proto == VAR_3) {
   if (FUNC_10(**VAR_7, ':'))
    FUNC_8(VAR_0, "redirect_port:"
        "port numbers do not change in sctp, so do "
        "not specify them as part of the target");
   else
    FUNC_4(**VAR_7, &VAR_8->laddr);
  } else {
   if (FUNC_5(**VAR_7, &VAR_8->laddr, VAR_10,
       &VAR_14) != 0)
    FUNC_8(VAR_0, "redirect_port: "
        "invalid local port range");

   VAR_8->lport = FUNC_0(VAR_14);
   VAR_13 = FUNC_1(VAR_14);
  }
 }
 (*VAR_7)++; (*VAR_6)--;




 if (FUNC_10(**VAR_7, ':') != ((void*)0)) {
  if (FUNC_5(**VAR_7, &VAR_8->paddr, VAR_10,
      &VAR_14) != 0)
   FUNC_8(VAR_0, "redirect_port: "
       "invalid public port range");
 } else {
  VAR_8->paddr.s_addr = VAR_1;
  if (FUNC_6(**VAR_7, VAR_10, &VAR_14) != 0)
   FUNC_8(VAR_0, "redirect_port: "
       "invalid public port range");
 }

 VAR_8->pport = FUNC_0(VAR_14);
 if (VAR_8->proto == VAR_3) {
  VAR_13 = FUNC_1(VAR_14);
  VAR_8->lport = VAR_8->pport;
 }
 VAR_8->pport_cnt = FUNC_1(VAR_14);
 (*VAR_7)++; (*VAR_6)--;
 if (*VAR_6 != 0 && FUNC_9(***VAR_7)) {
  if (FUNC_10(**VAR_7, ':') != ((void*)0)) {
   if (FUNC_5(**VAR_7, &VAR_8->raddr, VAR_10,
       &VAR_14) != 0)
    FUNC_8(VAR_0, "redirect_port: "
        "invalid remote port range");
  } else {
   FUNC_2(VAR_14, 0);
   FUNC_3(VAR_14, 1);
   FUNC_4(**VAR_7, &VAR_8->raddr);
  }
  (*VAR_7)++; (*VAR_6)--;
 } else {
  FUNC_2(VAR_14, 0);
  FUNC_3(VAR_14, 1);
  VAR_8->raddr.s_addr = VAR_1;
 }
 VAR_8->rport = FUNC_0(VAR_14);
 VAR_8->rport_cnt = FUNC_1(VAR_14);




 if (VAR_13 != VAR_8->pport_cnt)
  FUNC_8(VAR_0, "redirect_port: "
      "port ranges must be equal in size");


 if (VAR_8->rport_cnt != VAR_13 &&
     (VAR_8->rport_cnt != 1 || VAR_8->rport != 0))
  FUNC_8(VAR_0, "redirect_port: remote port must"
      "be 0 or equal to local port range in size");


 if (VAR_11 != ((void*)0)) {
  struct nat44_cfg_spool *VAR_15;

  VAR_9 = FUNC_11(VAR_11, ",");
  while (VAR_9 != ((void*)0)) {
   VAR_15 = (struct nat44_cfg_spool *)VAR_5;
   VAR_12 += sizeof(struct nat44_cfg_spool);





   if (VAR_8->proto == VAR_3) {
    if (FUNC_10 (VAR_9, ':')) {
     FUNC_8(VAR_0, "redirect_port:"
         "port numbers do not change in "
         "sctp, so do not specify them as "
         "part of the target");
    } else {
     FUNC_4(VAR_9, &VAR_15->addr);
     VAR_15->port = VAR_8->pport;
    }
   } else {
    if (FUNC_5(VAR_9, &VAR_15->addr,
     VAR_10, &VAR_14) != 0)
     FUNC_8(VAR_0, "redirect_port:"
         "invalid local port range");
    if (FUNC_1(VAR_14) != 1)
     FUNC_8(VAR_0, "redirect_port: "
         "local port must be single in "
         "this context");
    VAR_15->port = FUNC_0(VAR_14);
   }
   VAR_8->spool_cnt++;

   VAR_5 = &VAR_5[sizeof(struct nat44_cfg_spool)];
   VAR_9 = FUNC_11(((void*)0), ",");
  }
 }

 return (VAR_12);
}
