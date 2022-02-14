
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int trail_t ;
struct TYPE_8__ {int len; int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_skel_t ;
typedef int svn_fs_t ;
struct TYPE_9__ {int kind; void* id; void const* name; } ;
typedef TYPE_2__ svn_fs_dirent_t ;
typedef int svn_error_t ;
struct TYPE_10__ {scalar_t__ kind; int data_key; } ;
typedef TYPE_3__ node_revision_t ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,void const*,int ,TYPE_2__*) ;
 int FUNC_6 (int *,void const**,int *,void**) ;
 TYPE_2__* FUNC_7 (int *,int) ;
 int * FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (int **,int *,int *) ;
 int FUNC_10 (TYPE_1__*,int *,int ,int *,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * FUNC_11 (int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_12(apr_hash_t **VAR_4,
                svn_fs_t *VAR_5,
                node_revision_t *VAR_6,
                trail_t *VAR_7,
                apr_pool_t *VAR_8)
{
  apr_hash_t *VAR_9 = ((void*)0);
  apr_hash_index_t *VAR_10;
  svn_string_t VAR_11;
  svn_skel_t *VAR_12;


  if (VAR_6->kind != VAR_2)
    return FUNC_8
      (VAR_0, ((void*)0),
       FUNC_1("Attempted to get entries of a non-directory node"));


  if (VAR_6->data_key)
    {

      FUNC_0(FUNC_10(&VAR_11, VAR_5, VAR_6->data_key,
                                        VAR_7, VAR_8));
      VAR_12 = FUNC_11(VAR_11.data, VAR_11.len, VAR_8);


      if (VAR_12)
        FUNC_0(FUNC_9(&VAR_9, VAR_12,
                                                VAR_8));
    }


  *VAR_4 = ((void*)0);
  if (! VAR_9)
    return VAR_1;


  *VAR_4 = FUNC_3(VAR_8);
  for (VAR_10 = FUNC_2(VAR_8, VAR_9); VAR_10; VAR_10 = FUNC_4(VAR_10))
    {
      const void *VAR_13;
      apr_ssize_t VAR_14;
      void *VAR_15;
      svn_fs_dirent_t *VAR_16 = FUNC_7(VAR_8, sizeof(*VAR_16));


      FUNC_6(VAR_10, &VAR_13, &VAR_14, &VAR_15);
      VAR_16->name = VAR_13;
      VAR_16->id = VAR_15;
      VAR_16->kind = VAR_3;
      FUNC_5(*VAR_4, VAR_13, VAR_14, VAR_16);
    }


  return VAR_1;
}
