
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_2__ {int check_working_copy; } ;
struct edit_baton {TYPE_1__ wb; int db; int * target_basename; int anchor_abspath; } ;
struct dir_baton {char const* local_abspath; struct dir_baton* parent_baton; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int ,char const*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct dir_baton*,struct dir_baton*,int ,int ,int ,char const*,int ,int ,int ,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(const char *VAR_5,
             svn_revnum_t VAR_6,
             void *VAR_7,
             apr_pool_t *VAR_8)
{
  struct dir_baton *VAR_9 = VAR_7;
  struct edit_baton *VAR_10 = VAR_9->edit_baton;
  const char *VAR_11 = FUNC_1(VAR_10->anchor_abspath, VAR_5, VAR_8);





  FUNC_0(FUNC_2(VAR_9, VAR_9, VAR_2, VAR_10->db, VAR_10->wb.check_working_copy,
                           VAR_11,
                           VAR_3, 0, 0, VAR_6, ((void*)0), VAR_8));




  if (VAR_9->parent_baton && (! *VAR_10->target_basename))
    FUNC_0(FUNC_2(VAR_9->parent_baton, VAR_9, VAR_2,
                             VAR_10->db, VAR_10->wb.check_working_copy,
                             VAR_9->local_abspath,
                             VAR_4, VAR_4,
                             0, VAR_0, ((void*)0), VAR_8));

  return VAR_1;
}
