
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int * mii_ifp; int mii_media; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 struct mii_data* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
 struct mii_data *VAR_1;

 FUNC_0(VAR_0);
 VAR_1 = FUNC_1(VAR_0);
 FUNC_2(&VAR_1->mii_media);
 VAR_1->mii_ifp = ((void*)0);

 return (0);
}
