
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tview_len; } ;
typedef TYPE_1__ svn_txdelta_window_t ;
typedef int svn_error_t ;
struct file_rev_baton {int byte_count; } ;


 int * VAR_0 ;

__attribute__((used)) static svn_error_t *
FUNC_0(svn_txdelta_window_t *VAR_1, void *VAR_2)
{
  struct file_rev_baton *VAR_3 = VAR_2;

  if (VAR_1 != ((void*)0))
    VAR_3->byte_count += VAR_1->tview_len;

  return VAR_0;
}
