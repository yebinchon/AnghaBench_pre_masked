
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sjlj_lp_info {int action_index; int call_site_index; int dispatch_index; scalar_t__ directly_reachable; } ;
struct eh_region {int landing_pad; } ;
typedef int rtx ;
typedef int htab_t ;
struct TYPE_4__ {int uses_eh_lsda; TYPE_1__* eh; } ;
struct TYPE_3__ {int last_region_number; int region_array; int action_record_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,char*) ;
 struct eh_region* FUNC_2 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int) ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_4 (int ,struct eh_region*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int,int ,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7 (rtx VAR_6, struct sjlj_lp_info *VAR_7)
{
  htab_t VAR_8;
  int VAR_9, VAR_10;



  FUNC_1 (VAR_3->eh->action_record_data, 64, "action_record_data");
  VAR_8 = FUNC_5 (31, VAR_1, VAR_0, VAR_5);

  for (VAR_9 = VAR_3->eh->last_region_number; VAR_9 > 0; --VAR_9)
    if (VAR_7[VAR_9].directly_reachable)
      {
 struct eh_region *VAR_11 = FUNC_2 (VAR_4, VAR_3->eh->region_array, VAR_9);

 VAR_11->landing_pad = VAR_6;
 VAR_7[VAR_9].action_index = FUNC_4 (VAR_8, VAR_11);
 if (VAR_7[VAR_9].action_index != -1)
   VAR_3->uses_eh_lsda = 1;
      }

  FUNC_6 (VAR_8);
  VAR_10 = 0;
  for (VAR_9 = VAR_3->eh->last_region_number; VAR_9 > 0; --VAR_9)
    if (VAR_7[VAR_9].directly_reachable)
      VAR_7[VAR_9].dispatch_index = VAR_10++;





  VAR_2 = 1;
  for (VAR_9 = VAR_3->eh->last_region_number; VAR_9 > 0; --VAR_9)
    if (VAR_7[VAR_9].directly_reachable)
      {
 int VAR_12 = VAR_7[VAR_9].action_index;


 if (VAR_12 == -2)
   VAR_10 = 0;

 else if (VAR_12 == -1)
   VAR_10 = -1;

 else
   VAR_10 = FUNC_3 (FUNC_0 (VAR_7[VAR_9].dispatch_index), VAR_12);

 VAR_7[VAR_9].call_site_index = VAR_10;
      }
}
