
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_3__ {int (* mdio_read ) (int ,int,int) ;int phy_id; int ifp; } ;
typedef TYPE_1__ cvm_oct_private_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int,int) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, int VAR_1, int VAR_2)
{
 cvm_oct_private_t *VAR_3;

 VAR_3 = FUNC_2(VAR_0);




 if (VAR_3->mdio_read != ((void*)0))
  return (VAR_3->mdio_read(VAR_3->ifp, VAR_1, VAR_2));




 FUNC_0(VAR_1 == VAR_3->phy_id,
     ("read from phy %u but our phy is %u", VAR_1, VAR_3->phy_id));
 return (FUNC_1(VAR_3->ifp, VAR_1, VAR_2));
}
