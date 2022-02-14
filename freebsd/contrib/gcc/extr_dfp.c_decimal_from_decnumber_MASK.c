
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int decimal128 ;
typedef int decNumber ;
struct TYPE_8__ {int status; scalar_t__ traps; } ;
typedef TYPE_1__ decContext ;
struct TYPE_9__ {scalar_t__ cl; int sign; int decimal; scalar_t__ sig; } ;
typedef TYPE_2__ REAL_VALUE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static void
FUNC_7 (REAL_VALUE_TYPE *VAR_6, decNumber *VAR_7, decContext *VAR_8)
{
  FUNC_6 (VAR_6, 0, sizeof (REAL_VALUE_TYPE));

  VAR_6->cl = VAR_4;
  if (FUNC_4 (VAR_7))
    VAR_6->cl = VAR_5;
  if (FUNC_2 (VAR_7))
    VAR_6->cl = VAR_3;
  if (FUNC_1 (VAR_7))
    VAR_6->cl = VAR_2;
  if (VAR_8->status & VAR_1)
    VAR_6->cl = VAR_2;
  if (FUNC_3 (VAR_7))
    VAR_6->sign = 1;
  VAR_6->decimal = 1;

  if (VAR_6->cl != VAR_4)
    return;

  FUNC_0 (VAR_8, VAR_0);
  VAR_8->traps = 0;

  FUNC_5 ((decimal128 *) VAR_6->sig, VAR_7, VAR_8);
}
