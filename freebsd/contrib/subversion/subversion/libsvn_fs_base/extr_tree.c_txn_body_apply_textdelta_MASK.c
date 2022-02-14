
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_20__ {int interpreter_baton; int interpreter; int pool; int path; int string_stream; int source_stream; int target_string; int node; int target_stream; TYPE_10__* base_checksum; TYPE_13__* root; } ;
typedef TYPE_1__ txdelta_baton_t ;
struct TYPE_21__ {int pool; } ;
typedef TYPE_2__ trail_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
struct TYPE_22__ {int node; } ;
typedef TYPE_3__ parent_path_t ;
struct TYPE_19__ {char* txn; int txn_flags; } ;
struct TYPE_18__ {int kind; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_13__*,TYPE_3__*,int ,TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_3__**,TYPE_13__*,int ,int ,char const*,TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_10__*,int *) ;
 int * FUNC_5 (TYPE_10__*,int *,int ,int ,int ) ;
 int FUNC_6 (int ,int ,TYPE_2__*,int ) ;
 int FUNC_7 (int **,int ,int ,TYPE_2__*,int ) ;
 int FUNC_8 (int *,int ,TYPE_2__*,int ) ;
 int FUNC_9 (int *,int ,char const*,TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int *,int ,int ,int *,int *) ;
 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_14(void *VAR_4, trail_t *VAR_5)
{
  txdelta_baton_t *VAR_6 = (txdelta_baton_t *) VAR_4;
  parent_path_t *VAR_7;
  const char *VAR_8 = VAR_6->root->txn;



  FUNC_0(FUNC_3(&VAR_7, VAR_6->root, VAR_6->path, 0, VAR_8,
                    VAR_5, VAR_5->pool));


  if (VAR_6->root->txn_flags & VAR_1)
    FUNC_0(FUNC_6(VAR_6->path, VAR_0,
                                                VAR_5, VAR_5->pool));


  FUNC_0(FUNC_2(VAR_6->root, VAR_7, VAR_6->path,
                            VAR_5, VAR_5->pool));
  VAR_6->node = VAR_7->node;

  if (VAR_6->base_checksum)
    {
      svn_checksum_t *VAR_9;



      FUNC_0(FUNC_7(&VAR_9,
                                             VAR_6->base_checksum->kind,
                                             VAR_6->node, VAR_5, VAR_5->pool));




      if (!FUNC_4(VAR_6->base_checksum, VAR_9))
        return FUNC_5(VAR_6->base_checksum, VAR_9,
                            VAR_5->pool,
                            FUNC_1("Base checksum mismatch on '%s'"),
                            VAR_6->path);
    }




  FUNC_0(FUNC_8(&(VAR_6->source_stream),
                                        VAR_6->node, VAR_5, VAR_6->pool));


  FUNC_0(FUNC_9(&(VAR_6->target_stream), VAR_6->node,
                                           VAR_8, VAR_5, VAR_6->pool));



  VAR_6->target_string = FUNC_12(VAR_6->pool);
  VAR_6->string_stream = FUNC_10(VAR_6, VAR_6->pool);
  FUNC_11(VAR_6->string_stream, VAR_3);


  FUNC_13(VAR_6->source_stream,
                    VAR_6->string_stream,
                    ((void*)0),
                    VAR_6->path,
                    VAR_6->pool,
                    &(VAR_6->interpreter),
                    &(VAR_6->interpreter_baton));

  return VAR_2;
}
