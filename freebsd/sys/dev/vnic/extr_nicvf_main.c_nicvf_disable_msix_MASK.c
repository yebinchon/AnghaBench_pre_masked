
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicvf {scalar_t__ num_vec; scalar_t__ msix_enabled; int dev; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct nicvf *VAR_0)
{

 if (VAR_0->msix_enabled) {
  FUNC_0(VAR_0->dev);
  VAR_0->msix_enabled = 0;
  VAR_0->num_vec = 0;
 }
}
