
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct call_site_record {int action; int landing_pad; } ;
typedef int rtx ;
struct TYPE_4__ {TYPE_1__* eh; } ;
struct TYPE_3__ {int call_site_data_used; int call_site_data_size; struct call_site_record* call_site_data; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 struct call_site_record* FUNC_0 (struct call_site_record*,int) ;

__attribute__((used)) static int
FUNC_1 (rtx VAR_2, int VAR_3)
{
  struct call_site_record *VAR_4 = VAR_1->eh->call_site_data;
  int VAR_5 = VAR_1->eh->call_site_data_used;
  int VAR_6 = VAR_1->eh->call_site_data_size;

  if (VAR_5 >= VAR_6)
    {
      VAR_6 = (VAR_6 ? VAR_6 * 2 : 64);
      VAR_4 = FUNC_0 (VAR_4, sizeof (*VAR_4) * VAR_6);
      VAR_1->eh->call_site_data = VAR_4;
      VAR_1->eh->call_site_data_size = VAR_6;
    }

  VAR_4[VAR_5].landing_pad = VAR_2;
  VAR_4[VAR_5].action = VAR_3;

  VAR_1->eh->call_site_data_used = VAR_5 + 1;

  return VAR_5 + VAR_0;
}
