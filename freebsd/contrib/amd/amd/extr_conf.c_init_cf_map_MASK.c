
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cfm_flags; int cfm_search_path; int cfm_opts; int cfm_defaults; int cfm_type; } ;
typedef TYPE_1__ cf_map_t ;
struct TYPE_5__ {int flags; int search_path; int map_options; int map_defaults; int map_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;

__attribute__((used)) static void
FUNC_0(cf_map_t *VAR_6)
{
  if (!VAR_6)
    return;
  VAR_6->cfm_type = VAR_5.map_type;


  VAR_6->cfm_defaults = VAR_5.map_defaults;


  VAR_6->cfm_opts = VAR_5.map_options;


  VAR_6->cfm_search_path = VAR_5.search_path;





  VAR_6->cfm_flags = VAR_5.flags & (VAR_0 |
     VAR_1 |
     VAR_2 |
     VAR_3 |
     VAR_4 );
}
