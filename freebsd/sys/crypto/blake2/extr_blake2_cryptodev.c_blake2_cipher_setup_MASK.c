
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cryptoini {scalar_t__ cri_mlen; int cri_klen; int cri_key; } ;
struct blake2_session {int algo; int klen; scalar_t__ mlen; int key; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;


 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct blake2_session *VAR_4, struct cryptoini *VAR_5)
{
 int VAR_6;

 FUNC_0((size_t)VAR_2 <= (size_t)VAR_0);

 if (VAR_5->cri_mlen < 0)
  return (VAR_3);

 switch (VAR_4->algo) {
 case 128:
  if (VAR_5->cri_mlen != 0 &&
      VAR_5->cri_mlen > VAR_2)
   return (VAR_3);

 case 129:
  if (VAR_5->cri_mlen != 0 &&
      VAR_5->cri_mlen > VAR_0)
   return (VAR_3);

  if (VAR_5->cri_klen % 8 != 0)
   return (VAR_3);
  VAR_6 = VAR_5->cri_klen / 8;
  if (VAR_6 > sizeof(VAR_4->key) ||
      (VAR_4->algo == 128 && VAR_6 > VAR_1))
   return (VAR_3);
  VAR_4->klen = VAR_6;
  FUNC_1(VAR_4->key, VAR_5->cri_key, VAR_6);
  VAR_4->mlen = VAR_5->cri_mlen;
 }
 return (0);
}
