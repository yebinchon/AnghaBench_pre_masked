
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {unsigned int keylen; scalar_t__ key; } ;
typedef TYPE_1__ ucl_object_t ;


 void** VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static inline uint32_t
FUNC_3 (const ucl_object_t *VAR_1)
{
 unsigned VAR_2 = VAR_1->keylen;
 unsigned VAR_3 = VAR_1->keylen % 8;
 unsigned VAR_4, VAR_5;
 const uint8_t* VAR_6 = (const uint8_t*)VAR_1->key;
 union {
  struct {
   unsigned char c1, c2, c3, c4, c5, c6, c7, c8;
  } c;
  uint64_t pp;
 } VAR_7;
 uint64_t VAR_8;

 VAR_4 = VAR_2 - VAR_3;
 VAR_8 = FUNC_2 ();

 for (VAR_5 = 0; VAR_5 != VAR_4; VAR_5 += 8) {
  VAR_7.c.c1 = VAR_6[VAR_5], VAR_7.c.c2 = VAR_6[VAR_5 + 1], VAR_7.c.c3 = VAR_6[VAR_5 + 2], VAR_7.c.c4 = VAR_6[VAR_5 + 3];
  VAR_7.c.c5 = VAR_6[VAR_5 + 4], VAR_7.c.c6 = VAR_6[VAR_5 + 5], VAR_7.c.c7 = VAR_6[VAR_5 + 6], VAR_7.c.c8 = VAR_6[VAR_5 + 7];
  VAR_7.c.c1 = VAR_0[VAR_7.c.c1];
  VAR_7.c.c2 = VAR_0[VAR_7.c.c2];
  VAR_7.c.c3 = VAR_0[VAR_7.c.c3];
  VAR_7.c.c4 = VAR_0[VAR_7.c.c4];
  VAR_7.c.c1 = VAR_0[VAR_7.c.c5];
  VAR_7.c.c2 = VAR_0[VAR_7.c.c6];
  VAR_7.c.c3 = VAR_0[VAR_7.c.c7];
  VAR_7.c.c4 = VAR_0[VAR_7.c.c8];
  VAR_8 = FUNC_1 (VAR_8, VAR_7.pp);
 }

 VAR_7.pp = 0;
 switch (VAR_3) {
 case 7:
  VAR_7.c.c7 = VAR_0[(unsigned char)VAR_6[VAR_5++]];
 case 6:
  VAR_7.c.c6 = VAR_0[(unsigned char)VAR_6[VAR_5++]];
 case 5:
  VAR_7.c.c5 = VAR_0[(unsigned char)VAR_6[VAR_5++]];
 case 4:
  VAR_7.c.c4 = VAR_0[(unsigned char)VAR_6[VAR_5++]];
 case 3:
  VAR_7.c.c3 = VAR_0[(unsigned char)VAR_6[VAR_5++]];
 case 2:
  VAR_7.c.c2 = VAR_0[(unsigned char)VAR_6[VAR_5++]];
 case 1:
  VAR_7.c.c1 = VAR_0[(unsigned char)VAR_6[VAR_5]];
  VAR_8 = FUNC_1 (VAR_8, VAR_7.pp);
  break;
 }

 return FUNC_0 (VAR_8);
}
