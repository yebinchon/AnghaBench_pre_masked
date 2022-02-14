
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtballoon_softc {int vtballoon_dev; int vtballoon_deflate_vq; int vtballoon_inflate_vq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct vtballoon_softc *VAR_0)
{

 FUNC_1(VAR_0->vtballoon_inflate_vq);
 FUNC_1(VAR_0->vtballoon_deflate_vq);

 FUNC_0(VAR_0->vtballoon_dev);
}
