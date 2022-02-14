
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int mii_media_active; int mii_ifp; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct mii_data* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_0)
{
 device_t VAR_1;
 struct mii_data *VAR_2;

 VAR_1 = FUNC_1(VAR_0);
 FUNC_0(VAR_1);

 VAR_2 = FUNC_2(VAR_0);
 FUNC_3(VAR_2->mii_ifp, FUNC_4(VAR_2->mii_media_active));
}
