
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_status_t ;
typedef int svn_wc_status2_t ;
struct old_status_func_cb_baton {int original_baton; int (* original_func ) (int ,char const*,int *) ;} ;


 int FUNC_0 (int ,char const*,int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0,
                               const char *VAR_1,
                               svn_wc_status2_t *VAR_2)
{
  struct old_status_func_cb_baton *VAR_3 = VAR_0;
  svn_wc_status_t *VAR_4 = (svn_wc_status_t *) VAR_2;

  VAR_3->original_func(VAR_3->original_baton, VAR_1, VAR_4);
}
