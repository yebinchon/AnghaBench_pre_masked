
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edma_softc {int dummy; } ;
struct edma_channel {int enabled; int ih_user; int (* ih ) (int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct edma_softc*,int ) ;
 int FUNC_1 (struct edma_softc*,int ,int ) ;
 struct edma_channel* VAR_4 ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(void *VAR_5)
{
 struct edma_channel *VAR_6;
 struct edma_softc *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_7 = VAR_5;

 VAR_8 = FUNC_0(VAR_7, VAR_2);
 FUNC_1(VAR_7, VAR_1, VAR_0);

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  if (VAR_8 & (0x1 << VAR_9)) {
   VAR_6 = &VAR_4[VAR_9];
   if (VAR_6->enabled == 1) {
    if (VAR_6->ih != ((void*)0)) {
     VAR_6->ih(VAR_6->ih_user, VAR_9);
    }
   }
  }
 }
}
