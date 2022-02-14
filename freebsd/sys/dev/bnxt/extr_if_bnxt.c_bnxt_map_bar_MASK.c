
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bnxt_softc {int dev; } ;
struct bnxt_bar_info {int * res; int size; int handle; int tag; int rid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct bnxt_softc *VAR_5, struct bnxt_bar_info *VAR_6, int VAR_7, bool VAR_8)
{
 uint32_t VAR_9;

 if (VAR_6->res != ((void*)0)) {
  FUNC_2(VAR_5->dev, "Bar %d already mapped\n", VAR_7);
  return VAR_0;
 }

 VAR_6->rid = FUNC_0(VAR_7);
 VAR_9 = VAR_2;
 if (VAR_8)
  VAR_9 |= VAR_3;

 if ((VAR_6->res =
  FUNC_1(VAR_5->dev,
      VAR_4,
      &VAR_6->rid,
      VAR_9)) == ((void*)0)) {
  FUNC_2(VAR_5->dev,
      "PCI BAR%d mapping failure\n", VAR_7);
  return (VAR_1);
 }
 VAR_6->tag = FUNC_4(VAR_6->res);
 VAR_6->handle = FUNC_3(VAR_6->res);
 VAR_6->size = FUNC_5(VAR_6->res);

 return 0;
}
