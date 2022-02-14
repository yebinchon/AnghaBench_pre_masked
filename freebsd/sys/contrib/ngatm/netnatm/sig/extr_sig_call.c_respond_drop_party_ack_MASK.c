
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct uni_ie_epref {int flag; int epref; } ;
struct TYPE_3__ {int cause; int epref; } ;
struct TYPE_4__ {TYPE_1__ drop_party_ack; } ;
struct uni_all {TYPE_2__ u; } ;
struct call {int uni; int mine; int cref; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct uni_all*,int ,int ,int) ;
 struct uni_all* FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct uni_all*) ;
 int FUNC_5 (struct uni_all*,int ) ;

__attribute__((used)) static void
FUNC_6(struct call *VAR_2, struct uni_ie_epref *VAR_3,
    u_int VAR_4)
{
 struct uni_all *VAR_5;

 if ((VAR_5 = FUNC_3()) == ((void*)0))
  return;

 FUNC_2(VAR_5, VAR_1, VAR_2->cref, !VAR_2->mine);
 FUNC_1(VAR_5->u.drop_party_ack.epref, VAR_3->epref, !VAR_3->flag);
 FUNC_0(VAR_5->u.drop_party_ack.cause, VAR_0, VAR_4);
 (void)FUNC_5(VAR_5, VAR_2->uni);
 FUNC_4(VAR_5);
}
