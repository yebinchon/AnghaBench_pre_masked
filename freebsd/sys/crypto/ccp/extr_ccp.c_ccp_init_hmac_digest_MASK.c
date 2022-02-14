
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union authctx {int dummy; } authctx ;
typedef size_t u_int ;
struct TYPE_2__ {char* ipad; char* opad; struct auth_hash* auth_hash; } ;
struct ccp_session {TYPE_1__ hmac; } ;
struct auth_hash {int blocksize; int hashsize; int (* Final ) (char*,union authctx*) ;int (* Update ) (union authctx*,char*,int) ;int (* Init ) (union authctx*) ;} ;
typedef int auth_ctx ;


 char VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (union authctx*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (union authctx*) ;
 int FUNC_4 (union authctx*,char*,int) ;
 int FUNC_5 (char*,union authctx*) ;

__attribute__((used)) static void
FUNC_6(struct ccp_session *VAR_2, int VAR_3, char *VAR_4,
    int VAR_5)
{
 union authctx VAR_6;
 struct auth_hash *VAR_7;
 u_int VAR_8;





 VAR_7 = VAR_2->hmac.auth_hash;
 VAR_5 /= 8;
 if (VAR_5 > VAR_7->blocksize) {
  VAR_7->Init(&VAR_6);
  VAR_7->Update(&VAR_6, VAR_4, VAR_5);
  VAR_7->Final(VAR_2->hmac.ipad, &VAR_6);
  FUNC_0(&VAR_6, sizeof(VAR_6));
  VAR_5 = VAR_7->hashsize;
 } else
  FUNC_1(VAR_2->hmac.ipad, VAR_4, VAR_5);

 FUNC_2(VAR_2->hmac.ipad + VAR_5, 0, VAR_7->blocksize - VAR_5);
 FUNC_1(VAR_2->hmac.opad, VAR_2->hmac.ipad, VAR_7->blocksize);

 for (VAR_8 = 0; VAR_8 < VAR_7->blocksize; VAR_8++) {
  VAR_2->hmac.ipad[VAR_8] ^= VAR_0;
  VAR_2->hmac.opad[VAR_8] ^= VAR_1;
 }
}
