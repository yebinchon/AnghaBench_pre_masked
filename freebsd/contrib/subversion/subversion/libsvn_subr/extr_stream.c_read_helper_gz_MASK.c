
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uInt ;
typedef int svn_stream_t ;
typedef int svn_error_t ;
typedef scalar_t__ apr_size_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,scalar_t__*) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_stream_t *VAR_2,
               char *VAR_3,
               uInt *VAR_4, int *VAR_5)
{
  uInt VAR_6 = *VAR_4;



  apr_size_t VAR_7 = (apr_size_t) *VAR_4;

  FUNC_0(FUNC_1(VAR_2, VAR_3, &VAR_7));



  *VAR_4 = (uInt) VAR_7;



  *VAR_5 = (*VAR_4) < VAR_6 ? VAR_1 : VAR_1;

  return VAR_0;
}
