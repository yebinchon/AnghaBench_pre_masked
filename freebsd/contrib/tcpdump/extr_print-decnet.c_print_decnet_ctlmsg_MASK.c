
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sh_flags; } ;
union routehdr {TYPE_1__ rh_short; } ;
struct TYPE_8__ {int eh_data; int eh_hello; int eh_router; int eh_blksize; int eh_info; int eh_src; int eh_ueco; int eh_eco; int eh_vers; int rh_hello; int rh_priority; int rh_blksize; int rh_info; int rh_src; int rh_ueco; int rh_eco; int rh_vers; int r2_src; int r1_src; int te_data; int te_src; int ve_fcnval; int ve_src; int in_hello; int in_ueco; int in_eco; int in_vers; int in_blksize; int in_info; int in_src; } ;
union controlmsg {TYPE_4__ cm_ehello; TYPE_4__ cm_rhello; TYPE_4__ cm_l2rout; TYPE_4__ cm_l1rou; TYPE_4__ cm_test; TYPE_4__ cm_ver; TYPE_4__ cm_init; } ;
typedef int u_int ;
typedef int u_char ;
struct verifmsg {int dummy; } ;
struct testmsg {int dummy; } ;
struct rhellomsg {int dummy; } ;
struct l2rout {int dummy; } ;
struct l1rout {int dummy; } ;
struct initmsg {int dummy; } ;
struct ehellomsg {int dummy; } ;
typedef int srcea ;
typedef int rtea ;
typedef int netdissect_options ;
struct TYPE_6__ {int dne_nodeaddr; } ;
struct TYPE_7__ {TYPE_2__ dne_remote; } ;
typedef TYPE_3__ etheraddr ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__) ;
 int VAR_0 ;







 int FUNC_5 (int *,int) ;
 int FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (char const*,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,char const*,int ) ;
 int FUNC_11 (int *,char const*,int ) ;
 int FUNC_12 (int *,int) ;

