
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlp_sec_command {int * hashdest; int * iv; int * paramp; int * ctrlp; } ;
struct nlm_crypto_pkt_param {int dummy; } ;
struct nlm_crypto_pkt_ctrl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct xlp_sec_command *VAR_8, unsigned int VAR_9)
{
 int VAR_10 = 0;

 if(VAR_8 == ((void*)0)) {
  VAR_10 = VAR_1;
  goto error;
 }
 if ((VAR_8->ctrlp = FUNC_0(sizeof(struct nlm_crypto_pkt_ctrl), VAR_4,
     VAR_5 | VAR_6)) == ((void*)0)) {
  VAR_10 = VAR_2;
  goto error;
 }
 if (((uintptr_t)VAR_8->ctrlp & (VAR_7 - 1))) {
  VAR_10 = VAR_1;
  goto error;
 }

 if ((VAR_8->paramp = FUNC_0(sizeof(struct nlm_crypto_pkt_param) +
     (16 * (VAR_9 - 1)), VAR_4, VAR_5 | VAR_6)) == ((void*)0)) {
  VAR_10 = VAR_2;
  goto error;
 }
 if (((uintptr_t)VAR_8->paramp & (VAR_7 - 1))) {
  VAR_10 = VAR_1;
  goto error;
 }
 if ((VAR_8->iv = FUNC_0(VAR_0, VAR_4,
     VAR_5 | VAR_6)) == ((void*)0)) {
  VAR_10 = VAR_2;
  goto error;
 }
 if ((VAR_8->hashdest = FUNC_0(VAR_3, VAR_4,
     VAR_5 | VAR_6)) == ((void*)0)) {
  VAR_10 = VAR_2;
  goto error;
 }
error:
 return (VAR_10);
}
