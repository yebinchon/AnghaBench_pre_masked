
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct qlnxr_dev {TYPE_1__ ibdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct qlnxr_dev *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); ++VAR_2)
  FUNC_1(&VAR_1->ibdev.dev, VAR_0[VAR_2]);
}
