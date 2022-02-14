
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uInt ;
struct TYPE_8__ {int bits; scalar_t__ exponent; } ;
typedef TYPE_1__ decNumber ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__ const*) ;

__attribute__((used)) static decNumber *
FUNC_1 (decNumber * VAR_4, const decNumber * VAR_5, const decNumber * VAR_6, uInt * VAR_7)
{


  if (VAR_5->bits & VAR_1)
    *VAR_7 |= VAR_2 | VAR_3;
  else if (VAR_6 == ((void*)0));
  else if (VAR_6->bits & VAR_1)
    {
      VAR_5 = VAR_6;
      *VAR_7 |= VAR_2 | VAR_3;
    }
  else if (VAR_5->bits & VAR_0);
  else
    VAR_5 = VAR_6;

  FUNC_0 (VAR_4, VAR_5);
  VAR_4->bits &= ~VAR_1;
  VAR_4->bits |= VAR_0;
  VAR_4->exponent = 0;

  return VAR_4;
}
