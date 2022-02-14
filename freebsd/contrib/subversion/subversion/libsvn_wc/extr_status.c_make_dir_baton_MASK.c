
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ depth; scalar_t__ versioned; } ;
typedef TYPE_2__ svn_wc_status3_t ;
struct TYPE_4__ {scalar_t__ depth; int repos_uuid; int repos_root_url; } ;
struct TYPE_6__ {TYPE_1__ s; scalar_t__ has_descendants; } ;
typedef TYPE_3__ svn_wc__internal_status_t ;
typedef int svn_error_t ;
struct edit_baton {char* anchor_abspath; scalar_t__ default_depth; int cancel_baton; int cancel_func; int wb; int * ignores; TYPE_3__* anchor_status; } ;
struct dir_baton {char const* local_abspath; scalar_t__ depth; int statii; void* excluded; int * ood_changed_author; int ood_kind; int repos_relpath; scalar_t__ ood_changed_date; int ood_changed_rev; struct dir_baton* parent_baton; struct edit_baton* edit_baton; int * name; int * pool; } ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 void* VAR_2 ;
 int FUNC_2 (int *) ;
 struct dir_baton* FUNC_3 (int *,int) ;
 int FUNC_4 (struct dir_baton*,int *) ;
 int FUNC_5 (int *,char const*,void*,int ,int *,int ,int *,int *,int const*,scalar_t__,void*,void*,int ,int ,int ,int ,int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int * FUNC_6 (char const*,int *) ;
 char* FUNC_7 (char*,char const*,int *) ;
 void* FUNC_8 (int ,char const*) ;
 int VAR_9 ;
 int * FUNC_9 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_10(void **VAR_10,
               const char *VAR_11,
               struct edit_baton *VAR_12,
               struct dir_baton *VAR_13,
               apr_pool_t *VAR_14)
{
  struct dir_baton *VAR_15 = VAR_13;
  struct edit_baton *VAR_16 = VAR_12;
  struct dir_baton *VAR_17;
  const char *VAR_18;
  const svn_wc__internal_status_t *VAR_19;
  apr_pool_t *VAR_20;

  if (VAR_13)
    VAR_20 = FUNC_9(VAR_13->pool);
  else
    VAR_20 = FUNC_9(VAR_14);

  VAR_17 = FUNC_3(VAR_20, sizeof(*VAR_17));

  FUNC_1(VAR_11 || (! VAR_15));


  if (VAR_15)
    VAR_18 = FUNC_7(VAR_16->anchor_abspath, VAR_11, VAR_20);
  else
    VAR_18 = VAR_16->anchor_abspath;


  VAR_17->pool = VAR_20;
  VAR_17->local_abspath = VAR_18;
  VAR_17->name = VAR_11 ? FUNC_6(VAR_11, VAR_20) : ((void*)0);
  VAR_17->edit_baton = VAR_12;
  VAR_17->parent_baton = VAR_13;
  VAR_17->statii = FUNC_2(VAR_20);
  VAR_17->ood_changed_rev = VAR_0;
  VAR_17->ood_changed_date = 0;
  VAR_17->repos_relpath = FUNC_4(VAR_17, VAR_20);
  VAR_17->ood_kind = VAR_9;
  VAR_17->ood_changed_author = ((void*)0);

  if (VAR_15)
    {
      if (VAR_15->excluded)
        VAR_17->excluded = VAR_2;
      else if (VAR_15->depth == VAR_6)
        VAR_17->depth = VAR_4;
      else if (VAR_15->depth == VAR_5 || VAR_15->depth == VAR_4)
        VAR_17->excluded = VAR_2;
      else if (VAR_15->depth == VAR_8)


        VAR_17->depth = VAR_8;
      else
        VAR_17->depth = VAR_7;
    }
  else
    {
      VAR_17->depth = VAR_16->default_depth;
    }



  if (VAR_15)
    VAR_19 = FUNC_8(VAR_15->statii, VAR_17->local_abspath);
  else
    VAR_19 = VAR_16->anchor_status;

  if (VAR_19
      && (VAR_19->has_descendants)
      && (! VAR_17->excluded)
      && (VAR_17->depth == VAR_8
          || VAR_17->depth == VAR_7
          || VAR_17->depth == VAR_5
          || VAR_17->depth == VAR_6)
          )
    {
      const svn_wc_status3_t *VAR_21;
      const apr_array_header_t *VAR_22 = VAR_16->ignores;

      FUNC_0(FUNC_5(&VAR_16->wb, VAR_18, VAR_2,
                             VAR_19->s.repos_root_url,
                             ((void*)0) ,
                             VAR_19->s.repos_uuid,
                             ((void*)0),
                             ((void*)0) , VAR_22,
                             VAR_17->depth == VAR_5
                                      ? VAR_5
                                      : VAR_6,
                             VAR_2, VAR_2,
                             VAR_3, VAR_17->statii,
                             VAR_16->cancel_func, VAR_16->cancel_baton,
                             VAR_20));


      VAR_21 = FUNC_8(VAR_17->statii, VAR_17->local_abspath);
      if (VAR_21 && VAR_21->versioned
          && (VAR_17->depth == VAR_8
              || VAR_17->depth > VAR_19->s.depth))
        {
          VAR_17->depth = VAR_21->depth;
        }
    }

  *VAR_10 = VAR_17;
  return VAR_1;
}
