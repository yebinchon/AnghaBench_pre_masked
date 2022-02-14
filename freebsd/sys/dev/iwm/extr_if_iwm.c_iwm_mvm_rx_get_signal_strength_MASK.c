
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iwm_softc {int dummy; } ;
struct iwm_rx_phy_info {int * non_cfg_phy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwm_softc*,int ,char*,int,int,int,int) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct iwm_softc *VAR_8,
    struct iwm_rx_phy_info *VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13;
 uint32_t VAR_14;

 VAR_14 = FUNC_2(VAR_9->non_cfg_phy[VAR_1]);
 VAR_10 = (VAR_14 & VAR_2) >>
     VAR_3;
 VAR_10 = VAR_10 ? -VAR_10 : -256;
 VAR_11 = (VAR_14 & VAR_4) >>
     VAR_5;
 VAR_11 = VAR_11 ? -VAR_11 : -256;
 VAR_12 = (VAR_14 & VAR_6) >>
     VAR_7;
 VAR_12 = VAR_12 ? -VAR_12 : -256;
 VAR_13 = FUNC_1(VAR_10, VAR_11);
 VAR_13 = FUNC_1(VAR_13, VAR_12);

 FUNC_0(VAR_8, VAR_0,
     "energy In A %d B %d C %d , and max %d\n",
     VAR_10, VAR_11, VAR_12, VAR_13);

 return VAR_13;
}
