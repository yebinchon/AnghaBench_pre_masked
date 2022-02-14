
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct opaque_auth {scalar_t__ oa_flavor; int oa_length; int oa_base; } ;
struct TYPE_11__ {int * oa_base; int oa_length; } ;
struct audata {TYPE_5__ au_origcred; TYPE_5__ au_shcred; } ;
typedef int bool_t ;
struct TYPE_9__ {int x_op; } ;
typedef TYPE_1__ XDR ;
struct TYPE_10__ {TYPE_5__ ah_cred; } ;
typedef TYPE_2__ AUTH ;


 struct audata* FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_5__*) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static bool_t
FUNC_6(AUTH *VAR_4, struct opaque_auth *VAR_5)
{
 struct audata *VAR_6;
 XDR VAR_7;

 FUNC_1(VAR_4 != ((void*)0));
 FUNC_1(VAR_5 != ((void*)0));

 if (VAR_5->oa_flavor == VAR_0) {
  VAR_6 = FUNC_0(VAR_4);
  FUNC_5(&VAR_7, VAR_5->oa_base, VAR_5->oa_length,
      VAR_2);

  if (VAR_6->au_shcred.oa_base != ((void*)0)) {
   FUNC_3(VAR_6->au_shcred.oa_base,
       VAR_6->au_shcred.oa_length);
   VAR_6->au_shcred.oa_base = ((void*)0);
  }
  if (FUNC_4(&VAR_7, &VAR_6->au_shcred)) {
   VAR_4->ah_cred = VAR_6->au_shcred;
  } else {
   VAR_7.x_op = VAR_3;
   (void)FUNC_4(&VAR_7, &VAR_6->au_shcred);
   VAR_6->au_shcred.oa_base = ((void*)0);
   VAR_4->ah_cred = VAR_6->au_origcred;
  }
  FUNC_2(VAR_4);
 }
 return (VAR_1);
}
