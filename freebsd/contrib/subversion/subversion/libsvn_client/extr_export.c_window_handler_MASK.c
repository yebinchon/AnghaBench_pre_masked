
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_txdelta_window_t ;
typedef int svn_error_t ;
struct handler_baton {int pool; int tmppath; int apply_baton; int * (* apply_handler ) (int *,int ) ;} ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_txdelta_window_t *VAR_1, void *VAR_2)
{
  struct handler_baton *VAR_3 = VAR_2;
  svn_error_t *VAR_4;

  VAR_4 = VAR_3->apply_handler(VAR_1, VAR_3->apply_baton);
  if (VAR_4)
    {

      VAR_4 = FUNC_1(
                    VAR_4,
                    FUNC_3(VAR_3->tmppath, VAR_0, VAR_3->pool));
    }

  return FUNC_2(VAR_4);
}
