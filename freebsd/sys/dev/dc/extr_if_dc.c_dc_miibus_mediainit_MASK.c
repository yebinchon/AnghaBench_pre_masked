
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmedia {int dummy; } ;
struct mii_data {struct ifmedia mii_media; } ;
struct dc_softc {int dc_miibus; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (struct dc_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ifmedia*,int,int ,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_3)
{
 struct dc_softc *VAR_4;
 struct mii_data *VAR_5;
 struct ifmedia *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_3);

 VAR_4 = FUNC_1(VAR_3);
 VAR_5 = FUNC_1(VAR_4->dc_miibus);
 VAR_6 = &VAR_5->mii_media;

 if (FUNC_0(VAR_4) && VAR_7 >= VAR_0)
  FUNC_2(VAR_6, VAR_1 | VAR_2, 0, ((void*)0));
}
