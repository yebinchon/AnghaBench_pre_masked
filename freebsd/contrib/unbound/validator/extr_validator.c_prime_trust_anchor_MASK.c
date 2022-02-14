
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct val_qstate {int wait_prime_ta; int trust_anchor_name; int trust_anchor_labs; int trust_anchor_len; } ;
struct trust_anchor {int namelabs; int namelen; int name; int dclass; } ;
struct module_qstate {int region; TYPE_2__* env; } ;
struct TYPE_4__ {TYPE_1__* cfg; } ;
struct TYPE_3__ {scalar_t__ trust_anchor_signaling; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct module_qstate*,int,struct trust_anchor*) ;
 int FUNC_1 (struct module_qstate*,int,int ,int ,int ,int ,int ,struct module_qstate**,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(struct module_qstate* VAR_3, struct val_qstate* VAR_4,
 int VAR_5, struct trust_anchor* VAR_6)
{
 struct module_qstate* VAR_7 = ((void*)0);
 int VAR_8 = FUNC_1(VAR_3, VAR_5, VAR_6->name, VAR_6->namelen,
  VAR_1, VAR_6->dclass, VAR_0, &VAR_7, 0);

 if(VAR_7 && VAR_3->env->cfg->trust_anchor_signaling &&
  !FUNC_0(VAR_3, VAR_5, VAR_6)) {
  FUNC_4(VAR_2, "keytag signaling query failed");
  return 0;
 }

 if(!VAR_8) {
  FUNC_4(VAR_2, "Could not prime trust anchor");
  return 0;
 }


 VAR_4->wait_prime_ta = 1;


 VAR_4->trust_anchor_name = FUNC_3(VAR_3->region,
  VAR_6->name, VAR_6->namelen);
 VAR_4->trust_anchor_len = VAR_6->namelen;
 VAR_4->trust_anchor_labs = VAR_6->namelabs;
 if(!VAR_4->trust_anchor_name) {
  FUNC_2("Could not prime trust anchor: out of memory");
  return 0;
 }
 return 1;
}
