
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct exca_softc {int ioalloc; TYPE_1__* io; } ;
struct TYPE_4__ {int ioenable; } ;
struct TYPE_3__ {scalar_t__ width; scalar_t__ flags; scalar_t__ size; scalar_t__ addr; scalar_t__ ioh; scalar_t__ iot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct exca_softc*,int ,int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(struct exca_softc *VAR_3, int VAR_4)
{
 if (VAR_4 >= VAR_1)
  FUNC_1("exca_io_unmap: window out of range");

 FUNC_0(VAR_3, VAR_0, VAR_2[VAR_4].ioenable);

 VAR_3->ioalloc &= ~(1 << VAR_4);

 VAR_3->io[VAR_4].iot = 0;
 VAR_3->io[VAR_4].ioh = 0;
 VAR_3->io[VAR_4].addr = 0;
 VAR_3->io[VAR_4].size = 0;
 VAR_3->io[VAR_4].flags = 0;
 VAR_3->io[VAR_4].width = 0;
}
