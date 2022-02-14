
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct text_baton_t {int file_stream; } ;
typedef int apr_size_t ;


 int * FUNC_0 (int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(void *VAR_0,
                   const char *VAR_1,
                   apr_size_t *VAR_2)
{
  struct text_baton_t *VAR_3 = VAR_0;


  return FUNC_0(VAR_3->file_stream, VAR_1, VAR_2);
}
