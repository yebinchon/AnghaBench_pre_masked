
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sshkey {TYPE_1__* cert; } ;
struct ssh_krl {int dummy; } ;
struct TYPE_2__ {scalar_t__ serial; int signature_key; int key_id; } ;


 int FUNC_0 (struct ssh_krl*,int ,int ) ;
 int FUNC_1 (struct ssh_krl*,int ,scalar_t__) ;
 int FUNC_2 (struct ssh_krl*,struct sshkey const*) ;
 int FUNC_3 (struct sshkey const*) ;

int
FUNC_4(struct ssh_krl *VAR_0, const struct sshkey *VAR_1)
{
 if (!FUNC_3(VAR_1))
  return FUNC_2(VAR_0, VAR_1);

 if (VAR_1->cert->serial == 0) {
  return FUNC_0(VAR_0,
      VAR_1->cert->signature_key,
      VAR_1->cert->key_id);
 } else {
  return FUNC_1(VAR_0,
      VAR_1->cert->signature_key,
      VAR_1->cert->serial);
 }
}
