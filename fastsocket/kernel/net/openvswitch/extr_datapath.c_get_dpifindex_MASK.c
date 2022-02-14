
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vport {int dummy; } ;
struct datapath {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct TYPE_3__ {int ifindex; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct vport*) ;
 struct vport* FUNC_1 (struct datapath*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct datapath *VAR_1)
{
 struct vport *VAR_2;
 int VAR_3;

 FUNC_2();

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2)
  VAR_3 = FUNC_0(VAR_2)->dev->ifindex;
 else
  VAR_3 = 0;

 FUNC_3();

 return VAR_3;
}
