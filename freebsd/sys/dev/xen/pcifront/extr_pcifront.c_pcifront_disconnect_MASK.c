
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcifront_device {TYPE_1__* xdev; } ;
typedef scalar_t__ XenbusState ;
struct TYPE_2__ {int nodename; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct pcifront_device *VAR_2)
{
 int VAR_3 = 0;
 XenbusState VAR_4;

 VAR_4 = FUNC_0(VAR_2->xdev->nodename);

 if (VAR_4 < VAR_0) {
  VAR_3 = FUNC_1(VAR_2->xdev, ((void*)0), VAR_0);
  if (!VAR_3 && VAR_4 == VAR_1) {

  }
 }

 return VAR_3;
}
