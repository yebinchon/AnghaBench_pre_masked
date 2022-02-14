
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct protoent {char* p_name; } ;
struct TYPE_2__ {scalar_t__ s_addr; } ;
struct nat44_cfg_spool {int port; TYPE_1__ addr; } ;
struct nat44_cfg_redir {int mode; int spool_cnt; int lport; int pport_cnt; int pport; int rport; int rport_cnt; TYPE_1__ raddr; TYPE_1__ paddr; TYPE_1__ laddr; int proto; } ;
struct nat44_cfg_nat {char* name; char* if_name; int mode; int redir_cnt; TYPE_1__ ip; } ;
typedef int * caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int FUNC_0 (int ,char*) ;
 struct protoent* FUNC_1 (int ) ;
 char* FUNC_2 (TYPE_1__) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(struct nat44_cfg_nat *VAR_9, void *VAR_10)
{
 int VAR_11, VAR_12, VAR_13;
 struct nat44_cfg_redir *VAR_14;
 struct nat44_cfg_spool *VAR_15;
 caddr_t VAR_16;
 struct protoent *VAR_17;

 VAR_16 = (caddr_t)VAR_9;
 VAR_13 = sizeof(*VAR_9);
 FUNC_3("ipfw nat %s config", VAR_9->name);
 if (FUNC_4(VAR_9->if_name) != 0)
  FUNC_3(" if %s", VAR_9->if_name);
 else if (VAR_9->ip.s_addr != 0)
  FUNC_3(" ip %s", FUNC_2(VAR_9->ip));
 while (VAR_9->mode != 0) {
  if (VAR_9->mode & VAR_2) {
   FUNC_3(" log");
   VAR_9->mode &= ~VAR_2;
  } else if (VAR_9->mode & VAR_1) {
   FUNC_3(" deny_in");
   VAR_9->mode &= ~VAR_1;
  } else if (VAR_9->mode & VAR_6) {
   FUNC_3(" same_ports");
   VAR_9->mode &= ~VAR_6;
  } else if (VAR_9->mode & VAR_7) {
   FUNC_3(" skip_global");
   VAR_9->mode &= ~VAR_7;
  } else if (VAR_9->mode & VAR_8) {
   FUNC_3(" unreg_only");
   VAR_9->mode &= ~VAR_8;
  } else if (VAR_9->mode & VAR_4) {
   FUNC_3(" reset");
   VAR_9->mode &= ~VAR_4;
  } else if (VAR_9->mode & VAR_5) {
   FUNC_3(" reverse");
   VAR_9->mode &= ~VAR_5;
  } else if (VAR_9->mode & VAR_3) {
   FUNC_3(" proxy_only");
   VAR_9->mode &= ~VAR_3;
  }
 }

 for (VAR_12 = 0; VAR_12 < VAR_9->redir_cnt; VAR_12++) {
  VAR_14 = (struct nat44_cfg_redir *)&VAR_16[VAR_13];
  VAR_13 += sizeof(struct nat44_cfg_redir);
  switch (VAR_14->mode) {
  case 130:
   FUNC_3(" redirect_addr");
   if (VAR_14->spool_cnt == 0)
    FUNC_3(" %s", FUNC_2(VAR_14->laddr));
   else
    for (VAR_11 = 0; VAR_11 < VAR_14->spool_cnt; VAR_11++) {
     VAR_15 = (struct nat44_cfg_spool *)&VAR_16[VAR_13];
     if (VAR_11)
      FUNC_3(",");
     else
      FUNC_3(" ");
     FUNC_3("%s", FUNC_2(VAR_15->addr));
     VAR_13 += sizeof(struct nat44_cfg_spool);
    }
   FUNC_3(" %s", FUNC_2(VAR_14->paddr));
   break;
  case 129:
   VAR_17 = FUNC_1(VAR_14->proto);
   FUNC_3(" redirect_port %s ", VAR_17->p_name);
   if (!VAR_14->spool_cnt) {
    FUNC_3("%s:%u", FUNC_2(VAR_14->laddr), VAR_14->lport);
    if (VAR_14->pport_cnt > 1)
     FUNC_3("-%u", VAR_14->lport +
         VAR_14->pport_cnt - 1);
   } else
    for (VAR_11=0; VAR_11 < VAR_14->spool_cnt; VAR_11++) {
     VAR_15 = (struct nat44_cfg_spool *)&VAR_16[VAR_13];
     if (VAR_11)
      FUNC_3(",");
     FUNC_3("%s:%u", FUNC_2(VAR_15->addr),
         VAR_15->port);
     VAR_13 += sizeof(struct nat44_cfg_spool);
    }

   FUNC_3(" ");
   if (VAR_14->paddr.s_addr)
    FUNC_3("%s:", FUNC_2(VAR_14->paddr));
   FUNC_3("%u", VAR_14->pport);
   if (!VAR_14->spool_cnt && VAR_14->pport_cnt > 1)
    FUNC_3("-%u", VAR_14->pport + VAR_14->pport_cnt - 1);

   if (VAR_14->raddr.s_addr) {
    FUNC_3(" %s", FUNC_2(VAR_14->raddr));
    if (VAR_14->rport) {
     FUNC_3(":%u", VAR_14->rport);
     if (!VAR_14->spool_cnt && VAR_14->rport_cnt > 1)
      FUNC_3("-%u", VAR_14->rport +
          VAR_14->rport_cnt - 1);
    }
   }
   break;
  case 128:
   VAR_17 = FUNC_1(VAR_14->proto);
   FUNC_3(" redirect_proto %s %s", VAR_17->p_name,
       FUNC_2(VAR_14->laddr));
   if (VAR_14->paddr.s_addr != 0) {
    FUNC_3(" %s", FUNC_2(VAR_14->paddr));
    if (VAR_14->raddr.s_addr)
     FUNC_3(" %s", FUNC_2(VAR_14->raddr));
   }
   break;
  default:
   FUNC_0(VAR_0, "unknown redir mode");
   break;
  }
 }
 FUNC_3("\n");
}
