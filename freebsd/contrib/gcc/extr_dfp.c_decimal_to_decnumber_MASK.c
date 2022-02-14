
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int decimal128 ;
struct TYPE_12__ {int bits; } ;
typedef TYPE_1__ decNumber ;
struct TYPE_13__ {scalar_t__ traps; } ;
typedef TYPE_2__ decContext ;
struct TYPE_14__ {int cl; scalar_t__ sign; scalar_t__ sig; int decimal; int signalling; } ;
typedef TYPE_3__ REAL_VALUE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_1__*,char*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;





__attribute__((used)) static void
FUNC_7 (const REAL_VALUE_TYPE *VAR_2, decNumber *VAR_3)
{
  decContext VAR_4;
  FUNC_0 (&VAR_4, VAR_1);
  VAR_4.traps = 0;

  switch (VAR_2->cl)
    {
    case 128:
      FUNC_3 (VAR_3);
      break;
    case 131:
      FUNC_1 (VAR_3, (char *)"Infinity", &VAR_4);
      break;
    case 130:
      if (VAR_2->signalling)
        FUNC_1 (VAR_3, (char *)"snan", &VAR_4);
      else
        FUNC_1 (VAR_3, (char *)"nan", &VAR_4);
      break;
    case 129:
      FUNC_5 (VAR_2->decimal);
      FUNC_4 ((decimal128 *) VAR_2->sig, VAR_3);
      break;
    default:
      FUNC_6 ();
    }


  if (VAR_2->sign != FUNC_2 (VAR_3))
    VAR_3->bits ^= VAR_0;
}
