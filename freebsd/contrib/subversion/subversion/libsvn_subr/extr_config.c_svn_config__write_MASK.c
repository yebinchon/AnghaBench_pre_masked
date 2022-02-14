
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_error_t ;
struct svn_config_t {int sections; } ;
struct TYPE_3__ {int options; int name; } ;
typedef TYPE_1__ cfg_section_t ;
struct TYPE_4__ {int value; int name; } ;
typedef TYPE_2__ cfg_option_t ;
typedef int apr_pool_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,char*,int ,...) ;

svn_error_t *
FUNC_8(svn_stream_t *VAR_1,
                  const struct svn_config_t *VAR_2,
                  apr_pool_t *VAR_3)
{
  apr_hash_index_t *VAR_4;
  apr_hash_index_t *VAR_5;
  apr_pool_t *VAR_6 = FUNC_5(VAR_3);
  apr_pool_t *VAR_7 = FUNC_5(VAR_3);

  for (VAR_4 = FUNC_1(VAR_3, VAR_2->sections);
       VAR_4 != ((void*)0);
       VAR_4 = FUNC_2(VAR_4))
    {
      cfg_section_t *VAR_8 = FUNC_3(VAR_4);
      FUNC_4(VAR_6);
      FUNC_0(FUNC_7(VAR_1, VAR_6, "\n[%s]\n",
                                VAR_8->name));

      for (VAR_5 = FUNC_1(VAR_6, VAR_8->options);
           VAR_5 != ((void*)0);
           VAR_5 = FUNC_2(VAR_5))
        {
          cfg_option_t *VAR_9 = FUNC_3(VAR_5);
          FUNC_4(VAR_7);
          FUNC_0(FUNC_7(VAR_1, VAR_7, "%s=%s\n",
                                    VAR_9->name, VAR_9->value));
        }
    }

  FUNC_6(VAR_6);
  FUNC_6(VAR_7);

  return VAR_0;
}
