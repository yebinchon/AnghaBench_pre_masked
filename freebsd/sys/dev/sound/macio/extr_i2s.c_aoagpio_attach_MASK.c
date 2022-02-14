
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct aoagpio_softc {int ctrl; } ;
typedef int device_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct resource* FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,struct resource*,int,int *,int ,int ,void**) ;
 struct aoagpio_softc* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int,int ,int ) ;
 int FUNC_5 (struct resource*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_10)
{
 struct aoagpio_softc *VAR_11;
 struct resource *VAR_12;
 void *VAR_13;
 int VAR_14, VAR_15 = 0;

 VAR_11 = FUNC_3(VAR_10);

 if ((1 << VAR_11->ctrl) & VAR_1) {
  VAR_12 = FUNC_1(VAR_10, VAR_8, &VAR_15, VAR_7);
  if (VAR_12 == ((void*)0))
   return (VAR_0);

  VAR_14 = FUNC_5(VAR_12);
  FUNC_0(("interrupting at irq %d\n", VAR_14));

  if (FUNC_4(VAR_14, VAR_5,
      VAR_4) != 0)
   return (VAR_0);

  FUNC_2(VAR_10, VAR_12, VAR_6 | VAR_3 |
      VAR_2, ((void*)0), VAR_9, VAR_10, &VAR_13);
 }

 return (0);
}
