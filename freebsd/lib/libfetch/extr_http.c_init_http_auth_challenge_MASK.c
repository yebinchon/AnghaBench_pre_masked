
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nc; scalar_t__ stale; int * algo; int opaque; int nonce; int qop; int realm; int scheme; } ;
typedef TYPE_1__ http_auth_challenge_t ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(http_auth_challenge_t *VAR_1)
{
 VAR_1->scheme = VAR_0;
 VAR_1->realm = VAR_1->qop = VAR_1->nonce = VAR_1->opaque = *(VAR_1->algo = ((void*)0));
 VAR_1->stale = VAR_1->nc = 0;
}
