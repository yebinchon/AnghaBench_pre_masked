
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sfxge_softc {int enp; int media; } ;
typedef size_t efx_phy_media_type_t ;
typedef int efx_phy_cap_type_t ;
typedef size_t efx_link_mode_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,size_t*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int,int ,int *) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (int *,int) ;
 int** VAR_10 ;
 int FUNC_9 (size_t) ;
 int VAR_11 ;
 int VAR_12 ;

int FUNC_10(struct sfxge_softc *VAR_13)
{
 efx_phy_media_type_t VAR_14;
 uint32_t VAR_15, VAR_16;
 efx_link_mode_t VAR_17;
 efx_phy_cap_type_t VAR_18;
 int VAR_19, VAR_20 = 0;
 int VAR_21;






 if ((VAR_21 = FUNC_1(VAR_13->enp)) != 0)
  goto out1;
 if ((VAR_21 = FUNC_5(VAR_13->enp)) != 0)
  goto out2;





 FUNC_7(&VAR_13->media, VAR_9, VAR_11,
     VAR_12);
 FUNC_3(VAR_13->enp, &VAR_14);
 FUNC_2(VAR_13->enp, VAR_4, &VAR_15);

 for (VAR_17 = VAR_0; VAR_17 < VAR_1; VAR_17++) {
  VAR_18 = FUNC_9(VAR_17);
  if (VAR_18 == VAR_3)
   continue;

  VAR_16 = (1 << VAR_18);
  VAR_19 = VAR_10[VAR_14][VAR_17];

  if ((VAR_15 & VAR_16) && VAR_19) {

   FUNC_6(&VAR_13->media, VAR_19, 0, ((void*)0));
   VAR_20 = VAR_19;
  }
 }

 if (VAR_15 & (1 << VAR_2)) {

  VAR_19 = VAR_6 | VAR_5;
  FUNC_6(&VAR_13->media, VAR_19, 0, ((void*)0));
  VAR_20 = VAR_19;
 }

 if (VAR_20 != 0)
  FUNC_8(&VAR_13->media, VAR_20);


 FUNC_4(VAR_13->enp);
out2:
 FUNC_0(VAR_13->enp);
out1:
 return (VAR_21);
}