__attribute__((used)) static int
FUNC_13(netdissect_options *VAR_1,
                    register const union routehdr *VAR_2, u_int VAR_3,
                    u_int VAR_4)
{

 int VAR_5 = FUNC_1(VAR_2->rh_short.sh_flags);
 register const union controlmsg *VAR_6 = (const union controlmsg *)VAR_2;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 etheraddr VAR_16, VAR_17;
 int VAR_18;
 const char *VAR_19 = (const char *)VAR_2;
 int VAR_20;

 switch (VAR_5 & VAR_0) {
 case 133:
     FUNC_3((VAR_1, "init "));
     if (VAR_3 < sizeof(struct initmsg))
  goto trunc;
     FUNC_4(VAR_6->cm_init);
     VAR_7 = FUNC_0(VAR_6->cm_init.in_src);
     VAR_9 = FUNC_1(VAR_6->cm_init.in_info);
     VAR_10 = FUNC_0(VAR_6->cm_init.in_blksize);
     VAR_15 = FUNC_1(VAR_6->cm_init.in_vers);
     VAR_11 = FUNC_1(VAR_6->cm_init.in_eco);
     VAR_12 = FUNC_1(VAR_6->cm_init.in_ueco);
     VAR_13 = FUNC_0(VAR_6->cm_init.in_hello);
     FUNC_12(VAR_1, VAR_9);
     FUNC_3((VAR_1,
  "src %sblksize %d vers %d eco %d ueco %d hello %d",
   FUNC_5(VAR_1, VAR_7), VAR_10, VAR_15, VAR_11, VAR_12,
   VAR_13));
     VAR_20 = 1;
     break;
 case 128:
     FUNC_3((VAR_1, "verification "));
     if (VAR_3 < sizeof(struct verifmsg))
  goto trunc;
     FUNC_4(VAR_6->cm_ver);
     VAR_7 = FUNC_0(VAR_6->cm_ver.ve_src);
     VAR_14 = FUNC_1(VAR_6->cm_ver.ve_fcnval);
     FUNC_3((VAR_1, "src %s fcnval %o", FUNC_5(VAR_1, VAR_7), VAR_14));
     VAR_20 = 1;
     break;
 case 129:
     FUNC_3((VAR_1, "test "));
     if (VAR_3 < sizeof(struct testmsg))
  goto trunc;
     FUNC_4(VAR_6->cm_test);
     VAR_7 = FUNC_0(VAR_6->cm_test.te_src);
     VAR_14 = FUNC_1(VAR_6->cm_test.te_data);
     FUNC_3((VAR_1, "src %s data %o", FUNC_5(VAR_1, VAR_7), VAR_14));
     VAR_20 = 1;
     break;
 case 132:
     FUNC_3((VAR_1, "lev-1-routing "));
     if (VAR_3 < sizeof(struct l1rout))
  goto trunc;
     FUNC_4(VAR_6->cm_l1rou);
     VAR_7 = FUNC_0(VAR_6->cm_l1rou.r1_src);
     FUNC_3((VAR_1, "src %s ", FUNC_5(VAR_1, VAR_7)));
     VAR_20 = FUNC_10(VAR_1, &(VAR_19[sizeof(struct l1rout)]),
    VAR_3 - sizeof(struct l1rout));
     break;
 case 131:
     FUNC_3((VAR_1, "lev-2-routing "));
     if (VAR_3 < sizeof(struct l2rout))
  goto trunc;
     FUNC_4(VAR_6->cm_l2rout);
     VAR_7 = FUNC_0(VAR_6->cm_l2rout.r2_src);
     FUNC_3((VAR_1, "src %s ", FUNC_5(VAR_1, VAR_7)));
     VAR_20 = FUNC_11(VAR_1, &(VAR_19[sizeof(struct l2rout)]),
    VAR_3 - sizeof(struct l2rout));
     break;
 case 130:
     FUNC_3((VAR_1, "router-hello "));
     if (VAR_3 < sizeof(struct rhellomsg))
  goto trunc;
     FUNC_4(VAR_6->cm_rhello);
     VAR_15 = FUNC_1(VAR_6->cm_rhello.rh_vers);
     VAR_11 = FUNC_1(VAR_6->cm_rhello.rh_eco);
     VAR_12 = FUNC_1(VAR_6->cm_rhello.rh_ueco);
     FUNC_6((char *)&VAR_16, (const char *)&(VAR_6->cm_rhello.rh_src),
  sizeof(VAR_16));
     VAR_7 = FUNC_0(VAR_16.dne_remote.dne_nodeaddr);
     VAR_9 = FUNC_1(VAR_6->cm_rhello.rh_info);
     VAR_10 = FUNC_0(VAR_6->cm_rhello.rh_blksize);
     VAR_18 = FUNC_1(VAR_6->cm_rhello.rh_priority);
     VAR_13 = FUNC_0(VAR_6->cm_rhello.rh_hello);
     FUNC_9(VAR_1, VAR_9);
     FUNC_3((VAR_1,
     "vers %d eco %d ueco %d src %s blksize %d pri %d hello %d",
   VAR_15, VAR_11, VAR_12, FUNC_5(VAR_1, VAR_7),
   VAR_10, VAR_18, VAR_13));
     VAR_20 = FUNC_8(&(VAR_19[sizeof(struct rhellomsg)]),
    VAR_3 - sizeof(struct rhellomsg));
     break;
 case 134:
     FUNC_3((VAR_1, "endnode-hello "));
     if (VAR_3 < sizeof(struct ehellomsg))
  goto trunc;
     FUNC_4(VAR_6->cm_ehello);
     VAR_15 = FUNC_1(VAR_6->cm_ehello.eh_vers);
     VAR_11 = FUNC_1(VAR_6->cm_ehello.eh_eco);
     VAR_12 = FUNC_1(VAR_6->cm_ehello.eh_ueco);
     FUNC_6((char *)&VAR_16, (const char *)&(VAR_6->cm_ehello.eh_src),
  sizeof(VAR_16));
     VAR_7 = FUNC_0(VAR_16.dne_remote.dne_nodeaddr);
     VAR_9 = FUNC_1(VAR_6->cm_ehello.eh_info);
     VAR_10 = FUNC_0(VAR_6->cm_ehello.eh_blksize);

     FUNC_6((char *)&VAR_17, (const char *)&(VAR_6->cm_ehello.eh_router),
  sizeof(VAR_17));
     VAR_8 = FUNC_0(VAR_17.dne_remote.dne_nodeaddr);
     VAR_13 = FUNC_0(VAR_6->cm_ehello.eh_hello);
     VAR_14 = FUNC_1(VAR_6->cm_ehello.eh_data);
     FUNC_9(VAR_1, VAR_9);
     FUNC_3((VAR_1,
 "vers %d eco %d ueco %d src %s blksize %d rtr %s hello %d data %o",
   VAR_15, VAR_11, VAR_12, FUNC_5(VAR_1, VAR_7),
   VAR_10, FUNC_5(VAR_1, VAR_8), VAR_13, VAR_14));
     VAR_20 = 1;
     break;

 default:
     FUNC_3((VAR_1, "unknown control message"));
     FUNC_2((const u_char *)VAR_2, FUNC_7(VAR_3, VAR_4));
     VAR_20 = 1;
     break;
 }
 return (VAR_20);

trunc:
 return (0);
}
