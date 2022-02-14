
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_stream_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_7__ {char const* edit_key; } ;
typedef TYPE_1__ node_revision_t ;
struct TYPE_8__ {scalar_t__ kind; int id; int * fs; } ;
typedef TYPE_2__ dag_node_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (TYPE_2__*,char const*) ;
 int FUNC_4 (int *,char const*,char const*,int *,int *) ;
 int FUNC_5 (char const**,int *,int *,char const*,int *,int *) ;
 int FUNC_6 (int **,int *,char const*,char const*,int ,int *,int *) ;
 int FUNC_7 (TYPE_1__**,int *,int ,int *,int *) ;
 int FUNC_8 (int *,int ,TYPE_1__*,int *,int *) ;
 scalar_t__ VAR_4 ;

svn_error_t *
FUNC_9(svn_stream_t **VAR_5,
                                 dag_node_t *VAR_6,
                                 const char *VAR_7,
                                 trail_t *VAR_8,
                                 apr_pool_t *VAR_9)
{
  svn_fs_t *VAR_10 = VAR_6->fs;
  node_revision_t *VAR_11;
  const char *VAR_12;
  svn_stream_t *VAR_13;


  if (VAR_6->kind != VAR_4)
    return FUNC_2
      (VAR_1, ((void*)0),
       FUNC_1("Attempted to set textual contents of a *non*-file node"));


  if (! FUNC_3(VAR_6, VAR_7))
    return FUNC_2
      (VAR_2, ((void*)0),
       FUNC_1("Attempted to set textual contents of an immutable node"));


  FUNC_0(FUNC_7(&VAR_11, VAR_10, VAR_6->id,
                                        VAR_8, VAR_9));



  if (VAR_11->edit_key)
    FUNC_0(FUNC_4(VAR_10, VAR_11->edit_key,
                                               VAR_7, VAR_8, VAR_9));



  FUNC_0(FUNC_5(&VAR_12, ((void*)0), VAR_10,
                                       VAR_7, VAR_8, VAR_9));


  VAR_11->edit_key = VAR_12;
  FUNC_0(FUNC_8(VAR_10, VAR_6->id, VAR_11,
                                        VAR_8, VAR_9));


  FUNC_0(FUNC_6(&VAR_13, VAR_10, VAR_12,
                                                 VAR_7, VAR_0, VAR_8,
                                                 VAR_9));
  *VAR_5 = VAR_13;

  return VAR_3;
}
