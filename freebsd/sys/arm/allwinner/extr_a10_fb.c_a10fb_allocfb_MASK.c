
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct a10fb_softc {scalar_t__ vaddr; int paddr; int dev; int fbsize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ,int,int ,int ,int ,int ,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct a10fb_softc *VAR_5)
{
 VAR_5->vaddr = FUNC_1(VAR_5->fbsize, VAR_2 | VAR_3, 0, ~0,
     VAR_1, 0, VAR_4);
 if (VAR_5->vaddr == 0) {
  FUNC_0(VAR_5->dev, "failed to allocate FB memory\n");
  return (VAR_0);
 }
 VAR_5->paddr = FUNC_2(VAR_5->vaddr);

 return (0);
}
