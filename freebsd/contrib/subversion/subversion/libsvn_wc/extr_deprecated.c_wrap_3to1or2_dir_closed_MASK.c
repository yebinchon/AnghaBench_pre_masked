
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_wc_notify_state_t ;
typedef int svn_wc_adm_access_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_0(svn_wc_adm_access_t *VAR_3,
                        svn_wc_notify_state_t *VAR_4,
                        svn_wc_notify_state_t *VAR_5,
                        svn_boolean_t *VAR_6,
                        const char *VAR_7,
                        void *VAR_8)
{
  if (VAR_5)
    *VAR_5 = VAR_2;
  if (VAR_4)
    *VAR_4 = VAR_2;
  if (VAR_6)
    *VAR_6 = VAR_0;

  return VAR_1;
}
