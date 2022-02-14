
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union authctx {int dummy; } authctx ;
struct TYPE_2__ {int pads; struct auth_hash* auth_hash; } ;
struct ccr_session {TYPE_1__ hmac; } ;
struct auth_hash {int (* Init ) (union authctx*) ;} ;


 int FUNC_0 (union authctx*) ;
 int FUNC_1 (int,union authctx*,int ) ;

__attribute__((used)) static void
FUNC_2(struct ccr_session *VAR_0, int VAR_1)
{
 union authctx VAR_2;
 struct auth_hash *VAR_3;

 VAR_3 = VAR_0->hmac.auth_hash;
 VAR_3->Init(&VAR_2);
 FUNC_1(VAR_1, &VAR_2, VAR_0->hmac.pads);
}
