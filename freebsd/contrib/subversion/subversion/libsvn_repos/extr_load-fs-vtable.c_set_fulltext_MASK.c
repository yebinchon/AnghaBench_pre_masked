
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_error_t ;
struct revision_baton {int txn_root; scalar_t__ skipped; } ;
struct node_baton {int pool; int result_checksum; int path; struct revision_baton* rb; } ;


 int * VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int * FUNC_1 (int **,int ,int ,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_stream_t **VAR_1,
             void *VAR_2)
{
  struct node_baton *VAR_3 = VAR_2;
  struct revision_baton *VAR_4 = VAR_3->rb;


  if (VAR_4->skipped)
    {
      *VAR_1 = ((void*)0);
      return VAR_0;
    }

  return FUNC_1(VAR_1,
                           VAR_4->txn_root, VAR_3->path,
                           FUNC_0(VAR_3->result_checksum,
                                                   VAR_3->pool),
                           VAR_3->pool);
}
