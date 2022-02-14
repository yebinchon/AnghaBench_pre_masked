
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct miibus_ivars {int ifp; int ifmedia_sts; int ifmedia_upd; } ;
struct mii_data {int mii_phys; int mii_ifp; int mii_media; } ;
struct mii_attach_args {struct mii_data* mii_data; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int **,int*) ;
 void* FUNC_3 (int ) ;
 struct mii_data* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int *,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_4)
{
 struct miibus_ivars *VAR_5;
 struct mii_attach_args *VAR_6;
 struct mii_data *VAR_7;
 device_t *VAR_8;
 int VAR_9, VAR_10;

 VAR_7 = FUNC_4(VAR_4);
 if (FUNC_2(VAR_4, &VAR_8, &VAR_10) == 0) {
  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
   VAR_6 = FUNC_3(VAR_8[VAR_9]);
   VAR_6->mii_data = VAR_7;
  }
  FUNC_6(VAR_8, VAR_3);
 }
 if (VAR_10 == 0) {
  FUNC_5(VAR_4, "cannot get children\n");
  return (VAR_0);
 }
 VAR_5 = FUNC_3(VAR_4);
 FUNC_9(&VAR_7->mii_media, VAR_2, VAR_5->ifmedia_upd,
     VAR_5->ifmedia_sts);
 VAR_7->mii_ifp = VAR_5->ifp;
 FUNC_7(VAR_7->mii_ifp, VAR_1, 0);
 FUNC_8(VAR_7->mii_ifp, VAR_1, 0);
 FUNC_0(&VAR_7->mii_phys);

 return (FUNC_1(VAR_4));
}
