
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct notify_baton {int is_export; } ;


 int * VAR_0 ;
 int VAR_1 ;

svn_error_t *
FUNC_0(void *VAR_2)
{
  struct notify_baton *VAR_3 = VAR_2;

  VAR_3->is_export = VAR_1;
  return VAR_0;
}
