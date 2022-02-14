
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exca_softc {int memalloc; } ;
struct TYPE_2__ {int memenable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct exca_softc*,int ,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(struct exca_softc *VAR_3, int VAR_4)
{
 if (VAR_4 < 0 || VAR_4 >= VAR_1)
  FUNC_1("exca_mem_unmap: window out of range");

 FUNC_0(VAR_3, VAR_0, VAR_2[VAR_4].memenable);
 VAR_3->memalloc &= ~(1 << VAR_4);
}
