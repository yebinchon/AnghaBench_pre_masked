
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t action; TYPE_1__* ccache; int backoff_time; int fire_count; int expire_time; int fire_time; } ;
typedef TYPE_2__ kcm_event ;
struct TYPE_5__ {int name; } ;


 int * VAR_0 ;
 int FUNC_0 (int,char*,char*,TYPE_2__*,char*,int ,char*,int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(kcm_event *VAR_1, char *VAR_2)
{
    char VAR_3[64], VAR_4[64];

    FUNC_1(VAR_1->fire_time, VAR_3);
    FUNC_1(VAR_1->expire_time, VAR_4);

    FUNC_0(7, "%s event %08x: fire_time %s fire_count %d expire_time %s "
     "backoff_time %d action %s cache %s",
     VAR_2, VAR_1, VAR_3, VAR_1->fire_count, VAR_4,
     VAR_1->backoff_time, VAR_0[VAR_1->action],
     VAR_1->ccache->name);
}
