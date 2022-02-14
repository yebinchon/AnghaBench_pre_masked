
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ gcov_type ;
typedef TYPE_1__* edge ;
typedef TYPE_2__* basic_block ;
struct TYPE_8__ {scalar_t__ count; scalar_t__ frequency; int succs; } ;
struct TYPE_7__ {scalar_t__ count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4 (basic_block VAR_0, gcov_type VAR_1, int VAR_2)
{
  edge VAR_3;
  VAR_0->count -= VAR_1;
  if (VAR_0->count < 0)
    VAR_0->count = 0;
  VAR_0->frequency -= VAR_2;
  if (VAR_0->frequency < 0)
    VAR_0->frequency = 0;
  if (!FUNC_3 (VAR_0))
    {
      FUNC_1 (!FUNC_0 (VAR_0->succs));
      return;
    }
  VAR_3 = FUNC_2 (VAR_0);
  VAR_3->count -= VAR_1;
  if (VAR_3->count < 0)
    VAR_3->count = 0;
}
