
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct ev2_file_baton {TYPE_1__* eb; int delta_base; int base_revision; int path; } ;
struct ev2_dir_baton {int copyfrom_rev; int copyfrom_relpath; TYPE_1__* eb; } ;
typedef int apr_pool_t ;
struct TYPE_2__ {int fetch_base_baton; int (* fetch_base_func ) (int *,int ,char const*,int ,int *,int *) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 struct ev2_file_baton* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char const*) ;
 char* FUNC_3 (TYPE_1__*,char const*,int *) ;
 int FUNC_4 (int *,int ,char const*,int ,int *,int *) ;
 int FUNC_5 (int *,int ,char const*,int ,int *,int *) ;
 char* FUNC_6 (char const*,int *) ;
 char* FUNC_7 (int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(const char *VAR_1,
              void *VAR_2,
              svn_revnum_t VAR_3,
              apr_pool_t *VAR_4,
              void **VAR_5)
{

  apr_pool_t *VAR_6 = VAR_4;
  struct ev2_file_baton *VAR_7 = FUNC_1(VAR_4, sizeof(*VAR_7));
  struct ev2_dir_baton *VAR_8 = VAR_2;
  const char *VAR_9 = FUNC_3(VAR_8->eb, VAR_1, VAR_6);

  VAR_7->eb = VAR_8->eb;
  VAR_7->path = FUNC_2(VAR_4, VAR_9);
  VAR_7->base_revision = VAR_3;

  if (VAR_8->copyfrom_relpath)
    {


      const char *VAR_10 = FUNC_6(VAR_9, VAR_6);
      const char *VAR_11 = FUNC_7(VAR_8->copyfrom_relpath,
                                                      VAR_10,
                                                      VAR_6);

      FUNC_0(VAR_7->eb->fetch_base_func(&VAR_7->delta_base,
                                      VAR_7->eb->fetch_base_baton,
                                      VAR_11, VAR_8->copyfrom_rev,
                                      VAR_4, VAR_6));
    }
  else
    {
      FUNC_0(VAR_7->eb->fetch_base_func(&VAR_7->delta_base,
                                      VAR_7->eb->fetch_base_baton,
                                      VAR_9, VAR_3,
                                      VAR_4, VAR_6));
    }

  *VAR_5 = VAR_7;
  return VAR_0;
}
