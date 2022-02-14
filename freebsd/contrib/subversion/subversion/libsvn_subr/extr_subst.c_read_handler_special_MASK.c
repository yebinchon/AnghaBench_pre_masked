
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct special_stream_baton {int pool; int path; scalar_t__ read_stream; } ;
typedef int apr_size_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (int ,int *,int ,int ) ;
 int * FUNC_3 (scalar_t__,char*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_1, char *VAR_2, apr_size_t *VAR_3)
{
  struct special_stream_baton *VAR_4 = VAR_1;

  if (VAR_4->read_stream)

    return FUNC_3(VAR_4->read_stream, VAR_2, VAR_3);
  else
    return FUNC_2(VAR_0, ((void*)0),
                             FUNC_0("Can't read special file: File '%s' not found"),
                             FUNC_1(VAR_4->path, VAR_4->pool));
}
