
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsec_softc {int dev; } ;
struct resource {int dummy; } ;
typedef int driver_intr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct resource* FUNC_0 (int ,int ,int*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int,struct resource*) ;
 int FUNC_2 (int ,struct resource*,int,int *,int ,struct tsec_softc*,void**) ;
 int FUNC_3 (int ,char*,char const*) ;

__attribute__((used)) static int
FUNC_4(struct tsec_softc *VAR_5, struct resource **VAR_6, void **VAR_7,
    int *VAR_8, driver_intr_t VAR_9, const char *VAR_10)
{
 int VAR_11;

 *VAR_6 = FUNC_0(VAR_5->dev, VAR_4, VAR_8, VAR_3);
 if (*VAR_6 == ((void*)0)) {
  FUNC_3(VAR_5->dev, "could not allocate %s IRQ\n", VAR_10);
  return (VAR_0);
 }
 VAR_11 = FUNC_2(VAR_5->dev, *VAR_6, VAR_2 | VAR_1,
     ((void*)0), VAR_9, VAR_5, VAR_7);
 if (VAR_11) {
  FUNC_3(VAR_5->dev, "failed to set up %s IRQ\n", VAR_10);
  if (FUNC_1(VAR_5->dev, VAR_4, *VAR_8, *VAR_6))
   FUNC_3(VAR_5->dev, "could not release %s IRQ\n", VAR_10);
  *VAR_6 = ((void*)0);
  return (VAR_11);
 }
 return (0);
}
