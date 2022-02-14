
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct call_site_record {int action; int landing_pad; } ;
struct TYPE_4__ {TYPE_1__* eh; } ;
struct TYPE_3__ {int call_site_data_used; struct call_site_record* call_site_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  int VAR_2 = VAR_1->eh->call_site_data_used;
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
    {
      struct call_site_record *VAR_4 = &VAR_1->eh->call_site_data[VAR_3];

      FUNC_1 (FUNC_0 (VAR_4->landing_pad),
       "region %d landing pad", VAR_3);
      FUNC_1 (VAR_4->action, "action");
    }

  VAR_0 += VAR_2;
}
