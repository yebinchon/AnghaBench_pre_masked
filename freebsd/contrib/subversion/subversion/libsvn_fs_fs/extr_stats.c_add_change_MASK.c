
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_9__ {int by_extension; int file_histogram; int file_rep_histogram; int dir_histogram; int dir_rep_histogram; int file_prop_histogram; int file_prop_rep_histogram; int dir_prop_histogram; int dir_prop_rep_histogram; int unused_rep_histogram; int added_node_size_histogram; int added_rep_size_histogram; int node_size_histogram; int rep_size_histogram; TYPE_2__* largest_changes; } ;
typedef TYPE_1__ svn_fs_fs__stats_t ;
struct TYPE_10__ {scalar_t__ min_size; int count; TYPE_3__** changes; } ;
typedef TYPE_2__ svn_fs_fs__largest_changes_t ;
struct TYPE_11__ {scalar_t__ size; int path; int revision; } ;
typedef TYPE_3__ svn_fs_fs__large_change_info_t ;
struct TYPE_12__ {int rep_histogram; int node_histogram; int extension; } ;
typedef TYPE_4__ svn_fs_fs__extension_info_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int rep_kind_t ;
typedef scalar_t__ apr_uint64_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 TYPE_4__* FUNC_1 (int ,char const*,int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,TYPE_4__*) ;
 TYPE_4__* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char const*) ;




 char* FUNC_6 (char const*,char) ;
 int FUNC_7 (int ,char const*) ;


__attribute__((used)) static void
FUNC_8(svn_fs_fs__stats_t *VAR_1,
           apr_uint64_t VAR_2,
           apr_uint64_t VAR_3,
           svn_revnum_t VAR_4,
           const char *VAR_5,
           rep_kind_t VAR_6,
           svn_boolean_t VAR_7)
{

  if (VAR_2 >= VAR_1->largest_changes->min_size)
    {
      apr_size_t VAR_8;
      svn_fs_fs__largest_changes_t *VAR_9 = VAR_1->largest_changes;
      svn_fs_fs__large_change_info_t *VAR_10
        = VAR_9->changes[VAR_9->count - 1];
      VAR_10->size = VAR_2;
      VAR_10->revision = VAR_4;
      FUNC_7(VAR_10->path, VAR_5);



      for (VAR_8 = VAR_9->count - 1; VAR_8 > 0; --VAR_8)
        if (VAR_9->changes[VAR_8-1]->size >= VAR_2)
          break;
        else
          VAR_9->changes[VAR_8] = VAR_9->changes[VAR_8-1];

      VAR_9->changes[VAR_8] = VAR_10;
      VAR_9->min_size
        = VAR_9->changes[VAR_9->count-1]->size;
    }


  FUNC_0(&VAR_1->rep_size_histogram, VAR_2);
  FUNC_0(&VAR_1->node_size_histogram, VAR_3);

  if (VAR_7)
    {
      FUNC_0(&VAR_1->added_rep_size_histogram, VAR_2);
      FUNC_0(&VAR_1->added_node_size_histogram, VAR_3);
    }


  switch (VAR_6)
    {
      case 128:
        FUNC_0(&VAR_1->unused_rep_histogram, VAR_2);
        break;
      case 132:
        FUNC_0(&VAR_1->dir_prop_rep_histogram, VAR_2);
        FUNC_0(&VAR_1->dir_prop_histogram, VAR_3);
        break;
      case 130:
        FUNC_0(&VAR_1->file_prop_rep_histogram, VAR_2);
        FUNC_0(&VAR_1->file_prop_histogram, VAR_3);
        break;
      case 131:
        FUNC_0(&VAR_1->dir_rep_histogram, VAR_2);
        FUNC_0(&VAR_1->dir_histogram, VAR_3);
        break;
      case 129:
        FUNC_0(&VAR_1->file_rep_histogram, VAR_2);
        FUNC_0(&VAR_1->file_histogram, VAR_3);
        break;
    }


  if (VAR_6 == 129)
    {

      svn_fs_fs__extension_info_t *VAR_11;
      const char * VAR_12 = FUNC_6(VAR_5, '/');
      const char * VAR_13 = VAR_12 ? FUNC_6(VAR_12, '.') : ((void*)0);

      if (VAR_13 == ((void*)0) || VAR_13 == VAR_12 + 1)
        VAR_13 = "(none)";


      VAR_11 = FUNC_1(VAR_1->by_extension, VAR_13, VAR_0);
      if (VAR_11 == ((void*)0))
        {
          apr_pool_t *VAR_14 = FUNC_2(VAR_1->by_extension);
          VAR_11 = FUNC_4(VAR_14, sizeof(*VAR_11));
          VAR_11->extension = FUNC_5(VAR_14, VAR_13);

          FUNC_3(VAR_1->by_extension, VAR_11->extension,
                       VAR_0, VAR_11);
        }


      FUNC_0(&VAR_11->node_histogram, VAR_3);
      FUNC_0(&VAR_11->rep_histogram, VAR_2);
    }
}
