
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
struct base85_baton_t {void* end_pos; void* next_pos; int iterpool; int * file; } ;
typedef int apr_pool_t ;
typedef void* apr_off_t ;
typedef int apr_file_t ;


 struct base85_baton_t* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (struct base85_baton_t*,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int ) ;

__attribute__((used)) static svn_stream_t *
FUNC_5(apr_file_t *VAR_2,
                       apr_off_t VAR_3,
                       apr_off_t VAR_4,
                       apr_pool_t *VAR_5)
{
  struct base85_baton_t *VAR_6 = FUNC_0(VAR_5, sizeof(*VAR_6));
  svn_stream_t *VAR_7 = FUNC_2(VAR_6, VAR_5);

  VAR_6->file = VAR_2;
  VAR_6->iterpool = FUNC_1(VAR_5);
  VAR_6->next_pos = VAR_3;
  VAR_6->end_pos = VAR_4;

  FUNC_4(VAR_7, ((void*)0) ,
                       VAR_1);
  FUNC_3(VAR_7, VAR_0);
  return VAR_7;
}
