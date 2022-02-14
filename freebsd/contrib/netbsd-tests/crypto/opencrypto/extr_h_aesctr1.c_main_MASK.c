
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct session_op {size_t len; unsigned char* dst; int dst_len; void* iv; void* src; int op; int ses; void* key; int keylen; int cipher; } ;
struct crypt_op {size_t len; unsigned char* dst; int dst_len; void* iv; void* src; int op; int ses; void* key; int keylen; int cipher; } ;
typedef int cs ;
typedef int co ;
typedef int buf ;
struct TYPE_3__ {size_t len; int * ciphertx; int iv; int plaintx; int key; int key_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int *) ;
 size_t FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,size_t) ;
 int FUNC_4 (int,int ,struct session_op*) ;
 scalar_t__ FUNC_5 (unsigned char*,int *,size_t) ;
 int FUNC_6 (struct session_op*,int ,int) ;
 int FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (char*,...) ;
 TYPE_1__* VAR_5 ;
 int FUNC_9 (char*,size_t) ;

int
FUNC_10(void)
{
 int VAR_6, VAR_7;
 size_t VAR_8;
 struct session_op VAR_9;
 struct crypt_op VAR_10;
 unsigned char VAR_11[36];

 for (VAR_8 = 0; VAR_8 < FUNC_1(VAR_5); VAR_8++) {
  VAR_6 = FUNC_7("/dev/crypto", VAR_4, 0);
  if (VAR_6 < 0)
   FUNC_3(1, "open %zu", VAR_8);
  FUNC_6(&VAR_9, 0, sizeof(VAR_9));
  VAR_9.cipher = VAR_3;
  VAR_9.keylen = VAR_5[VAR_8].key_len;
  VAR_9.key = FUNC_0(&VAR_5[VAR_8].key);
  VAR_7 = FUNC_4(VAR_6, VAR_1, &VAR_9);
  if (VAR_7 < 0)
   FUNC_3(1, "CIOCGSESSION %zu", VAR_8);

  FUNC_6(&VAR_10, 0, sizeof(VAR_10));
  VAR_10.ses = VAR_9.ses;
  VAR_10.op = VAR_2;
  VAR_10.len = VAR_5[VAR_8].len;
  VAR_10.src = FUNC_0(&VAR_5[VAR_8].plaintx);
  VAR_10.dst = VAR_11;
  VAR_10.dst_len = sizeof(VAR_11);
  VAR_10.iv = FUNC_0(&VAR_5[VAR_8].iv);
  VAR_7 = FUNC_4(VAR_6, VAR_0, &VAR_10);
  if (VAR_7 < 0)
   FUNC_3(1, "CIOCCRYPT %zu", VAR_8);

  if (FUNC_5(VAR_10.dst, VAR_5[VAR_8].ciphertx, VAR_5[VAR_8].len)) {
   size_t VAR_12;
   FUNC_8(" Loc  Actual  Golden\n");
   for (VAR_12 = 0; VAR_12 < VAR_5[VAR_8].len; VAR_12++)
    FUNC_8("0x%2zu:  0x%2x    0x%2x\n", VAR_12,
     VAR_11[VAR_12], VAR_5[VAR_8].ciphertx[VAR_12]);
   FUNC_9("verification failed %zu", VAR_8);
  }
  FUNC_2(VAR_6);
 }
 return 0;
}
