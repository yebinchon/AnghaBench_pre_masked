
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_13__ {int created_path; scalar_t__ kind; } ;
typedef TYPE_1__ node_revision_t ;
typedef int new_noderev ;
struct TYPE_14__ {scalar_t__ kind; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int const**,TYPE_2__*,char const*,int *,int *) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int * FUNC_4 (TYPE_2__*,char const*,int ,char const*,int *,int *) ;
 int * FUNC_5 (int ,int *,int ) ;
 int * FUNC_6 (int ,int *,int ,...) ;
 int FUNC_7 (int const**,int ,TYPE_1__*,int ,char const*,int *,int *) ;
 int FUNC_8 (TYPE_2__*,char const*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__**,int ,int const*,int *,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char const*,char const*,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_14 (char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_15(dag_node_t **VAR_6,
           dag_node_t *VAR_7,
           const char *VAR_8,
           const char *VAR_9,
           svn_boolean_t VAR_10,
           const char *VAR_11,
           trail_t *VAR_12,
           apr_pool_t *VAR_13)
{
  const svn_fs_id_t *VAR_14;
  node_revision_t VAR_15;


  if (! FUNC_14(VAR_9))
    return FUNC_6
      (VAR_3, ((void*)0),
       FUNC_1("Attempted to create a node with an illegal name '%s'"), VAR_9);


  if (VAR_7->kind != VAR_4)
    return FUNC_5
      (VAR_1, ((void*)0),
       FUNC_1("Attempted to create entry in non-directory parent"));


  if (! FUNC_8(VAR_7, VAR_11))
    return FUNC_6
      (VAR_2, ((void*)0),
       FUNC_1("Attempted to clone child of non-mutable node"));


  FUNC_0(FUNC_2(&VAR_14, VAR_7, VAR_9, VAR_12, VAR_13));
  if (VAR_14)
    return FUNC_6
      (VAR_0, ((void*)0),
       FUNC_1("Attempted to create entry that already exists"));


  FUNC_3(&VAR_15, 0, sizeof(VAR_15));
  VAR_15.kind = VAR_10 ? VAR_4 : VAR_5;
  VAR_15.created_path = FUNC_13(VAR_8, VAR_9, VAR_13);
  FUNC_0(FUNC_7
          (&VAR_14, FUNC_9(VAR_7), &VAR_15,
           FUNC_12(FUNC_10(VAR_7)),
           VAR_11, VAR_12, VAR_13));


  FUNC_0(FUNC_11(VAR_6,
                                    FUNC_9(VAR_7),
                                    VAR_14, VAR_12, VAR_13));




  return FUNC_4(VAR_7, VAR_9, FUNC_10(*VAR_6),
                   VAR_11, VAR_12, VAR_13);
}
