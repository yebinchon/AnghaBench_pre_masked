
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned char uint64_t ;
struct TYPE_3__ {int count; int val; int buf; } ;
typedef TYPE_1__ br_sha384_context ;


 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (void*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (unsigned char*,unsigned char*) ;

__attribute__((used)) static void
FUNC_5(const br_sha384_context *VAR_0, void *VAR_1, int VAR_2)
{
 unsigned char VAR_3[128];
 uint64_t VAR_4[8];
 size_t VAR_5;

 VAR_5 = (size_t)VAR_0->count & 127;
 FUNC_2(VAR_3, VAR_0->buf, VAR_5);
 FUNC_2(VAR_4, VAR_0->val, sizeof VAR_4);
 VAR_3[VAR_5 ++] = 0x80;
 if (VAR_5 > 112) {
  FUNC_3(VAR_3 + VAR_5, 0, 128 - VAR_5);
  FUNC_4(VAR_3, VAR_4);
  FUNC_3(VAR_3, 0, 112);
 } else {
  FUNC_3(VAR_3 + VAR_5, 0, 112 - VAR_5);
 }
 FUNC_0(VAR_3 + 112, VAR_0->count >> 61);
 FUNC_0(VAR_3 + 120, VAR_0->count << 3);
 FUNC_4(VAR_3, VAR_4);
 FUNC_1(VAR_1, VAR_4, VAR_2);
}
