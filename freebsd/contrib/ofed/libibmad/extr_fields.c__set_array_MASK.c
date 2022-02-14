
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int bitoffs; int bitlen; } ;
typedef TYPE_1__ ib_field_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,void*,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, int VAR_1, const ib_field_t * VAR_2,
         void *VAR_3)
{
 int VAR_4 = VAR_2->bitoffs;

 if (VAR_2->bitlen < 32)
  VAR_4 = FUNC_0(VAR_4, VAR_2->bitlen);

 FUNC_1((uint8_t *) VAR_0 + VAR_1 + VAR_4 / 8, VAR_3, VAR_2->bitlen / 8);
}
