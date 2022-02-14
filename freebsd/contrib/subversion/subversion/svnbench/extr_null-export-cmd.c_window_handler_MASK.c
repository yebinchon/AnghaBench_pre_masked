
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tview_len; } ;
typedef TYPE_1__ svn_txdelta_window_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int byte_count; } ;
typedef TYPE_2__ edit_baton_t ;


 int * VAR_0 ;

__attribute__((used)) static svn_error_t *
FUNC_0(svn_txdelta_window_t *VAR_1, void *VAR_2)
{
  edit_baton_t *VAR_3 = VAR_2;
  if (VAR_1 != ((void*)0))
    VAR_3->byte_count += VAR_1->tview_len;

  return VAR_0;
}
