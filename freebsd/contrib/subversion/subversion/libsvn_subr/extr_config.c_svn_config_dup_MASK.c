
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_11__ {int option_names_case_sensitive; int sections; int section_names_case_sensitive; int x_values; } ;
typedef TYPE_1__ svn_config_t ;
struct TYPE_12__ {int options; int name; } ;
typedef TYPE_2__ cfg_section_t ;
struct TYPE_13__ {char const* value; char const* x_value; int state; int name; } ;
typedef TYPE_3__ cfg_option_t ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int ,void*,int ,TYPE_3__*) ;
 int FUNC_4 (int *,void const**,int *,void**) ;
 void* FUNC_5 (int *,char const*) ;
 TYPE_2__* FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__**,int ,int ,int *) ;
 int FUNC_8 (TYPE_3__**,int ,char const*,int ,int *) ;

svn_error_t *
FUNC_9(svn_config_t **VAR_2,
               const svn_config_t *VAR_3,
               apr_pool_t *VAR_4)
{
  apr_hash_index_t *VAR_5;
  apr_hash_index_t *VAR_6;

  *VAR_2 = 0;
  FUNC_0(FUNC_7(VAR_2, VAR_0, VAR_0, VAR_4));

  (*VAR_2)->x_values = VAR_3->x_values;
  (*VAR_2)->section_names_case_sensitive = VAR_3->section_names_case_sensitive;
  (*VAR_2)->option_names_case_sensitive = VAR_3->option_names_case_sensitive;

  for (VAR_5 = FUNC_1(VAR_4, VAR_3->sections);
       VAR_5 != ((void*)0);
       VAR_5 = FUNC_2(VAR_5))
  {
    const void *VAR_7;
    void *VAR_8;
    apr_ssize_t VAR_9;
    cfg_section_t * VAR_10;
    cfg_section_t * VAR_11;

    FUNC_4(VAR_5, &VAR_7, &VAR_9, &VAR_8);
    VAR_10 = VAR_8;

    VAR_11 = FUNC_6(*VAR_2, VAR_10->name);

    for (VAR_6 = FUNC_1(VAR_4, VAR_10->options);
         VAR_6 != ((void*)0);
         VAR_6 = FUNC_2(VAR_6))
    {
      const void *VAR_12;
      void *VAR_13;
      apr_ssize_t VAR_14;
      cfg_option_t *VAR_15;
      cfg_option_t *VAR_16;

      FUNC_4(VAR_6, &VAR_12, &VAR_14, &VAR_13);
      VAR_15 = VAR_13;

      FUNC_8(&VAR_16, VAR_15->name, VAR_15->value,
                               (*VAR_2)->option_names_case_sensitive,
                               VAR_4);

      VAR_16->value = FUNC_5(VAR_4, VAR_15->value);
      VAR_16->x_value = FUNC_5(VAR_4, VAR_15->x_value);
      VAR_16->state = VAR_15->state;
      FUNC_3(VAR_11->options,
                   FUNC_5(VAR_4, (const char*)VAR_12),
                   VAR_14, VAR_16);
    }
  }

  return VAR_1;
}
