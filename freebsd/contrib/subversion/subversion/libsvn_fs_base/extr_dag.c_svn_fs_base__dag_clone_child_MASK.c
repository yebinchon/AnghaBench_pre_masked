
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct TYPE_13__ {int predecessor_count; int created_path; int * predecessor_id; } ;
typedef TYPE_1__ node_revision_t ;
struct TYPE_14__ {int * id; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,char const*,int const*,char const*,int *,int *) ;
 int * FUNC_3 (int ,int *,int ,...) ;
 int FUNC_4 (int const**,int *,int *,TYPE_1__*,char const*,char const*,int *,int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*,char const*) ;
 int * FUNC_6 (TYPE_2__*) ;
 int * FUNC_7 (TYPE_2__**,int *,int const*,int *,int *) ;
 int FUNC_8 (TYPE_2__**,TYPE_2__*,char const*,int *,int *) ;
 int FUNC_9 (TYPE_1__**,int *,int *,int *,int *) ;
 int FUNC_10 (char const*,char const*,int *) ;
 int FUNC_11 (char const*) ;

svn_error_t *
FUNC_12(dag_node_t **VAR_2,
                             dag_node_t *VAR_3,
                             const char *VAR_4,
                             const char *VAR_5,
                             const char *VAR_6,
                             const char *VAR_7,
                             trail_t *VAR_8,
                             apr_pool_t *VAR_9)
{
  dag_node_t *VAR_10;
  const svn_fs_id_t *VAR_11;
  svn_fs_t *VAR_12 = FUNC_6(VAR_3);


  if (! FUNC_5(VAR_3, VAR_7))
    return FUNC_3
      (VAR_0, ((void*)0),
       FUNC_1("Attempted to clone child of non-mutable node"));


  if (! FUNC_11(VAR_5))
    return FUNC_3
      (VAR_1, ((void*)0),
       FUNC_1("Attempted to make a child clone with an illegal name '%s'"), VAR_5);


  FUNC_0(FUNC_8(&VAR_10, VAR_3, VAR_5, VAR_8, VAR_9));



  if (FUNC_5(VAR_10, VAR_7))
    {

      VAR_11 = VAR_10->id;
    }
  else
    {
      node_revision_t *VAR_13;


      FUNC_0(FUNC_9(&VAR_13, VAR_12, VAR_10->id,
                                            VAR_8, VAR_9));


      VAR_13->predecessor_id = VAR_10->id;
      if (VAR_13->predecessor_count != -1)
        VAR_13->predecessor_count++;
      VAR_13->created_path = FUNC_10(VAR_4, VAR_5, VAR_9);
      FUNC_0(FUNC_4(&VAR_11, VAR_12, VAR_10->id,
                                            VAR_13, VAR_6, VAR_7,
                                            VAR_8, VAR_9));



      FUNC_0(FUNC_2(VAR_3, VAR_5, VAR_11, VAR_7, VAR_8, VAR_9));
    }


  return FUNC_7(VAR_2, VAR_12, VAR_11, VAR_8, VAR_9);
}
