
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_pd {int device; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int pdn; } ;


 int FUNC_0 (struct ib_pd*) ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct ib_pd*) ;

__attribute__((used)) static int FUNC_4(struct ib_pd *VAR_0)
{
 FUNC_1(FUNC_2(VAR_0->device)->dev, FUNC_3(VAR_0)->pdn);
 FUNC_0(VAR_0);

 return 0;
}
