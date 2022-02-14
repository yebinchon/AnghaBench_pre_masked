
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct recover_read_from_file_baton {scalar_t__ remaining; int stream; } ;
typedef scalar_t__ apr_size_t ;
typedef scalar_t__ apr_int64_t ;


 int * VAR_0 ;
 int * FUNC_0 (int ,char*,scalar_t__*) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_1, char *VAR_2, apr_size_t *VAR_3)
{
  struct recover_read_from_file_baton *VAR_4 = VAR_1;
  apr_size_t VAR_5 = *VAR_3;

  if (VAR_4->remaining == 0)
    {

      *VAR_3 = 0;
      return VAR_0;
    }

  if ((apr_int64_t)VAR_5 > (apr_int64_t)VAR_4->remaining)
    VAR_5 = (apr_size_t)VAR_4->remaining;
  VAR_4->remaining -= VAR_5;

  return FUNC_0(VAR_4->stream, VAR_2, &VAR_5);
}
