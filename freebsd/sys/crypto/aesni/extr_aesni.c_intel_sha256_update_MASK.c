
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_int ;
struct TYPE_2__ {int count; unsigned char const* buf; int state; } ;
typedef TYPE_1__ SHA256_CTX ;


 int FUNC_0 (int ,unsigned char const*,int) ;
 int FUNC_1 (unsigned char const*,unsigned char const*,int) ;

__attribute__((used)) static int
FUNC_2(void *VAR_0, const void *VAR_1, u_int VAR_2)
{
 SHA256_CTX *VAR_3 = VAR_0;
 uint64_t VAR_4;
 uint32_t VAR_5;
 u_int VAR_6;
 const unsigned char *VAR_7 = VAR_1;


 VAR_5 = (VAR_3->count >> 3) & 0x3f;


 VAR_4 = VAR_2 << 3;


 VAR_3->count += VAR_4;


 if (VAR_2 < 64 - VAR_5) {
  FUNC_1(&VAR_3->buf[VAR_5], VAR_7, VAR_2);
  return (0);
 }


 FUNC_1(&VAR_3->buf[VAR_5], VAR_7, 64 - VAR_5);
 FUNC_0(VAR_3->state, VAR_3->buf, 1);
 VAR_7 += 64 - VAR_5;
 VAR_2 -= 64 - VAR_5;


 if (VAR_2 >= 64) {
  VAR_6 = VAR_2 / 64;
  FUNC_0(VAR_3->state, VAR_7, VAR_6);
  VAR_7 += VAR_6 * 64;
  VAR_2 -= VAR_6 * 64;
 }


 FUNC_1(VAR_3->buf, VAR_7, VAR_2);
 return (0);
}
