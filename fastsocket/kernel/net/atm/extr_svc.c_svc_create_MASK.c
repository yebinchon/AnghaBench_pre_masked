
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {int * ops; } ;
struct net {int dummy; } ;
struct TYPE_5__ {void* sas_family; } ;
struct TYPE_4__ {void* sas_family; } ;
struct TYPE_6__ {TYPE_2__ remote; TYPE_1__ local; } ;


 void* VAR_0 ;
 TYPE_3__* FUNC_0 (struct socket*) ;
 int VAR_1 ;
 struct net VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct net*,struct socket*,int,void*) ;

__attribute__((used)) static int FUNC_2(struct net *VAR_4, struct socket *VAR_5, int VAR_6,
        int VAR_7)
{
 int VAR_8;

 if (VAR_4 != &VAR_2)
  return -VAR_1;

 VAR_5->ops = &VAR_3;
 VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_0);
 if (VAR_8) return VAR_8;
 FUNC_0(VAR_5)->local.sas_family = VAR_0;
 FUNC_0(VAR_5)->remote.sas_family = VAR_0;
 return 0;
}
