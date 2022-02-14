
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_txdelta_window_t ;
typedef int svn_error_t ;
struct delta_baton {int wrapped_baton; int (* wrapped_handler ) (int *,int ) ;} ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_txdelta_window_t *VAR_1, void *VAR_2)
{
  struct delta_baton *VAR_3 = VAR_2;


  if (VAR_3->wrapped_handler)
    FUNC_0(VAR_3->wrapped_handler(VAR_1, VAR_3->wrapped_baton));


  if (VAR_1)
    return VAR_0;


  FUNC_0(FUNC_2(VAR_2));

  return VAR_0;
}
