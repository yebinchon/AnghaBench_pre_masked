
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
typedef scalar_t__ svn_revnum_t ;
struct TYPE_11__ {int max_files_per_dir; } ;
typedef TYPE_1__ svn_fs_x__data_t ;
struct TYPE_12__ {TYPE_1__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_15__ {scalar_t__ start_rev; } ;
struct TYPE_13__ {int revision; TYPE_5__* manifest; TYPE_9__ entry; int folder; } ;
typedef TYPE_3__ packed_revprops_t ;
typedef int apr_pool_t ;
struct TYPE_14__ {int nelts; } ;


 TYPE_9__ FUNC_0 (TYPE_5__*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (TYPE_5__*,int) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_5__**,int *,int,int *,int *) ;
 char* FUNC_4 (int ,int ,int *) ;
 int * FUNC_5 (int ,int *,char*,int,...) ;
 int FUNC_6 (TYPE_2__*,int,int *) ;
 int FUNC_7 (int **,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_fs_t *VAR_4,
                     packed_revprops_t *VAR_5,
                     apr_pool_t *VAR_6,
                     apr_pool_t *VAR_7)
{
  svn_fs_x__data_t *VAR_8 = VAR_4->fsap_data;
  svn_stringbuf_t *VAR_9 = ((void*)0);
  const char *VAR_10;
  int VAR_11;
  svn_revnum_t VAR_12;
  int VAR_13;


  int VAR_14 = VAR_8->max_files_per_dir;
  svn_revnum_t VAR_15
    = VAR_5->revision - (VAR_5->revision % VAR_14);
  if (VAR_15 == 0)
    {
      ++VAR_15;
      --VAR_14;
    }


  VAR_5->folder = FUNC_6(VAR_4, VAR_5->revision,
                                               VAR_6);
  VAR_10 = FUNC_4(VAR_5->folder, VAR_0,
                                       VAR_6);
  FUNC_1(FUNC_7(&VAR_9, VAR_10, VAR_6));
  FUNC_1(FUNC_3(&VAR_5->manifest, VAR_9, VAR_5->revision,
                        VAR_6, VAR_7));


  if (VAR_5->manifest->nelts == 0)
    return FUNC_5(VAR_1, ((void*)0),
                             "Revprop manifest for r%ld is empty",
                             VAR_5->revision);

  VAR_12 = 0;
  for (VAR_13 = 0; VAR_13 < VAR_5->manifest->nelts; ++VAR_13)
    {
      svn_revnum_t VAR_16 = FUNC_0(VAR_5->manifest, VAR_13,
                                             VAR_3).start_rev;
      if ( VAR_16 < VAR_15
          || VAR_16 >= VAR_15 + VAR_14)
        return FUNC_5(VAR_1, ((void*)0),
                                 "Revprop manifest for r%ld contains "
                                 "out-of-range revision r%ld",
                                 VAR_5->revision, VAR_16);

      if (VAR_16 < VAR_12)
        return FUNC_5(VAR_1, ((void*)0),
                                 "Entries in revprop manifest for r%ld "
                                 "are not ordered", VAR_5->revision);

      VAR_12 = VAR_16;
    }


  VAR_11 = FUNC_2(VAR_5->manifest, VAR_5->revision);
  VAR_5->entry = FUNC_0(VAR_5->manifest, VAR_11,
                                  VAR_3);

  return VAR_2;
}
