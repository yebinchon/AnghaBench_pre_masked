
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct rpl_dio_genoption {int dummy; } ;
struct nd_rpl_dio {int rpl_mopprf; int rpl_dagrank; int rpl_instanceid; int rpl_dtsn; int rpl_dagid; } ;
struct TYPE_6__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct nd_rpl_dio const) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,struct rpl_dio_genoption const*,int ) ;
 int VAR_0 ;
 int FUNC_8 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_9(netdissect_options *VAR_1,
              const u_char *VAR_2, u_int VAR_3)
{
        const struct nd_rpl_dio *VAR_4 = (const struct nd_rpl_dio *)VAR_2;
        const char *VAR_5;

        FUNC_2(*VAR_4);
        VAR_5 = FUNC_6 (VAR_1, VAR_4->rpl_dagid);

        FUNC_1((VAR_1, " [dagid:%s,seq:%u,instance:%u,rank:%u,%smop:%s,prf:%u]",
                  VAR_5,
                  VAR_4->rpl_dtsn,
                  VAR_4->rpl_instanceid,
                  FUNC_0(&VAR_4->rpl_dagrank),
                  FUNC_3(VAR_4->rpl_mopprf) ? "grounded,":"",
                  FUNC_8(VAR_0, "mop%u", FUNC_4(VAR_4->rpl_mopprf)),
                  FUNC_5(VAR_4->rpl_mopprf)));

        if(VAR_1->ndo_vflag > 1) {
                const struct rpl_dio_genoption *VAR_6 = (const struct rpl_dio_genoption *)&VAR_4[1];
                FUNC_7(VAR_1, VAR_6, VAR_3);
        }
 return;
trunc:
 FUNC_1((VAR_1," [|truncated]"));
 return;
}
