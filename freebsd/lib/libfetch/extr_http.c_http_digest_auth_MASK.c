
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct url {int doc; } ;
struct TYPE_5__ {int user; int password; } ;
typedef TYPE_1__ http_auth_params_t ;
struct TYPE_6__ {char* opaque; int nc; int nonce; int realm; scalar_t__* qop; scalar_t__* algo; } ;
typedef TYPE_2__ http_auth_challenge_t ;
typedef int conn_t ;
typedef int HASHHEX ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (scalar_t__*,int ,int ,int ,int ,char*,int ) ;
 int FUNC_2 (int ,int ,char*,char*,scalar_t__*,char*,int ,char*,int ) ;
 scalar_t__ FUNC_3 (char**,char*,char*,scalar_t__*,char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,char*,char const*,int ,int ,int ,int ,int ,char*,...) ;
 int FUNC_7 (char*,char*,int,...) ;
 void* FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(conn_t *VAR_0, const char *VAR_1, http_auth_challenge_t *VAR_2,
   http_auth_params_t *VAR_3, struct url *VAR_4)
{
 int VAR_5;
 char VAR_6[10];
 char VAR_7[40];
 char *VAR_8 = ((void*)0);

 if (!VAR_2->realm || !VAR_2->nonce) {
  FUNC_0("realm/nonce not set in challenge\n");
  return(-1);
 }
 if (!VAR_2->algo)
  VAR_2->algo = FUNC_8("");

 if (FUNC_3(&VAR_8, "%s%s%s%s",
     *VAR_2->algo? ",algorithm=" : "", VAR_2->algo,
     VAR_2->opaque? ",opaque=" : "", VAR_2->opaque?VAR_2->opaque:"") < 0)
  return (-1);

 if (!VAR_2->qop) {
  VAR_2->qop = FUNC_8("");
  *VAR_6 = 0;
  *VAR_7 = 0;
 } else {
  VAR_2->nc++;
  FUNC_7(VAR_6, "%08x", VAR_2->nc);

  FUNC_7(VAR_7, "%x%lx", FUNC_5(), (unsigned long)FUNC_9(0));
 }

 HASHHEX VAR_9;
 FUNC_1(VAR_2->algo, VAR_3->user, VAR_2->realm,
        VAR_3->password, VAR_2->nonce, VAR_7, VAR_9);
 FUNC_0("HA1: [%s]\n", VAR_9);
 HASHHEX VAR_10;
 FUNC_2(VAR_9, VAR_2->nonce, VAR_6, VAR_7, VAR_2->qop,
      "GET", VAR_4->doc, "", VAR_10);

 if (VAR_2->qop[0]) {
  VAR_5 = FUNC_6(VAR_0, "%s: Digest username=\"%s\",realm=\"%s\","
        "nonce=\"%s\",uri=\"%s\",response=\"%s\","
        "qop=\"auth\", cnonce=\"%s\", nc=%s%s",
        VAR_1, VAR_3->user, VAR_2->realm,
        VAR_2->nonce, VAR_4->doc, VAR_10,
        VAR_7, VAR_6, VAR_8);
 } else {
  VAR_5 = FUNC_6(VAR_0, "%s: Digest username=\"%s\",realm=\"%s\","
        "nonce=\"%s\",uri=\"%s\",response=\"%s\"%s",
        VAR_1, VAR_3->user, VAR_2->realm,
        VAR_2->nonce, VAR_4->doc, VAR_10, VAR_8);
 }
 if (VAR_8)
  FUNC_4(VAR_8);
 return (VAR_5);
}
