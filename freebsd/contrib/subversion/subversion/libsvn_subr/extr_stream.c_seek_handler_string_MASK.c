
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_mark_t ;
typedef int svn_error_t ;
struct string_stream_mark {scalar_t__ pos; } ;
struct string_stream_baton {scalar_t__ amt_read; } ;


 int * VAR_0 ;

__attribute__((used)) static svn_error_t *
FUNC_0(void *VAR_1, const svn_stream_mark_t *VAR_2)
{
  struct string_stream_baton *VAR_3 = VAR_1;

  if (VAR_2 != ((void*)0))
    {
      const struct string_stream_mark *VAR_4;

      VAR_4 = (const struct string_stream_mark *)VAR_2;
      VAR_3->amt_read = VAR_4->pos;
    }
  else
    VAR_3->amt_read = 0;

  return VAR_0;
}
