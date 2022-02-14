
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_string_t ;
struct TYPE_5__ {int merged_propval; } ;
struct TYPE_6__ {TYPE_1__ prop; } ;
struct TYPE_7__ {int pool; TYPE_2__ type_data; } ;
typedef TYPE_3__ svn_client_conflict_option_t ;


 int FUNC_0 (int const*,int ) ;

void
FUNC_1(
  svn_client_conflict_option_t *VAR_0,
  const svn_string_t *VAR_1)
{
  VAR_0->type_data.prop.merged_propval = FUNC_0(VAR_1,
                                                         VAR_0->pool);
}
