
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int device_t ;
struct TYPE_3__ {int phy_id; int ifp; int (* mdio_write ) (int ,int,int,int) ;} ;
typedef TYPE_1__ cvm_oct_private_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int,int,int) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 cvm_oct_private_t *VAR_4;

 VAR_4 = FUNC_2(VAR_0);




 if (VAR_4->mdio_write != ((void*)0)) {
  VAR_4->mdio_write(VAR_4->ifp, VAR_1, VAR_2, VAR_3);
  return (0);
 }




 FUNC_0(VAR_1 == VAR_4->phy_id,
     ("write to phy %u but our phy is %u", VAR_1, VAR_4->phy_id));
 FUNC_1(VAR_4->ifp, VAR_1, VAR_2, VAR_3);

 return (0);
}
