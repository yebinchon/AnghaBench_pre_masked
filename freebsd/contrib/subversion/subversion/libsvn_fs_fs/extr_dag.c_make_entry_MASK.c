
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int svn_fs_id_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_14__ {scalar_t__ kind; int * copyfrom_path; int copyfrom_rev; int copyroot_rev; int copyroot_path; int created_path; } ;
typedef TYPE_1__ node_revision_t ;
typedef int new_noderev ;
struct TYPE_15__ {scalar_t__ kind; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__**,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int * FUNC_5 (TYPE_2__*,char const*,int ,scalar_t__,int const*,int *) ;
 int * FUNC_6 (int ,int *,int ) ;
 int * FUNC_7 (int ,int *,int ,...) ;
 int FUNC_8 (int const**,int ,TYPE_1__*,int ,int const*,int *) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__**,int ,int const*,int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (char const*,char const*,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_15 (char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_16(dag_node_t **VAR_6,
           dag_node_t *VAR_7,
           const char *VAR_8,
           const char *VAR_9,
           svn_boolean_t VAR_10,
           const svn_fs_fs__id_part_t *VAR_11,
           apr_pool_t *VAR_12)
{
  const svn_fs_id_t *VAR_13;
  node_revision_t VAR_14, *VAR_15;


  if (! FUNC_15(VAR_9))
    return FUNC_7
      (VAR_2, ((void*)0),
       FUNC_1("Attempted to create a node with an illegal name '%s'"), VAR_9);


  if (VAR_7->kind != VAR_4)
    return FUNC_6
      (VAR_0, ((void*)0),
       FUNC_1("Attempted to create entry in non-directory parent"));


  if (! FUNC_9(VAR_7))
    return FUNC_7
      (VAR_1, ((void*)0),
       FUNC_1("Attempted to clone child of non-mutable node"));


  FUNC_4(&VAR_14, 0, sizeof(VAR_14));
  VAR_14.kind = VAR_10 ? VAR_4 : VAR_5;
  VAR_14.created_path = FUNC_14(VAR_8, VAR_9, VAR_12);

  FUNC_0(FUNC_3(&VAR_15, VAR_7));
  VAR_14.copyroot_path = FUNC_2(VAR_12,
                                          VAR_15->copyroot_path);
  VAR_14.copyroot_rev = VAR_15->copyroot_rev;
  VAR_14.copyfrom_rev = VAR_3;
  VAR_14.copyfrom_path = ((void*)0);

  FUNC_0(FUNC_8
          (&VAR_13, FUNC_10(VAR_7), &VAR_14,
           FUNC_13(FUNC_11(VAR_7)),
           VAR_11, VAR_12));


  FUNC_0(FUNC_12(VAR_6, FUNC_10(VAR_7),
                                  VAR_13, VAR_12));




  return FUNC_5(VAR_7, VAR_9, FUNC_11(*VAR_6),
                   VAR_14.kind, VAR_11, VAR_12);
}
