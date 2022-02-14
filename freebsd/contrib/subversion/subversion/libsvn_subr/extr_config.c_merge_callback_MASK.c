
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_boolean_t ;
struct TYPE_5__ {int name; } ;
typedef TYPE_1__ cfg_section_t ;
struct TYPE_6__ {int value; int name; } ;
typedef TYPE_2__ cfg_option_t ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,int ,int ) ;

__attribute__((used)) static svn_boolean_t
FUNC_1(void *VAR_1, cfg_section_t *VAR_2, cfg_option_t *VAR_3)
{
  FUNC_0(VAR_1, VAR_2->name, VAR_3->name, VAR_3->value);
  return VAR_0;
}
