
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ix86_address {scalar_t__ base; scalar_t__ index; scalar_t__ disp; scalar_t__ seg; int scale; } ;
typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,struct ix86_address*) ;

__attribute__((used)) static int
FUNC_6 (rtx VAR_5)
{
  struct ix86_address VAR_6;
  int VAR_7 = 1;
  int VAR_8 = FUNC_5 (VAR_5, &VAR_6);

  FUNC_4 (VAR_8);

  if (VAR_6.base && FUNC_0 (VAR_6.base) == VAR_2)
    VAR_6.base = FUNC_3 (VAR_6.base);
  if (VAR_6.index && FUNC_0 (VAR_6.index) == VAR_2)
    VAR_6.index = FUNC_3 (VAR_6.index);


  if (VAR_6.disp && VAR_6.disp != VAR_4)
    VAR_7--;
  if (VAR_6.seg != VAR_1)
    VAR_7--;


  if ((VAR_6.base
       && (!FUNC_2 (VAR_6.base) || FUNC_1 (VAR_6.base) >= VAR_0))
      || (VAR_6.index
   && (!FUNC_2 (VAR_6.index)
       || FUNC_1 (VAR_6.index) >= VAR_0)))
    VAR_7++;

  if (VAR_6.base
      && (!FUNC_2 (VAR_6.base) || FUNC_1 (VAR_6.base) >= VAR_0)
      && VAR_6.index
      && (!FUNC_2 (VAR_6.index) || FUNC_1 (VAR_6.index) >= VAR_0)
      && VAR_6.base != VAR_6.index)
    VAR_7++;
  if (VAR_3
      && ((!VAR_6.disp && VAR_6.base && VAR_6.index && VAR_6.scale != 1)
   || (VAR_6.disp && !VAR_6.base && VAR_6.index && VAR_6.scale != 1)
   || (!VAR_6.disp && VAR_6.base && VAR_6.index && VAR_6.scale == 1)))
    VAR_7 += 10;

  return VAR_7;
}
