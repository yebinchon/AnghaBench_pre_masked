
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ u_int ;
typedef int u_char ;
struct rpl_dio_genoption {int rpl_dio_len; scalar_t__ rpl_dio_type; } ;
struct TYPE_5__ {int ndo_vflag; int const* ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct rpl_dio_genoption const,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_1__*,char*,int const*,unsigned int) ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_3,
                 const struct rpl_dio_genoption *VAR_4,
                 u_int VAR_5)
{
        if(VAR_5 < VAR_0) return;
        VAR_5 -= VAR_0;

        FUNC_1(VAR_4->rpl_dio_len);

        while((VAR_4->rpl_dio_type == VAR_1 &&
               (const u_char *)VAR_4 < VAR_3->ndo_snapend) ||
              FUNC_2(*VAR_4,(VAR_4->rpl_dio_len+2))) {

                unsigned int VAR_6 = VAR_4->rpl_dio_len+2;
                if(VAR_4->rpl_dio_type == VAR_1) {
                        VAR_6 = 1;
                        FUNC_0((VAR_3, " opt:pad0"));
                } else {
                        FUNC_0((VAR_3, " opt:%s len:%u ",
                                  FUNC_4(VAR_2, "subopt:%u", VAR_4->rpl_dio_type),
                                  VAR_6));
                        if(VAR_3->ndo_vflag > 2) {
                                unsigned int VAR_7 = VAR_4->rpl_dio_len;
                                if(VAR_7 > VAR_5) VAR_7 = VAR_5;
                                FUNC_3(VAR_3,
                                          " ",
                                          ((const uint8_t *)VAR_4) + VAR_0,
                                          VAR_7);
                        }
                }
                VAR_4 = (const struct rpl_dio_genoption *)(((const char *)VAR_4) + VAR_6);
                VAR_5 -= VAR_6;
        }
        return;
trunc:
 FUNC_0((VAR_3," [|truncated]"));
 return;
}
