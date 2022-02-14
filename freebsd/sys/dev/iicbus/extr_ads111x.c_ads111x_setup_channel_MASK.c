
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct ads111x_softc {int dev; struct ads111x_channel* channels; } ;
struct ads111x_channel {int gainidx; int rateidx; int configured; } ;
typedef int chanstr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int,struct ads111x_softc*,int,int ,char*,char*) ;
 int FUNC_2 (struct sysctl_oid*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;
 int FUNC_5 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_6(struct ads111x_softc *VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 struct ads111x_channel *VAR_12;
 struct sysctl_ctx_list *VAR_13;
 struct sysctl_oid *VAR_14, *VAR_15;
 char VAR_16[4];

 VAR_12 = &VAR_8->channels[VAR_9];
 VAR_12->gainidx = VAR_10;
 VAR_12->rateidx = VAR_11;







 if (VAR_12->configured)
  return;

 VAR_13 = FUNC_3(VAR_8->dev);
 VAR_15 = FUNC_4(VAR_8->dev);
 FUNC_5(VAR_16, sizeof(VAR_16), "%d", VAR_9);
 VAR_14 = FUNC_0(VAR_13, FUNC_2(VAR_15), VAR_4,
     VAR_16, VAR_0, ((void*)0), "channel data");
 FUNC_1(VAR_13, FUNC_2(VAR_14), VAR_4,
     "gain_index", VAR_3 | VAR_1, VAR_8, VAR_9,
     VAR_5, "I", "programmable gain amp setting, 0-7");
 FUNC_1(VAR_13, FUNC_2(VAR_14), VAR_4,
     "rate_index", VAR_3 | VAR_1, VAR_8, VAR_9,
     VAR_6, "I", "sample rate setting, 0-7");
 FUNC_1(VAR_13, FUNC_2(VAR_14), VAR_4,
     "voltage", VAR_3 | VAR_0 | VAR_2, VAR_8, VAR_9,
     VAR_7, "I", "sampled voltage in microvolts");

 VAR_12->configured = 1;
}
