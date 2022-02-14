
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int flags; int ip_ptr; } ;
struct TYPE_6__ {int * sysctl; } ;
struct in_device {TYPE_2__ cnf; int * arp_parms; struct net_device* dev; } ;
struct TYPE_5__ {int devconf_dflt; } ;
struct TYPE_7__ {TYPE_1__ ipv4; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_2__,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 TYPE_3__* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct in_device*) ;
 int FUNC_6 (struct in_device*) ;
 int FUNC_7 (struct in_device*) ;
 int FUNC_8 (struct in_device*) ;
 int FUNC_9 (struct in_device*) ;
 struct in_device* FUNC_10 (int,int ) ;
 int FUNC_11 (TYPE_2__*,int ,int) ;
 int * FUNC_12 (struct net_device*,int *) ;
 int FUNC_13 (int ,struct in_device*) ;

__attribute__((used)) static struct in_device *FUNC_14(struct net_device *VAR_4)
{
 struct in_device *VAR_5;

 FUNC_0();

 VAR_5 = FUNC_10(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  goto out;
 FUNC_11(&VAR_5->cnf, FUNC_4(VAR_4)->ipv4.devconf_dflt,
   sizeof(VAR_5->cnf));

 VAR_5->cnf.sysctl = ((void*)0);
 VAR_5->dev = VAR_4;
 if ((VAR_5->arp_parms = FUNC_12(VAR_4, &VAR_3)) == ((void*)0))
  goto out_kfree;
 if (FUNC_1(VAR_5->cnf, VAR_0))
  FUNC_2(VAR_4);

 FUNC_3(VAR_4);

 FUNC_6(VAR_5);

 FUNC_5(VAR_5);
 FUNC_7(VAR_5);
 if (VAR_4->flags & VAR_2)
  FUNC_8(VAR_5);


 FUNC_13(VAR_4->ip_ptr, VAR_5);
out:
 return VAR_5;
out_kfree:
 FUNC_9(VAR_5);
 VAR_5 = ((void*)0);
 goto out;
}
