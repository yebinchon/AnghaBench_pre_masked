
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
struct rpl_dio_genoption {int dummy; } ;
struct nd_rpl_dao {int rpl_flags; int rpl_instanceid; int rpl_daoseq; int rpl_dagid; } ;
struct TYPE_6__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct nd_rpl_dao const) ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 char* FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*,struct rpl_dio_genoption const*,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(netdissect_options *VAR_2,
              const u_char *VAR_3, u_int VAR_4)
{
        const struct nd_rpl_dao *VAR_5 = (const struct nd_rpl_dao *)VAR_3;
        const char *VAR_6 = "<elided>";

        FUNC_1(*VAR_5);
        if (VAR_4 < VAR_1)
         goto tooshort;

        VAR_3 += VAR_1;
        VAR_4 -= VAR_1;
        if(FUNC_3(VAR_5->rpl_flags)) {
                FUNC_2(VAR_5->rpl_dagid, VAR_0);
                if (VAR_4 < VAR_0)
                 goto tooshort;
                VAR_6 = FUNC_5 (VAR_2, VAR_5->rpl_dagid);
                VAR_3 += VAR_0;
                VAR_4 -= VAR_0;
        }

        FUNC_0((VAR_2, " [dagid:%s,seq:%u,instance:%u%s%s,%02x]",
                  VAR_6,
                  VAR_5->rpl_daoseq,
                  VAR_5->rpl_instanceid,
                  FUNC_4(VAR_5->rpl_flags) ? ",acK":"",
                  FUNC_3(VAR_5->rpl_flags) ? ",Dagid":"",
                  VAR_5->rpl_flags));

        if(VAR_2->ndo_vflag > 1) {
                const struct rpl_dio_genoption *VAR_7 = (const struct rpl_dio_genoption *)VAR_3;
                FUNC_6(VAR_2, VAR_7, VAR_4);
        }
 return;

trunc:
 FUNC_0((VAR_2," [|truncated]"));
 return;

tooshort:
 FUNC_0((VAR_2," [|length too short]"));
 return;
}
