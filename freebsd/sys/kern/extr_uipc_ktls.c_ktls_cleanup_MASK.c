
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int auth_key_len; int cipher_key_len; int * iv; int * cipher_key; int * auth_key; int cipher_algorithm; } ;
struct ktls_session {int mode; TYPE_1__ params; int snd_tag; int (* free ) (struct ktls_session*) ;int * be; } ;




 int FUNC_0 (int ) ;
 int VAR_0 ;



 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ktls_session*) ;

__attribute__((used)) static void
FUNC_6(struct ktls_session *VAR_8)
{

 FUNC_1(VAR_3, -1);
 switch (VAR_8->mode) {
 case 129:
  FUNC_0(VAR_8->be != ((void*)0));
  switch (VAR_8->params.cipher_algorithm) {
  case 132:
   FUNC_1(VAR_4, -1);
   break;
  case 131:
   FUNC_1(VAR_5, -1);
   break;
  }
  VAR_8->free(VAR_8);
  break;
 case 130:
  switch (VAR_8->params.cipher_algorithm) {
  case 132:
   FUNC_1(VAR_1, -1);
   break;
  case 131:
   FUNC_1(VAR_2, -1);
   break;
  }
  FUNC_4(VAR_8->snd_tag);
  break;
 }
 if (VAR_8->params.auth_key != ((void*)0)) {
  FUNC_2(VAR_8->params.auth_key, VAR_8->params.auth_key_len);
  FUNC_3(VAR_8->params.auth_key, VAR_0);
  VAR_8->params.auth_key = ((void*)0);
  VAR_8->params.auth_key_len = 0;
 }
 if (VAR_8->params.cipher_key != ((void*)0)) {
  FUNC_2(VAR_8->params.cipher_key,
      VAR_8->params.cipher_key_len);
  FUNC_3(VAR_8->params.cipher_key, VAR_0);
  VAR_8->params.cipher_key = ((void*)0);
  VAR_8->params.cipher_key_len = 0;
 }
 FUNC_2(VAR_8->params.iv, sizeof(VAR_8->params.iv));
}
