
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
struct file_prop_baton_t {int result_pool; int props; int sha1_checksum; int kind; } ;
typedef int apr_pool_t ;


 char* VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char const*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_3 (char const*,char const*,int ) ;
 int FUNC_4 (TYPE_1__ const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_4,
                 const char *VAR_5,
                 const char *VAR_6,
                 const char *VAR_7,
                 const svn_string_t *VAR_8,
                 apr_pool_t *VAR_9)
{
  struct file_prop_baton_t *VAR_10 = VAR_4;
  const char *VAR_11;

  if (FUNC_1(VAR_6, "DAV:") == 0 && FUNC_1(VAR_7, "resourcetype") == 0)
    {
      const char *VAR_12 = VAR_8->data;

      if (FUNC_1(VAR_12, "collection") == 0)
        VAR_10->kind = VAR_2;
      else
        VAR_10->kind = VAR_3;

      return VAR_1;
    }
  else if (FUNC_1(VAR_6, VAR_0) == 0
           && FUNC_1(VAR_7, "sha1-checksum") == 0)
    {
      VAR_10->sha1_checksum = FUNC_0(VAR_10->result_pool, VAR_8->data);
    }

  if (!VAR_10->props)
    return VAR_1;

  VAR_11 = FUNC_3(VAR_6, VAR_7, VAR_10->result_pool);
  if (VAR_11)
    {
      FUNC_2(VAR_10->props, VAR_11,
                    FUNC_4(VAR_8, VAR_10->result_pool));
    }
  return VAR_1;
}
