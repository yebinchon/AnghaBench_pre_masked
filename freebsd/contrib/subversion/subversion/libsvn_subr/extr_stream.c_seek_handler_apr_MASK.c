
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_mark_t ;
typedef int svn_error_t ;
struct mark_apr {int off; } ;
struct baton_apr {int pool; int file; scalar_t__ truncate_on_seek; } ;
typedef int apr_off_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_2, const svn_stream_mark_t *VAR_3)
{
  struct baton_apr *VAR_4 = VAR_2;
  apr_off_t VAR_5 = (VAR_3 != ((void*)0)) ? ((const struct mark_apr *)VAR_3)->off : 0;

  if (VAR_4->truncate_on_seek)
    {


      FUNC_0(FUNC_2(VAR_4->file, VAR_5, VAR_4->pool));
    }
  else
    {
      FUNC_0(FUNC_1(VAR_4->file, VAR_0, &VAR_5, VAR_4->pool));
    }

  return VAR_1;
}
