
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpu_kern_ctx {int dummy; } ;
struct cryptoini {int cri_klen; int cri_key; int cri_mlen; } ;
struct aesni_session {int auth_algo; int mlen; } ;


 int FUNC_0 (int,struct fpu_kern_ctx*) ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,struct fpu_kern_ctx*) ;
 int FUNC_2 (struct aesni_session*,int ,int ) ;
 int FUNC_3 (struct aesni_session*,int ,int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,struct fpu_kern_ctx*,int) ;
 int FUNC_5 (int ,struct fpu_kern_ctx*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct aesni_session *VAR_3, struct cryptoini *VAR_4,
    struct cryptoini *VAR_5)
{
 struct fpu_kern_ctx *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 switch (VAR_3->auth_algo) {
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_9 = FUNC_2(VAR_3, VAR_5->cri_klen,
      VAR_5->cri_key);
  if (VAR_9 != 0)
   return (VAR_9);
  VAR_3->mlen = VAR_5->cri_mlen;
 }

 VAR_7 = FUNC_6(0) || (VAR_4 == ((void*)0));
 if (!VAR_7) {
  FUNC_0(VAR_8, VAR_6);
  FUNC_4(VAR_2, VAR_6,
      VAR_1 | VAR_0);
 }

 VAR_9 = 0;
 if (VAR_4 != ((void*)0))
  VAR_9 = FUNC_3(VAR_3, VAR_4->cri_key,
      VAR_4->cri_klen);

 if (!VAR_7) {
  FUNC_5(VAR_2, VAR_6);
  FUNC_1(VAR_8, VAR_6);
 }
 return (VAR_9);
}
