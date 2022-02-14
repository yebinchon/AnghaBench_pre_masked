
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char const* data; scalar_t__ len; } ;
typedef TYPE_2__ svn_string_t ;
typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
struct fill_dirent_baton_t {int * supports_deadprop_count; TYPE_1__* entry; int result_pool; } ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;
struct TYPE_4__ {scalar_t__ size; int has_props; int kind; int time; int last_author; scalar_t__ created_rev; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 (int ) ;
 int * VAR_5 ;
 void* VAR_6 ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (scalar_t__*,char const*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *,char const*,int ) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_11,
                     const char *VAR_12,
                     const char *VAR_13,
                     const char *VAR_14,
                     const svn_string_t *VAR_15,
                     apr_pool_t *VAR_16)
{
  struct fill_dirent_baton_t *VAR_17 = VAR_11;

  if (FUNC_2(VAR_13, "DAV:") == 0)
    {
      if (FUNC_2(VAR_14, VAR_4) == 0)
        {
          apr_int64_t VAR_18;
          FUNC_0(FUNC_3(&VAR_18, VAR_15->data));

          VAR_17->entry->created_rev = (svn_revnum_t)VAR_18;
        }
      else if (FUNC_2(VAR_14, "creator-displayname") == 0)
        {
          VAR_17->entry->last_author = FUNC_1(VAR_17->result_pool, VAR_15->data);
        }
      else if (FUNC_2(VAR_14, VAR_3) == 0)
        {
          FUNC_0(FUNC_4(&VAR_17->entry->time,
                                        VAR_15->data,
                                        VAR_17->result_pool));
        }
      else if (FUNC_2(VAR_14, "getcontentlength") == 0)
        {

          if (VAR_15->len)
            {
              FUNC_0(FUNC_3(&VAR_17->entry->size, VAR_15->data));
            }
        }
      else if (FUNC_2(VAR_14, "resourcetype") == 0)
        {
          if (FUNC_2(VAR_15->data, "collection") == 0)
            {
              VAR_17->entry->kind = VAR_7;
            }
          else
            {
              VAR_17->entry->kind = VAR_8;
            }
        }
    }
  else if (FUNC_2(VAR_13, VAR_0) == 0)
    {
      VAR_17->entry->has_props = VAR_6;
    }
  else if (FUNC_2(VAR_13, VAR_2) == 0)
    {
      VAR_17->entry->has_props = VAR_6;
    }
  else if (FUNC_2(VAR_13, VAR_1) == 0)
    {
      if(FUNC_2(VAR_14, "deadprop-count") == 0)
        {
          if (*VAR_15->data)
            {



              apr_int64_t VAR_19;
              FUNC_0(FUNC_3(&VAR_19, VAR_15->data));
              VAR_17->entry->has_props = VAR_19 > 0;
              if (VAR_17->supports_deadprop_count)
                *VAR_17->supports_deadprop_count = VAR_10;
            }
          else if (VAR_17->supports_deadprop_count)
            *VAR_17->supports_deadprop_count = VAR_9;
        }
    }

  return VAR_5;
}
