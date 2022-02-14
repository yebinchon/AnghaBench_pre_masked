
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ lsb0; unsigned int length; unsigned int size; } ;
typedef TYPE_1__ isc_bitstring_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,unsigned int) ;
 int FUNC_1 (TYPE_1__*,unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,unsigned int) ;
 int FUNC_5 (TYPE_1__*) ;

void
FUNC_6(isc_bitstring_t *VAR_0, unsigned int VAR_1,
     isc_bitstring_t *VAR_2, unsigned int VAR_3,
     unsigned int VAR_4)
{
 unsigned int VAR_5;






 FUNC_3(FUNC_5(VAR_0));
 FUNC_3(FUNC_5(VAR_2));
 FUNC_3(VAR_0->lsb0 == VAR_2->lsb0);
 if (VAR_0->lsb0) {
  FUNC_3(VAR_1 <= VAR_0->length);
  VAR_1 = FUNC_2(VAR_0->size) - VAR_1;
  FUNC_3(VAR_1 >= VAR_4);
  VAR_1 -= VAR_4;
 } else
  FUNC_3(VAR_1 + VAR_4 <= VAR_0->length);
 VAR_5 = VAR_3 + VAR_4;
 if (VAR_2->lsb0) {
  FUNC_3(VAR_3 <= VAR_2->length);
  VAR_3 = FUNC_2(VAR_2->size) - VAR_3;
  FUNC_3(VAR_3 >= VAR_4);
  VAR_3 -= VAR_4;
 } else
  FUNC_3(VAR_5 <= VAR_2->size);

 if (VAR_5 > VAR_2->length)
  VAR_2->length = VAR_5;





 while (VAR_4 > 0) {
  if (FUNC_0(VAR_0, VAR_1))
   FUNC_4(VAR_2, VAR_3);
  else
   FUNC_1(VAR_2, VAR_3);
  VAR_1++;
  VAR_3++;
  VAR_4--;
 }
}
