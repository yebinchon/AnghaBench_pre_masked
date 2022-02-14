
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_data {int mii_media_status; int mii_ifp; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct mii_data* FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_5)
{
 struct mii_data *VAR_6;
 device_t VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_5);
 FUNC_0(VAR_7);

 VAR_6 = FUNC_2(VAR_5);

 if (VAR_6->mii_media_status & VAR_1) {
  if (VAR_6->mii_media_status & VAR_0)
   VAR_8 = VAR_4;
  else
   VAR_8 = VAR_2;
 } else
  VAR_8 = VAR_3;
 FUNC_3(VAR_6->mii_ifp, VAR_8);
}
