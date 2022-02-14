
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct translated_stream_baton {int iterpool; int stream; int out_baton; scalar_t__ written; } ;


 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ,int ,int *,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(void *VAR_0)
{
  struct translated_stream_baton *VAR_1 = VAR_0;
  svn_error_t *VAR_2 = ((void*)0);

  if (VAR_1->written)
    VAR_2 = FUNC_4(VAR_1->stream, VAR_1->out_baton, ((void*)0), 0, VAR_1->iterpool);

  VAR_2 = FUNC_0(VAR_2, FUNC_3(VAR_1->stream));

  FUNC_2(VAR_1->iterpool);

  return FUNC_1(VAR_2);
}
