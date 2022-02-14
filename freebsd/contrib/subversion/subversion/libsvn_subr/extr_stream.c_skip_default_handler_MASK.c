
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* svn_read_fn_t ) (void*,char*,scalar_t__*) ;
typedef int svn_error_t ;
typedef int buffer ;
typedef scalar_t__ apr_size_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_1, apr_size_t VAR_2, svn_read_fn_t VAR_3)
{
  apr_size_t VAR_4 = 1;
  char VAR_5[4096];
  apr_size_t VAR_6 = VAR_2;

  while ((VAR_6 > 0) && (VAR_4 > 0))
    {
      VAR_4 = sizeof(VAR_5) < VAR_6 ? sizeof(VAR_5) : VAR_6;
      FUNC_0(VAR_3(VAR_1, VAR_5, &VAR_4));
      VAR_6 -= VAR_4;
    }

  return VAR_0;
}
