
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_softc {int device; int * reg; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct ntb_softc *VAR_0)
{

 if (VAR_0->reg != ((void*)0))
  FUNC_0(VAR_0->device);
}
