
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {TYPE_4__* fsap_data; } ;
typedef TYPE_1__ svn_fs_t ;
typedef int svn_filesize_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_15__ {int expanded_size; } ;
typedef TYPE_2__ representation_t ;
struct TYPE_16__ {int predecessor_count; TYPE_2__* data_rep; TYPE_2__* prop_rep; int predecessor_id; } ;
typedef TYPE_3__ node_revision_t ;
struct TYPE_17__ {scalar_t__ max_linear_deltification; scalar_t__ max_deltification_walk; } ;
typedef TYPE_4__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int*,TYPE_1__*,TYPE_3__*,int,int *) ;
 int FUNC_2 (TYPE_3__**,TYPE_1__*,int ,int *,int *) ;
 int FUNC_3 (int*,int*,TYPE_2__*,TYPE_1__*,int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(representation_t **VAR_1,
                  svn_fs_t *VAR_2,
                  node_revision_t *VAR_3,
                  svn_boolean_t VAR_4,
                  apr_pool_t *VAR_5)
{


  int VAR_6;



  int VAR_7;
  node_revision_t *VAR_8;
  fs_fs_data_t *VAR_9 = VAR_2->fsap_data;
  apr_pool_t *VAR_10;



  if (! VAR_3->predecessor_count)
    {
      *VAR_1 = ((void*)0);
      return VAR_0;
    }





  VAR_6 = VAR_3->predecessor_count;
  VAR_6 = VAR_6 & (VAR_6 - 1);





  VAR_7 = VAR_3->predecessor_count - VAR_6;
  if (VAR_7 > (int)VAR_9->max_deltification_walk)
    {
      *VAR_1 = ((void*)0);
      return VAR_0;
    }




  if (VAR_7 < (int)VAR_9->max_linear_deltification)
    {
      int VAR_11;
      FUNC_0(FUNC_1(&VAR_11, VAR_2, VAR_3, VAR_7, VAR_5));



      if ((1 << (--VAR_11)) <= VAR_7)
        VAR_6 = VAR_3->predecessor_count - 1;
    }





  VAR_8 = VAR_3;
  VAR_10 = FUNC_5(VAR_5);
  while ((VAR_6++) < VAR_3->predecessor_count)
    {
      FUNC_4(VAR_10);
      FUNC_0(FUNC_2(&VAR_8, VAR_2,
                                           VAR_8->predecessor_id, VAR_5,
                                           VAR_10));
    }
  FUNC_6(VAR_10);


  *VAR_1 = VAR_4 ? VAR_8->prop_rep : VAR_8->data_rep;



  if (*VAR_1)
    {
      int VAR_12 = 0;
      int VAR_13 = 0;



      svn_filesize_t VAR_14 = (*VAR_1)->expanded_size;
      if (VAR_14 < 64)
        {
          *VAR_1 = ((void*)0);
          return VAR_0;
        }




      FUNC_0(FUNC_3(&VAR_12, &VAR_13,
                                          *VAR_1, VAR_2, VAR_5));



      if (VAR_12 >= 2 * (int)VAR_9->max_linear_deltification + 2)
        *VAR_1 = ((void*)0);
      else





        if ( VAR_13 > 1
            && ((svn_filesize_t)128 << VAR_13) >= VAR_14)
          *VAR_1 = ((void*)0);
    }

  return VAR_0;
}
