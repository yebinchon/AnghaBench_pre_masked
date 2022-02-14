
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_fs_x__txn_id_t ;
struct TYPE_11__ {scalar_t__ kind; int noderev_id; int copy_id; int predecessor_id; int * copyfrom_path; int copyfrom_rev; int copyroot_rev; int copyroot_path; int created_path; } ;
typedef TYPE_1__ svn_fs_x__noderev_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int new_noderev ;
struct TYPE_12__ {TYPE_1__* node_revision; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int * FUNC_4 (TYPE_2__*,char const*,int *,scalar_t__,int ,int *) ;
 int * FUNC_5 (int ,int *,int ) ;
 int * FUNC_6 (int ,int *,int ,...) ;
 int FUNC_7 (int ,TYPE_1__*,int *,int ,int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__**,int ,int *,int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char const*,char const*,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_13 (char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_14(dag_node_t **VAR_6,
           dag_node_t *VAR_7,
           const char *VAR_8,
           const char *VAR_9,
           svn_boolean_t VAR_10,
           svn_fs_x__txn_id_t VAR_11,
           apr_pool_t *VAR_12,
           apr_pool_t *VAR_13)
{
  svn_fs_x__noderev_t VAR_14;
  svn_fs_x__noderev_t *VAR_15 = VAR_7->node_revision;


  if (! FUNC_13(VAR_9))
    return FUNC_6
      (VAR_2, ((void*)0),
       FUNC_1("Attempted to create a node with an illegal name '%s'"), VAR_9);


  if (VAR_15->kind != VAR_4)
    return FUNC_5
      (VAR_0, ((void*)0),
       FUNC_1("Attempted to create entry in non-directory parent"));


  if (! FUNC_8(VAR_7))
    return FUNC_6
      (VAR_1, ((void*)0),
       FUNC_1("Attempted to clone child of non-mutable node"));


  FUNC_3(&VAR_14, 0, sizeof(VAR_14));
  VAR_14.kind = VAR_10 ? VAR_4 : VAR_5;
  VAR_14.created_path = FUNC_12(VAR_8, VAR_9, VAR_12);

  VAR_14.copyroot_path = FUNC_2(VAR_12,
                                          VAR_15->copyroot_path);
  VAR_14.copyroot_rev = VAR_15->copyroot_rev;
  VAR_14.copyfrom_rev = VAR_3;
  VAR_14.copyfrom_path = ((void*)0);
  FUNC_11(&VAR_14.predecessor_id);

  FUNC_0(FUNC_7
          (FUNC_9(VAR_7), &VAR_14,
           &VAR_15->copy_id, VAR_11, VAR_13));


  FUNC_0(FUNC_10(VAR_6, FUNC_9(VAR_7),
                                 &VAR_14.noderev_id, VAR_12,
                                 VAR_13));




  return FUNC_4(VAR_7, VAR_9, &VAR_14.noderev_id,
                   VAR_14.kind, VAR_11, VAR_13);
}
