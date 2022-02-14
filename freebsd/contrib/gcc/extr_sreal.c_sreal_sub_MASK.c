
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int uhwi ;
struct TYPE_12__ {int exp; scalar_t__ sig_lo; scalar_t__ sig; scalar_t__ sig_hi; } ;
typedef TYPE_1__ sreal ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_1__*) ;

sreal *
FUNC_5 (sreal *VAR_2, sreal *VAR_3, sreal *VAR_4)
{
  int VAR_5;
  sreal VAR_6;
  sreal *VAR_7;

  FUNC_1 (FUNC_4 (VAR_3, VAR_4) >= 0);

  VAR_5 = VAR_3->exp - VAR_4->exp;
  VAR_2->exp = VAR_3->exp;
  if (VAR_5 > VAR_0)
    {

      VAR_2->sig_hi = VAR_3->sig_hi;
      VAR_2->sig_lo = VAR_3->sig_lo;



      return VAR_2;
    }
  if (VAR_5 == 0)
    VAR_7 = VAR_4;
  else
    {
      FUNC_0 (&VAR_6, VAR_4);
      FUNC_3 (&VAR_6, VAR_5);
      VAR_7 = &VAR_6;
    }


  if (VAR_3->sig_lo < VAR_7->sig_lo)
    {
      VAR_2->sig_hi = VAR_3->sig_hi - VAR_7->sig_hi - 1;
      VAR_2->sig_lo = VAR_3->sig_lo + ((uhwi) 1 << VAR_1) - VAR_7->sig_lo;
    }
  else
    {
      VAR_2->sig_hi = VAR_3->sig_hi - VAR_7->sig_hi;
      VAR_2->sig_lo = VAR_3->sig_lo - VAR_7->sig_lo;
    }



  FUNC_2 (VAR_2);
  return VAR_2;
}
