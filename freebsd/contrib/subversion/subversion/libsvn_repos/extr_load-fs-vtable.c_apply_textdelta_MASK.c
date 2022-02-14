
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * svn_txdelta_window_handler_t ;
typedef int svn_error_t ;
struct revision_baton {int txn_root; scalar_t__ skipped; } ;
struct node_baton {int pool; int result_checksum; int base_checksum; int path; struct revision_baton* rb; } ;


 int * VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (int **,void**,int ,int ,int ,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_txdelta_window_handler_t *VAR_1,
                void **VAR_2,
                void *VAR_3)
{
  struct node_baton *VAR_4 = VAR_3;
  struct revision_baton *VAR_5 = VAR_4->rb;


  if (VAR_5->skipped)
    {
      *VAR_1 = ((void*)0);
      return VAR_0;
    }

  return FUNC_1(VAR_1, VAR_2,
                                VAR_5->txn_root, VAR_4->path,
                                FUNC_0(VAR_4->base_checksum,
                                                        VAR_4->pool),
                                FUNC_0(VAR_4->result_checksum,
                                                        VAR_4->pool),
                                VAR_4->pool);
}
