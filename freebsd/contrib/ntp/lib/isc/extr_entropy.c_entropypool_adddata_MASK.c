
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int isc_uint8_t ;
typedef int isc_uint32_t ;
struct TYPE_5__ {int pool; } ;
typedef TYPE_1__ isc_entropy_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_3(isc_entropy_t *VAR_0, void *VAR_1, unsigned int VAR_2,
      isc_uint32_t VAR_3)
{
 isc_uint32_t VAR_4;
 unsigned long VAR_5;
 isc_uint8_t *VAR_6;

 VAR_5 = (unsigned long)VAR_1;
 VAR_6 = VAR_1;

 if ((VAR_5 & 0x03U) != 0U) {
  VAR_4 = 0;
  switch (VAR_2) {
  case 3:
   VAR_4 = *VAR_6++;
   VAR_2--;
  case 2:
   VAR_4 = VAR_4 << 8 | *VAR_6++;
   VAR_2--;
  case 1:
   VAR_4 = VAR_4 << 8 | *VAR_6++;
   VAR_2--;
  }

  FUNC_1(&VAR_0->pool, VAR_4);
 }

 for (; VAR_2 > 3; VAR_2 -= 4) {
  VAR_4 = *((isc_uint32_t *)VAR_6);

  FUNC_1(&VAR_0->pool, VAR_4);
  VAR_6 += 4;
 }

 if (VAR_2 != 0) {
  VAR_4 = 0;
  switch (VAR_2) {
  case 3:
   VAR_4 = *VAR_6++;
  case 2:
   VAR_4 = VAR_4 << 8 | *VAR_6++;
  case 1:
   VAR_4 = VAR_4 << 8 | *VAR_6++;
  }

  FUNC_1(&VAR_0->pool, VAR_4);
 }

 FUNC_0(VAR_0, VAR_3);
 FUNC_2(VAR_0, VAR_3);
}
