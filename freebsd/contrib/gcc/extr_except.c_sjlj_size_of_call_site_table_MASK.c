
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
 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2 (void)
{
  int VAR_1 = VAR_0->eh->call_site_data_used;
  int VAR_2 = 0;
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3)
    {
      struct call_site_record *VAR_4 = &VAR_0->eh->call_site_data[VAR_3];
      VAR_2 += FUNC_1 (FUNC_0 (VAR_4->landing_pad));
      VAR_2 += FUNC_1 (VAR_4->action);
    }

  return VAR_2;
}
