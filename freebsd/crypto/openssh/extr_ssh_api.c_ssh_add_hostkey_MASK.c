
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sshkey {int dummy; } ;
struct ssh {int public_keys; int private_keys; TYPE_1__* kex; } ;
struct key_entry {struct sshkey* key; } ;
struct TYPE_2__ {scalar_t__ server; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct key_entry*,int ) ;
 int FUNC_1 (struct key_entry*) ;
 struct key_entry* FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (struct sshkey*) ;
 int FUNC_4 (struct sshkey*,struct sshkey**) ;

int
FUNC_5(struct ssh *VAR_2, struct sshkey *VAR_3)
{
 struct sshkey *VAR_4 = ((void*)0);
 struct key_entry *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 int VAR_7;

 if (VAR_2->kex->server) {
  if ((VAR_7 = FUNC_4(VAR_3, &VAR_4)) != 0)
   return VAR_7;
  if ((VAR_5 = FUNC_2(sizeof(*VAR_5))) == ((void*)0) ||
      (VAR_6 = FUNC_2(sizeof(*VAR_6))) == ((void*)0)) {
   FUNC_1(VAR_5);
   FUNC_3(VAR_4);
   return VAR_0;
  }
  VAR_6->key = VAR_3;
  FUNC_0(&VAR_2->private_keys, VAR_6, VAR_1);


  VAR_5->key = VAR_4;
  FUNC_0(&VAR_2->public_keys, VAR_5, VAR_1);
  VAR_7 = 0;
 } else {
  if ((VAR_5 = FUNC_2(sizeof(*VAR_5))) == ((void*)0))
   return VAR_0;
  VAR_5->key = VAR_3;
  FUNC_0(&VAR_2->public_keys, VAR_5, VAR_1);
  VAR_7 = 0;
 }

 return VAR_7;
}
