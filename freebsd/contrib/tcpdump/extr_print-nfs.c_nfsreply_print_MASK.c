
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct sunrpc_msg {int rm_xid; } ;
typedef int srcid ;
struct TYPE_6__ {int ndo_nflag; } ;
typedef TYPE_1__ netdissect_options ;
typedef int dstid ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_1__*,int const*,int ,int const*) ;
 int FUNC_4 (TYPE_1__*,int const*,char*,char*) ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (char*,char*,int) ;
 int VAR_2 ;

void
FUNC_7(netdissect_options *VAR_3,
               register const u_char *VAR_4, u_int VAR_5,
               register const u_char *VAR_6)
{
 register const struct sunrpc_msg *VAR_7;
 char VAR_8[20], VAR_9[20];

 VAR_1 = 0;
 VAR_7 = (const struct sunrpc_msg *)VAR_4;

 FUNC_2(VAR_7->rm_xid);
 if (!VAR_3->ndo_nflag) {
  FUNC_6(VAR_8, "nfs", sizeof(VAR_8));
  FUNC_5(VAR_9, sizeof(VAR_9), "%u",
      FUNC_0(&VAR_7->rm_xid));
 } else {
  FUNC_5(VAR_8, sizeof(VAR_8), "%u", VAR_0);
  FUNC_5(VAR_9, sizeof(VAR_9), "%u",
      FUNC_0(&VAR_7->rm_xid));
 }
 FUNC_4(VAR_3, VAR_6, VAR_8, VAR_9);

 FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6);
 return;

trunc:
 if (!VAR_1)
  FUNC_1((VAR_3, "%s", VAR_2));
}
