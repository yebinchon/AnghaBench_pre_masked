
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned char uint32_t ;
struct TYPE_3__ {int count; int val; int buf; } ;
typedef TYPE_1__ br_sha224_context ;


 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (void*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,unsigned char*) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (unsigned char*,int ,int) ;

__attribute__((used)) static void
FUNC_5(const br_sha224_context *VAR_0, void *VAR_1, int VAR_2)
{
 unsigned char VAR_3[64];
 uint32_t VAR_4[8];
 size_t VAR_5;

 VAR_5 = (size_t)VAR_0->count & 63;
 FUNC_3(VAR_3, VAR_0->buf, VAR_5);
 FUNC_3(VAR_4, VAR_0->val, sizeof VAR_4);
 VAR_3[VAR_5 ++] = 0x80;
 if (VAR_5 > 56) {
  FUNC_4(VAR_3 + VAR_5, 0, 64 - VAR_5);
  FUNC_2(VAR_3, VAR_4);
  FUNC_4(VAR_3, 0, 56);
 } else {
  FUNC_4(VAR_3 + VAR_5, 0, 56 - VAR_5);
 }
 FUNC_0(VAR_3 + 56, VAR_0->count << 3);
 FUNC_2(VAR_3, VAR_4);
 FUNC_1(VAR_1, VAR_4, VAR_2);
}
