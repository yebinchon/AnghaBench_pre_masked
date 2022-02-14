
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int tos_metric; int tos_type; } ;
struct TYPE_3__ {int link_tos_count; } ;
union un_tos {TYPE_2__ metrics; TYPE_1__ link; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (union un_tos const) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_4(netdissect_options *VAR_1,
                       const union un_tos *VAR_2)
{
    int VAR_3;
    int VAR_4;

    VAR_4 = VAR_2->link.link_tos_count+1;
    VAR_3 = 0;




    while (VAR_4 > 0) {
        FUNC_2(*VAR_2);
        FUNC_1((VAR_1, "\n\t\ttopology %s (%u), metric %u",
               FUNC_3(VAR_0, "Unknown",
                       VAR_3 ? VAR_2->metrics.tos_type : 0),
               VAR_3 ? VAR_2->metrics.tos_type : 0,
               FUNC_0(&VAR_2->metrics.tos_metric)));
        VAR_3++;
        VAR_2++;
        VAR_4--;
    }
    return 0;
trunc:
    return 1;
}
