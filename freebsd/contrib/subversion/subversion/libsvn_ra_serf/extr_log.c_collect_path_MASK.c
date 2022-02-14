
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef scalar_t__ svn_revnum_t ;
struct TYPE_7__ {char action; void* props_modified; void* text_modified; int node_kind; scalar_t__ copyfrom_rev; int copyfrom_path; } ;
typedef TYPE_2__ svn_log_changed_path2_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int * VAR_1 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*) ;
 char* FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (scalar_t__*,char const*) ;
 char* FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char const*,TYPE_2__*) ;
 TYPE_2__* FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 void* FUNC_10 (char*) ;

__attribute__((used)) static svn_error_t *
FUNC_11(apr_hash_t *VAR_2,
             char VAR_3,
             const svn_string_t *VAR_4,
             apr_hash_t *VAR_5)
{
  apr_pool_t *VAR_6 = FUNC_2(VAR_2);
  svn_log_changed_path2_t *VAR_7;
  const char *VAR_8;
  const char *VAR_9;
  const char *VAR_10;

  VAR_7 = FUNC_8(VAR_6);
  VAR_7->action = VAR_3;
  VAR_7->copyfrom_rev = VAR_0;


  VAR_8 = FUNC_6(VAR_5, "copyfrom-path");
  VAR_9 = FUNC_6(VAR_5, "copyfrom-rev");
  if (VAR_8 && VAR_9)
    {
      apr_int64_t VAR_11;

      FUNC_0(FUNC_5(&VAR_11, VAR_9));

      if (FUNC_1((svn_revnum_t)VAR_11))
        {
          VAR_7->copyfrom_path = FUNC_3(VAR_6, VAR_8);
          VAR_7->copyfrom_rev = (svn_revnum_t)VAR_11;
        }
    }

  VAR_7->node_kind = FUNC_9(FUNC_6(VAR_5, "node-kind"));
  VAR_7->text_modified = FUNC_10(FUNC_6(VAR_5,
                                                             "text-mods"));
  VAR_7->props_modified = FUNC_10(FUNC_6(VAR_5,
                                                              "prop-mods"));

  VAR_10 = FUNC_4(VAR_6, VAR_4->data, VAR_4->len);
  FUNC_7(VAR_2, VAR_10, VAR_7);

  return VAR_1;
}
