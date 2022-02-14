
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uInt ;
struct TYPE_6__ {int bits; int* lsu; int exponent; int digits; } ;
typedef TYPE_1__ decNumber ;
typedef size_t Unit ;
typedef int Int ;
typedef int Flag ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 size_t FUNC_2 (size_t,size_t) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_4 (size_t*,int ,int) ;
 size_t* VAR_3 ;

__attribute__((used)) static decNumber *
FUNC_5 (decNumber * VAR_4, Flag VAR_5, Int * VAR_6)
{
  Int VAR_7, VAR_8;
  uInt VAR_9;
  Unit *VAR_10;






  *VAR_6 = 0;
  if ((VAR_4->bits & VAR_1)
      || (*VAR_4->lsu & 0x01))
    return VAR_4;
  if (FUNC_1 (VAR_4))
    {
      VAR_4->exponent = 0;
      return VAR_4;
    }


  VAR_8 = VAR_4->exponent;
  VAR_9 = 1;
  VAR_10 = VAR_4->lsu;
  for (VAR_7 = 0; VAR_7 < VAR_4->digits - 1; VAR_7++)
    {


      uInt VAR_11 = FUNC_2 (*VAR_10, VAR_9);
      if ((*VAR_10 - VAR_11 * VAR_3[VAR_9]) != 0)
 break;





      if (!VAR_5)
 {

   if (VAR_8 <= 0)
     {
       if (VAR_8 == 0)
  break;
       VAR_8++;
     }
 }
      VAR_9++;
      if (VAR_9 > VAR_0)
 {
   VAR_10++;
   VAR_9 = 1;
 }
    }
  if (VAR_7 == 0)
    return VAR_4;


  FUNC_4 (VAR_4->lsu, FUNC_0 (VAR_4->digits), VAR_7);
  VAR_4->exponent += VAR_7;
  VAR_4->digits -= VAR_7;
  *VAR_6 = VAR_7;
  return VAR_4;
}
