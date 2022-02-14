
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_filesize_t ;
struct length_verify_baton_t {int remaining; int * inner; } ;
typedef int apr_pool_t ;


 struct length_verify_baton_t* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (struct length_verify_baton_t*,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static svn_stream_t *
FUNC_4(svn_stream_t *VAR_2,
                         svn_filesize_t VAR_3,
                         apr_pool_t *VAR_4)
{
  struct length_verify_baton_t *VAR_5 = FUNC_0(VAR_4, sizeof(*VAR_5));
  svn_stream_t *VAR_6 = FUNC_1(VAR_5, VAR_4);

  VAR_5->inner = VAR_2;
  VAR_5->remaining = VAR_3;

  FUNC_3(VAR_6, ((void*)0) ,
                       VAR_1);
  FUNC_2(VAR_6, VAR_0);

  return VAR_6;
}
