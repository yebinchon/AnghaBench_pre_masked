
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmpstr ;
struct mpr_softc {int mpr_debug; int disable_msix; int disable_msi; int max_msix; int max_chains; int max_io_pages; int enable_ssu; int spinup_wait_time; int use_phynum; int max_reqframes; int max_prireqframes; int max_replyframes; int max_evtframes; char* exclude_ids; int mpr_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,int*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mpr_softc*,char*) ;
 int FUNC_5 (char*,int,char*,int) ;

void
FUNC_6(struct mpr_softc *VAR_11)
{
 char VAR_12[80], VAR_13[80];


 VAR_11->mpr_debug = VAR_4 | VAR_3;
 VAR_11->disable_msix = 0;
 VAR_11->disable_msi = 0;
 VAR_11->max_msix = VAR_6;
 VAR_11->max_chains = VAR_1;
 VAR_11->max_io_pages = VAR_5;
 VAR_11->enable_ssu = VAR_10;
 VAR_11->spinup_wait_time = VAR_0;
 VAR_11->use_phynum = 1;
 VAR_11->max_reqframes = VAR_9;
 VAR_11->max_prireqframes = VAR_7;
 VAR_11->max_replyframes = VAR_8;
 VAR_11->max_evtframes = VAR_2;




 FUNC_2(VAR_13, 80);
 if (FUNC_1("hw.mpr.debug_level", VAR_13, 80) != 0)
  FUNC_4(VAR_11, VAR_13);
 FUNC_0("hw.mpr.disable_msix", &VAR_11->disable_msix);
 FUNC_0("hw.mpr.disable_msi", &VAR_11->disable_msi);
 FUNC_0("hw.mpr.max_msix", &VAR_11->max_msix);
 FUNC_0("hw.mpr.max_chains", &VAR_11->max_chains);
 FUNC_0("hw.mpr.max_io_pages", &VAR_11->max_io_pages);
 FUNC_0("hw.mpr.enable_ssu", &VAR_11->enable_ssu);
 FUNC_0("hw.mpr.spinup_wait_time", &VAR_11->spinup_wait_time);
 FUNC_0("hw.mpr.use_phy_num", &VAR_11->use_phynum);
 FUNC_0("hw.mpr.max_reqframes", &VAR_11->max_reqframes);
 FUNC_0("hw.mpr.max_prireqframes", &VAR_11->max_prireqframes);
 FUNC_0("hw.mpr.max_replyframes", &VAR_11->max_replyframes);
 FUNC_0("hw.mpr.max_evtframes", &VAR_11->max_evtframes);


 FUNC_5(VAR_12, sizeof(VAR_12), "dev.mpr.%d.debug_level",
     FUNC_3(VAR_11->mpr_dev));
 FUNC_2(VAR_13, 80);
 if (FUNC_1(VAR_12, VAR_13, 80) != 0)
  FUNC_4(VAR_11, VAR_13);

 FUNC_5(VAR_12, sizeof(VAR_12), "dev.mpr.%d.disable_msix",
     FUNC_3(VAR_11->mpr_dev));
 FUNC_0(VAR_12, &VAR_11->disable_msix);

 FUNC_5(VAR_12, sizeof(VAR_12), "dev.mpr.%d.disable_msi",
     FUNC_3(VAR_11->mpr_dev));
 FUNC_0(VAR_12, &VAR_11->disable_msi);

 FUNC_5(VAR_12, sizeof(VAR_12), "dev.mpr.%d.max_msix",
     FUNC_3(VAR_11->mpr_dev));
 FUNC_0(VAR_12, &VAR_11->max_msix);

 FUNC_5(VAR_12, sizeof(VAR_12), "dev.mpr.%d.max_chains",
     FUNC_3(VAR_11->mpr_dev));
 FUNC_0(VAR_12, &VAR_11->max_chains);

 FUNC_5(VAR_12, sizeof(VAR_12), "dev.mpr.%d.max_io_pages",
     FUNC_3(VAR_11->mpr_dev));
 FUNC_0(VAR_12, &VAR_11->max_io_pages);

 FUNC_2(VAR_11->exclude_ids, sizeof(VAR_11->exclude_ids));
 FUNC_5(VAR_12, sizeof(VAR_12), "dev.mpr.%d.exclude_ids",
     FUNC_3(VAR_11->mpr_dev));
 FUNC_1(VAR_12, VAR_11->exclude_ids, sizeof(VAR_11->exclude_ids));

 FUNC_5(VAR_12, sizeof(VAR_12), "dev.mpr.%d.enable_ssu",
     FUNC_3(VAR_11->mpr_dev));
 FUNC_0(VAR_12, &VAR_11->enable_ssu);

 FUNC_5(VAR_12, sizeof(VAR_12), "dev.mpr.%d.spinup_wait_time",
     FUNC_3(VAR_11->mpr_dev));
 FUNC_0(VAR_12, &VAR_11->spinup_wait_time);

 FUNC_5(VAR_12, sizeof(VAR_12), "dev.mpr.%d.use_phy_num",
     FUNC_3(VAR_11->mpr_dev));
 FUNC_0(VAR_12, &VAR_11->use_phynum);

 FUNC_5(VAR_12, sizeof(VAR_12), "dev.mpr.%d.max_reqframes",
     FUNC_3(VAR_11->mpr_dev));
 FUNC_0(VAR_12, &VAR_11->max_reqframes);

 FUNC_5(VAR_12, sizeof(VAR_12), "dev.mpr.%d.max_prireqframes",
     FUNC_3(VAR_11->mpr_dev));
 FUNC_0(VAR_12, &VAR_11->max_prireqframes);

 FUNC_5(VAR_12, sizeof(VAR_12), "dev.mpr.%d.max_replyframes",
     FUNC_3(VAR_11->mpr_dev));
 FUNC_0(VAR_12, &VAR_11->max_replyframes);

 FUNC_5(VAR_12, sizeof(VAR_12), "dev.mpr.%d.max_evtframes",
     FUNC_3(VAR_11->mpr_dev));
 FUNC_0(VAR_12, &VAR_11->max_evtframes);
}
