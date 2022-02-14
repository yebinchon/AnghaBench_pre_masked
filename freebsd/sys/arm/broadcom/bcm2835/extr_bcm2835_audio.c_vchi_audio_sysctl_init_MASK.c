
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_2__ {int starved; int available_space; int underruns; int retrieved_samples; int submitted_samples; int callbacks; } ;
struct bcm2835_audio_info {TYPE_1__ pch; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct bcm2835_audio_info*,int,int ,char*,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_3 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_4 (int ) ;
 struct sysctl_oid* FUNC_5 (int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_6(struct bcm2835_audio_info *VAR_5)
{
 struct sysctl_ctx_list *VAR_6;
 struct sysctl_oid *VAR_7;
 struct sysctl_oid_list *VAR_8;




 VAR_6 = FUNC_4(VAR_5->dev);
 VAR_7 = FUNC_5(VAR_5->dev);
 VAR_8 = FUNC_3(VAR_7);
 FUNC_1(VAR_6, VAR_8, VAR_3, "dest",
     VAR_1 | VAR_2, VAR_5, sizeof(*VAR_5),
     VAR_4, "IU", "audio destination, "
     "0 - auto, 1 - headphones, 2 - HDMI");
 FUNC_2(VAR_6, VAR_8, VAR_3, "callbacks",
   VAR_0, &VAR_5->pch.callbacks,
   "callbacks total");
 FUNC_2(VAR_6, VAR_8, VAR_3, "submitted",
   VAR_0, &VAR_5->pch.submitted_samples,
   "last play submitted samples");
 FUNC_2(VAR_6, VAR_8, VAR_3, "retrieved",
   VAR_0, &VAR_5->pch.retrieved_samples,
   "last play retrieved samples");
 FUNC_2(VAR_6, VAR_8, VAR_3, "underruns",
   VAR_0, &VAR_5->pch.underruns,
   "callback underruns");
 FUNC_0(VAR_6, VAR_8, VAR_3, "freebuffer",
   VAR_0, &VAR_5->pch.available_space,
   VAR_5->pch.available_space, "callbacks total");
 FUNC_0(VAR_6, VAR_8, VAR_3, "starved",
   VAR_0, &VAR_5->pch.starved,
   VAR_5->pch.starved, "number of starved conditions");
}
