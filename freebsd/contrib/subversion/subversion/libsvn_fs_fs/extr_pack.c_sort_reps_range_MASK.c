
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_prefix_string__t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_boolean_t ;
struct TYPE_11__ {int to; } ;
typedef TYPE_2__ reference_t ;
struct TYPE_12__ {int predecessor_count; int rep_id; int * path; } ;
typedef TYPE_3__ path_order_t ;
struct TYPE_13__ {int references; TYPE_1__* fs; } ;
typedef TYPE_4__ pack_context_t ;
struct TYPE_14__ {int max_linear_deltification; } ;
typedef TYPE_5__ fs_fs_data_t ;
struct TYPE_10__ {TYPE_5__* fsap_data; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int const*,int *) ;
 TYPE_2__** FUNC_4 (int ,int *,int *,int (*) (void const*,void const*)) ;

__attribute__((used)) static void
FUNC_5(pack_context_t *VAR_1,
                path_order_t **VAR_2,
                path_order_t **VAR_3,
                int VAR_4,
                int VAR_5)
{
  const svn_prefix_string__t *VAR_6;
  int VAR_7, VAR_8;
  svn_fs_fs__id_part_t VAR_9;
  fs_fs_data_t *VAR_10 = VAR_1->fs->fsap_data;


  if (VAR_4 == VAR_5)
    return;
  VAR_8 = VAR_4;
  for (VAR_7 = VAR_4; VAR_7 < VAR_5; ++VAR_7)
    {
      int VAR_11 = FUNC_1(VAR_2[VAR_7]->predecessor_count);
      svn_boolean_t VAR_12
        = (VAR_11 >= VAR_10->max_linear_deltification)
          && (VAR_11 >= VAR_2[VAR_7]->predecessor_count / 4);





      svn_boolean_t VAR_13
        = VAR_2[VAR_7]->predecessor_count
          < VAR_10->max_linear_deltification;


      if (VAR_12 || VAR_13)
        {
          VAR_3[VAR_8++] = VAR_2[VAR_7];
          VAR_2[VAR_7] = ((void*)0);
        }
    }
  for (VAR_7 = VAR_4; VAR_7 < VAR_5; ++VAR_7)
    if (VAR_2[VAR_7])
      {

        VAR_6 = VAR_2[VAR_7]->path;
        VAR_9 = VAR_2[VAR_7]->rep_id;
        break;
      }

  for (VAR_7 = VAR_4; VAR_7 < VAR_5; ++VAR_7)
    if (VAR_2[VAR_7])
      {

        if (FUNC_3(VAR_6, VAR_2[VAR_7]->path))
          {
            VAR_6 = VAR_2[VAR_7]->path;
            VAR_9 = VAR_2[VAR_7]->rep_id;
          }


        if (FUNC_2(&VAR_2[VAR_7]->rep_id, &VAR_9))
          {
            reference_t **VAR_14;

            VAR_3[VAR_8++] = VAR_2[VAR_7];
            VAR_2[VAR_7] = ((void*)0);

            VAR_14 = FUNC_4(VAR_1->references,
                                               &VAR_9, ((void*)0),
              (int (*)(const void *, const void *))VAR_0);
            if (VAR_14)
              VAR_9 = (*VAR_14)->to;
          }
      }






  for (VAR_7 = VAR_4; VAR_7 < VAR_5; ++VAR_7)
    if (VAR_2[VAR_7])
      VAR_3[VAR_8++] = VAR_2[VAR_7];


  FUNC_0(VAR_8 == VAR_5);
}
