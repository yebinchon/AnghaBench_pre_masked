
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int pool; int option_names_case_sensitive; scalar_t__ read_only; } ;
typedef TYPE_1__ svn_config_t ;
struct TYPE_14__ {int options; } ;
typedef TYPE_2__ cfg_section_t ;
struct TYPE_15__ {int hash_key; int state; int value; } ;
typedef TYPE_3__ cfg_option_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char const*) ;
 TYPE_3__* FUNC_2 (TYPE_1__*,char const*,char const*,TYPE_2__**) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_2__* FUNC_4 (TYPE_1__*,char const*) ;
 int FUNC_5 (TYPE_3__**,char const*,char const*,int ,int ) ;
 int FUNC_6 (int ,int ,TYPE_3__*) ;

void
FUNC_7(svn_config_t *VAR_1,
               const char *VAR_2, const char *VAR_3,
               const char *VAR_4)
{
  cfg_section_t *VAR_5;
  cfg_option_t *VAR_6;
  if (VAR_1->read_only)
    return;

  FUNC_3(VAR_1);

  VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, &VAR_5);
  if (VAR_6 != ((void*)0))
    {

      VAR_6->value = FUNC_1(VAR_1->pool, VAR_4);
      VAR_6->state = VAR_0;
      return;
    }


  FUNC_5(&VAR_6, VAR_3, VAR_4,
                           VAR_1->option_names_case_sensitive,
                           VAR_1->pool);

  if (VAR_5 == ((void*)0))
    {

      VAR_5 = FUNC_4(VAR_1, VAR_2);
    }

  FUNC_6(VAR_5->options, VAR_6->hash_key, VAR_6);
}
