
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int pool; } ;
typedef TYPE_1__ trail_t ;
typedef int svn_error_t ;
struct text_baton_t {int stream; int pool; int node; int file_stream; int path; TYPE_7__* root; } ;
struct TYPE_13__ {int node; } ;
typedef TYPE_2__ parent_path_t ;
struct TYPE_14__ {char* txn; int txn_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (TYPE_7__*,TYPE_2__*,int ,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_2__**,TYPE_7__*,int ,int ,char const*,TYPE_1__*,int ) ;
 int FUNC_3 (int ,int ,TYPE_1__*,int ) ;
 int FUNC_4 (int *,int ,char const*,TYPE_1__*,int ) ;
 int FUNC_5 (struct text_baton_t*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_8(void *VAR_5, trail_t *VAR_6)
{
  struct text_baton_t *VAR_7 = VAR_5;
  parent_path_t *VAR_8;
  const char *VAR_9 = VAR_7->root->txn;



  FUNC_0(FUNC_2(&VAR_8, VAR_7->root, VAR_7->path, 0, VAR_9,
                    VAR_6, VAR_6->pool));


  if (VAR_7->root->txn_flags & VAR_1)
    FUNC_0(FUNC_3(VAR_7->path, VAR_0,
                                                VAR_6, VAR_6->pool));


  FUNC_0(FUNC_1(VAR_7->root, VAR_8, VAR_7->path,
                            VAR_6, VAR_6->pool));
  VAR_7->node = VAR_8->node;


  FUNC_0(FUNC_4(&(VAR_7->file_stream), VAR_7->node,
                                           VAR_9, VAR_6, VAR_7->pool));


  VAR_7->stream = FUNC_5(VAR_7, VAR_7->pool);
  FUNC_7(VAR_7->stream, VAR_4);
  FUNC_6(VAR_7->stream, VAR_3);

  return VAR_2;
}
