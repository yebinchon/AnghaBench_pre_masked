
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int ichacha; int key; int (* ipoly ) (int ,unsigned char*,void*,size_t,unsigned char*,int,void*,int ,int) ;int iv; int seq; } ;
typedef TYPE_1__ br_sslrec_chapol_context ;


 int FUNC_0 (unsigned char*,size_t) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (int ,unsigned char*,void*,size_t,unsigned char*,int,void*,int ,int) ;

__attribute__((used)) static void
FUNC_4(br_sslrec_chapol_context *VAR_0,
 int VAR_1, unsigned VAR_2, void *VAR_3, size_t VAR_4,
 void *VAR_5, int VAR_6)
{
 unsigned char VAR_7[13];
 unsigned char VAR_8[12];
 uint64_t VAR_9;
 size_t VAR_10;

 VAR_9 = VAR_0->seq ++;
 FUNC_1(VAR_7, VAR_9);
 VAR_7[8] = (unsigned char)VAR_1;
 FUNC_0(VAR_7 + 9, VAR_2);
 FUNC_0(VAR_7 + 11, VAR_4);
 FUNC_2(VAR_8, VAR_0->iv, 12);
 for (VAR_10 = 0; VAR_10 < 8; VAR_10 ++) {
  VAR_8[11 - VAR_10] ^= (unsigned char)VAR_9;
  VAR_9 >>= 8;
 }
 VAR_0->ipoly(VAR_0->key, VAR_8, VAR_3, VAR_4, VAR_7, sizeof VAR_7,
  VAR_5, VAR_0->ichacha, VAR_6);
}
