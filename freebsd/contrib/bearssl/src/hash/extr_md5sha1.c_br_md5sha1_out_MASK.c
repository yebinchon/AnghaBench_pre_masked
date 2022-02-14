
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef unsigned char uint32_t ;
struct TYPE_3__ {int count; int val_sha1; int val_md5; int buf; } ;
typedef TYPE_1__ br_md5sha1_context ;


 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (unsigned char*,unsigned char*) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 int FUNC_4 (unsigned char*,unsigned char*,int) ;
 int FUNC_5 (unsigned char*,unsigned char*) ;
 int FUNC_6 (unsigned char*,int ,int) ;
 int FUNC_7 (unsigned char*,int ,int) ;

void
FUNC_8(const br_md5sha1_context *VAR_0, void *VAR_1)
{
 unsigned char VAR_2[64];
 uint32_t VAR_3[4];
 uint32_t VAR_4[5];
 size_t VAR_5;
 unsigned char *VAR_6;
 uint64_t VAR_7;

 VAR_7 = VAR_0->count;
 VAR_5 = (size_t)VAR_7 & 63;
 FUNC_6(VAR_2, VAR_0->buf, VAR_5);
 FUNC_6(VAR_3, VAR_0->val_md5, sizeof VAR_3);
 FUNC_6(VAR_4, VAR_0->val_sha1, sizeof VAR_4);
 VAR_2[VAR_5 ++] = 0x80;
 if (VAR_5 > 56) {
  FUNC_7(VAR_2 + VAR_5, 0, 64 - VAR_5);
  FUNC_2(VAR_2, VAR_3);
  FUNC_5(VAR_2, VAR_4);
  FUNC_7(VAR_2, 0, 56);
 } else {
  FUNC_7(VAR_2 + VAR_5, 0, 56 - VAR_5);
 }
 VAR_7 <<= 3;
 FUNC_1(VAR_2 + 56, VAR_7);
 FUNC_2(VAR_2, VAR_3);
 FUNC_0(VAR_2 + 56, VAR_7);
 FUNC_5(VAR_2, VAR_4);
 VAR_6 = VAR_1;
 FUNC_4(VAR_6, VAR_3, 4);
 FUNC_3(VAR_6 + 16, VAR_4, 5);
}
