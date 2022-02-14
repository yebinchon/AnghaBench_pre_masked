
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_2__ {int pool; int file; } ;
struct install_baton_t {TYPE_1__ baton_apr; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_1)
{
  struct install_baton_t *VAR_2 = VAR_1;


  FUNC_0(FUNC_1(VAR_2->baton_apr.file, VAR_2->baton_apr.pool));

  return VAR_0;
}
