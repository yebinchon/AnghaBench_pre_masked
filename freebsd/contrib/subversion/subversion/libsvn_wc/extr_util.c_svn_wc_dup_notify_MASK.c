
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ rev_props; void* prop_name; void* path_prefix; void* url; scalar_t__ merge_range; void* changelist_name; scalar_t__ err; scalar_t__ lock; void* mime_type; void* path; } ;
typedef TYPE_1__ svn_wc_notify_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,scalar_t__,int ,int ) ;
 void* FUNC_2 (int *,void*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int *) ;
 scalar_t__ FUNC_5 (scalar_t__,int *) ;
 scalar_t__ FUNC_6 (scalar_t__,int *) ;

svn_wc_notify_t *
FUNC_7(const svn_wc_notify_t *VAR_2,
                  apr_pool_t *VAR_3)
{
  svn_wc_notify_t *VAR_4 = FUNC_0(VAR_3, sizeof(*VAR_4));

  *VAR_4 = *VAR_2;

  if (VAR_4->path)
    VAR_4->path = FUNC_2(VAR_3, VAR_4->path);
  if (VAR_4->mime_type)
    VAR_4->mime_type = FUNC_2(VAR_3, VAR_4->mime_type);
  if (VAR_4->lock)
    VAR_4->lock = FUNC_4(VAR_4->lock, VAR_3);
  if (VAR_4->err)
    {
      VAR_4->err = FUNC_3(VAR_4->err);
      FUNC_1(VAR_3, VAR_4->err, VAR_1,
                                VAR_0);
    }
  if (VAR_4->changelist_name)
    VAR_4->changelist_name = FUNC_2(VAR_3, VAR_4->changelist_name);
  if (VAR_4->merge_range)
    VAR_4->merge_range = FUNC_5(VAR_4->merge_range, VAR_3);
  if (VAR_4->url)
    VAR_4->url = FUNC_2(VAR_3, VAR_4->url);
  if (VAR_4->path_prefix)
    VAR_4->path_prefix = FUNC_2(VAR_3, VAR_4->path_prefix);
  if (VAR_4->prop_name)
    VAR_4->prop_name = FUNC_2(VAR_3, VAR_4->prop_name);
  if (VAR_4->rev_props)
    VAR_4->rev_props = FUNC_6(VAR_4->rev_props, VAR_3);

  return VAR_4;
}
