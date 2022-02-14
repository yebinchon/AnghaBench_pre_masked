
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int kind; } ;
typedef TYPE_1__ diagnostic_info ;
struct TYPE_7__ {int lock; int printer; } ;
typedef TYPE_2__ diagnostic_context ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4 (diagnostic_context *VAR_2)
{
  diagnostic_info VAR_3;

  if (VAR_2->lock < 3)
    FUNC_2 (VAR_2->printer);

  FUNC_1 (VAR_1,
    "Internal compiler error: Error reporting routines re-entered.\n");



  VAR_3.kind = VAR_0;
  FUNC_0 (VAR_2, &VAR_3);



  FUNC_3 ();
}
