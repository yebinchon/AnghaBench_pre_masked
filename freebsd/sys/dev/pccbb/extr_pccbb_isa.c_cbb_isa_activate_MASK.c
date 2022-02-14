
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct cbb_softc {struct resource* base_res; int bsh; int bst; struct resource* irq_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct resource* FUNC_0 (int ,int ,int*,int,int,int,int ) ;
 struct resource* FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,int ,int ,struct resource*) ;
 struct cbb_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_5 ;
 int FUNC_5 (struct resource*) ;
 int FUNC_6 (struct resource*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_6)
{
 struct cbb_softc *VAR_7 = FUNC_3(VAR_6);
 struct resource *VAR_8;
 int VAR_9;
 int VAR_10;


 VAR_9 = 0;
 VAR_8 = FUNC_1(VAR_6, VAR_4, &VAR_9, VAR_2);
 if (VAR_8 == ((void*)0)) {





  for (VAR_10 = 0; VAR_10 < 16 && VAR_8 == ((void*)0); VAR_10++) {
   if (((1 << VAR_10) & VAR_5) == 0)
    continue;
   VAR_8 = FUNC_0(VAR_6, VAR_4, &VAR_9, VAR_10, VAR_10,
       1, VAR_2);
  }
 }
 if (VAR_8 == ((void*)0))
  return (VAR_1);
 VAR_7->irq_res = VAR_8;
 VAR_9 = 0;
 VAR_8 = FUNC_1(VAR_6, VAR_3, &VAR_9, VAR_2);
 if (VAR_8 == ((void*)0)) {
  FUNC_2(VAR_6, VAR_4, 0, VAR_7->irq_res);
  VAR_7->irq_res = ((void*)0);
  FUNC_4(VAR_6, "Cannot allocate I/O\n");
  return (VAR_0);
 }
 VAR_7->bst = FUNC_6(VAR_8);
 VAR_7->bsh = FUNC_5(VAR_8);
 VAR_7->base_res = VAR_8;
 return (0);
}
