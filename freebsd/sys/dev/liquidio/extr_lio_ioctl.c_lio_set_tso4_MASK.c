
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lio {int oct_dev; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct ifnet*) ;
 struct lio* FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*,int ,int ) ;
 int FUNC_4 (struct ifnet*,int) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(struct ifnet *VAR_3)
{
 struct lio *VAR_4 = FUNC_2(VAR_3);

 if (FUNC_0(VAR_3) & VAR_2) {
  FUNC_4(VAR_3, VAR_2);
  if (FUNC_1(VAR_3) & VAR_2)
   FUNC_3(VAR_3, VAR_0, 0);
  else
   FUNC_3(VAR_3, 0, VAR_0);
 } else {
  FUNC_5(VAR_4->oct_dev, "TSO4 capability not supported\n");
  return (VAR_1);
 }

 return (0);
}
