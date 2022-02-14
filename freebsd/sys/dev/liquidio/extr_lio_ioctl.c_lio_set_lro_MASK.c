
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lio {int oct_dev; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct ifnet*) ;
 struct lio* FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*,int) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (struct ifnet*,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct ifnet *VAR_10)
{
 struct lio *VAR_11 = FUNC_2(VAR_10);
 int VAR_12 = 0;

 if (!(FUNC_0(VAR_10) & VAR_2)) {
  FUNC_4(VAR_11->oct_dev, "LRO capability not supported\n");
  return (VAR_1);
 }

 if ((!(FUNC_1(VAR_10) & VAR_2)) &&
     (FUNC_1(VAR_10) & VAR_3) &&
     (FUNC_1(VAR_10) & VAR_4)) {
  FUNC_3(VAR_10, VAR_2);

  if (VAR_9)
   VAR_12 = FUNC_5(VAR_10, VAR_6, VAR_7 |
           VAR_8);

 } else if (FUNC_1(VAR_10) & VAR_2) {
  FUNC_3(VAR_10, VAR_2);

  if (VAR_9)
   VAR_12 = FUNC_5(VAR_10, VAR_5, VAR_7 |
           VAR_8);
 } else
  FUNC_4(VAR_11->oct_dev, "LRO requires RXCSUM");

 return ((VAR_12) ? VAR_0 : 0);
}
