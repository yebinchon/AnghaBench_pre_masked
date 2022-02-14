
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned char uint32_t ;
struct TYPE_3__ {int count; int val; int buf; } ;
typedef TYPE_1__ br_sha1_context ;


 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (void*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,unsigned char*) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (unsigned char*,int ,int) ;

void
FUNC_5(const br_sha1_context *VAR_0, void *VAR_1)
{
 unsigned char VAR_2[64];
 uint32_t VAR_3[5];
 size_t VAR_4;

 VAR_4 = (size_t)VAR_0->count & 63;
 FUNC_3(VAR_2, VAR_0->buf, VAR_4);
 FUNC_3(VAR_3, VAR_0->val, sizeof VAR_3);
 VAR_2[VAR_4 ++] = 0x80;
 if (VAR_4 > 56) {
  FUNC_4(VAR_2 + VAR_4, 0, 64 - VAR_4);
  FUNC_2(VAR_2, VAR_3);
  FUNC_4(VAR_2, 0, 56);
 } else {
  FUNC_4(VAR_2 + VAR_4, 0, 56 - VAR_4);
 }
 FUNC_0(VAR_2 + 56, VAR_0->count << 3);
 FUNC_2(VAR_2, VAR_3);
 FUNC_1(VAR_1, VAR_3, 5);
}
