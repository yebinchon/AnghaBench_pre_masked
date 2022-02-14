
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_txdelta_window_t ;
typedef int svn_error_t ;
struct tpush_baton {scalar_t__ target_len; int whb; int * (* wh ) (int *,int ) ;int pool; int source_offset; int source_len; int buf; } ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ,scalar_t__,int ,int ) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_0)
{
  struct tpush_baton *VAR_1 = VAR_0;
  svn_txdelta_window_t *VAR_2;


  if (VAR_1->target_len > 0)
    {
      VAR_2 = FUNC_1(VAR_1->buf, VAR_1->source_len, VAR_1->target_len,
                              VAR_1->source_offset, VAR_1->pool);
      FUNC_0(VAR_1->wh(VAR_2, VAR_1->whb));
    }


  return VAR_1->wh(((void*)0), VAR_1->whb);
}
