
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtblk_softc {int vtblk_dump_queue; int vtblk_vq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct vtblk_softc*,int *) ;

__attribute__((used)) static void
FUNC_2(struct vtblk_softc *VAR_0)
{






 while (!FUNC_0(VAR_0->vtblk_vq))
  FUNC_1(VAR_0, &VAR_0->vtblk_dump_queue);
}
