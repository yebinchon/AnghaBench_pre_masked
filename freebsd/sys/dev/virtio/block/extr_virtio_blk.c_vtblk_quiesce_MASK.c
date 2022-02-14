
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtblk_softc {int vtblk_vq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vtblk_softc*) ;
 int FUNC_1 (struct vtblk_softc*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,int ,int ,char*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct vtblk_softc *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_4);
 VAR_5 = 0;

 while (!FUNC_3(VAR_4->vtblk_vq)) {
  if (FUNC_2(&VAR_4->vtblk_vq, FUNC_1(VAR_4), VAR_2, "vtblkq",
      VAR_3) == VAR_1) {
   VAR_5 = VAR_0;
   break;
  }
 }

 return (VAR_5);
}
