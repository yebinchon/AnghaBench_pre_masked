
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssh {TYPE_1__* kex; } ;
struct TYPE_2__ {int (* verify_host_key ) (struct sshkey*,struct ssh*) ;} ;


 int VAR_0 ;

int
FUNC_0(struct ssh *VAR_1,
    int (*VAR_2)(struct sshkey *, struct ssh *))
{
 if (VAR_2 == ((void*)0) || VAR_1->kex == ((void*)0))
  return VAR_0;

 VAR_1->kex->verify_host_key = VAR_2;

 return 0;
}
