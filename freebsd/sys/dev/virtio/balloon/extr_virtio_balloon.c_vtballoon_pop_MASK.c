
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtballoon_softc {int vtballoon_current_npages; int vtballoon_pages; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct vtballoon_softc*,int ) ;

__attribute__((used)) static void
FUNC_2(struct vtballoon_softc *VAR_0)
{

 while (!FUNC_0(&VAR_0->vtballoon_pages))
  FUNC_1(VAR_0, VAR_0->vtballoon_current_npages);
}
