
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ algo; scalar_t__ opaque; scalar_t__ nonce; scalar_t__ qop; scalar_t__ realm; } ;
typedef TYPE_1__ http_auth_challenge_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(http_auth_challenge_t *VAR_0)
{
 if (VAR_0->realm)
  FUNC_0(VAR_0->realm);
 if (VAR_0->qop)
  FUNC_0(VAR_0->qop);
 if (VAR_0->nonce)
  FUNC_0(VAR_0->nonce);
 if (VAR_0->opaque)
  FUNC_0(VAR_0->opaque);
 if (VAR_0->algo)
  FUNC_0(VAR_0->algo);
 FUNC_1(VAR_0);
}
