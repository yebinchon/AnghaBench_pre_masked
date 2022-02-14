
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_2__ {int err; } ;
typedef TYPE_1__ open_txdelta_baton_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, svn_error_t *VAR_1)
{
  open_txdelta_baton_t *VAR_2 = VAR_0;





  VAR_2->err = FUNC_0(VAR_2->err, FUNC_1(VAR_1));
}
