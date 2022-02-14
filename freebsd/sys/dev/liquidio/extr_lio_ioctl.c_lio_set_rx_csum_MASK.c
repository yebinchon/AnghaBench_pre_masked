
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
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
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct ifnet*) ;
 struct lio* FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct ifnet*,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct ifnet *VAR_8, uint32_t VAR_9)
{
 struct lio *VAR_10 = FUNC_2(VAR_8);
 int VAR_11 = 0;

 if (FUNC_0(VAR_8) & (VAR_3 | VAR_4)) {
  FUNC_3(VAR_8, (VAR_3 | VAR_4));

  if (VAR_9) {

   if ((FUNC_0(VAR_8) & VAR_2) &&
       (FUNC_1(VAR_8) & VAR_2)) {
    VAR_11 = FUNC_5(VAR_8, VAR_5,
            VAR_6 |
            VAR_7);
    FUNC_3(VAR_8, VAR_2);
   }
  }
 } else {
  FUNC_4(VAR_10->oct_dev, "Rx checksum offload capability not supported\n");
  return (VAR_1);
 }

 return ((VAR_11) ? VAR_0 : 0);
}
