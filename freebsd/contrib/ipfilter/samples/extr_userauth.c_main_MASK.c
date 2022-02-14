
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int yn ;
struct TYPE_3__ {int fi_flx; int fi_dst; int fi_src; } ;
struct TYPE_4__ {int* fin_data; int fin_id; TYPE_1__ fin_fi; scalar_t__ fin_out; } ;
struct frauth {int fra_pass; int fra_index; TYPE_2__ fra_info; int * fra_buf; scalar_t__ fra_len; } ;
typedef TYPE_1__ fr_ip_t ;
typedef TYPE_2__ fr_info_t ;


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
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int ,char*,int) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int,int ,struct frauth**) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

FUNC_8()
{
 struct frauth VAR_15;
 struct frauth *VAR_16 = &VAR_15;
 fr_info_t *VAR_17 = &VAR_15.fra_info;
 fr_ip_t *VAR_18 = &VAR_17->fin_fi;
 char VAR_19[16];
 int VAR_20;

 VAR_20 = FUNC_5(VAR_7, VAR_8);
 VAR_15.fra_len = 0;
 VAR_15.fra_buf = ((void*)0);
 while (FUNC_4(VAR_20, VAR_10, &VAR_16) == 0) {
  if (VAR_15.fra_info.fin_out)
   VAR_15.fra_pass = VAR_5;
  else
   VAR_15.fra_pass = VAR_2;

  FUNC_7("%s ", FUNC_3(VAR_18->fi_src));
  if (VAR_18->fi_flx & VAR_0)
   FUNC_7("port %d ", VAR_17->fin_data[0]);
  FUNC_7("-> %s ", FUNC_3(VAR_18->fi_dst));
  if (VAR_18->fi_flx & VAR_0)
   FUNC_7("port %d ", VAR_17->fin_data[1]);
  FUNC_7("\n");
  FUNC_7("Allow packet through ? [y/n]");
  FUNC_0(VAR_14);
  if (!FUNC_1(VAR_19, sizeof(VAR_19), VAR_13))
   break;
  FUNC_0(VAR_13);
  if (VAR_19[0] == 'n' || VAR_19[0] == 'N')
   VAR_15.fra_pass |= VAR_1;
  else if (VAR_19[0] == 'y' || VAR_19[0] == 'Y') {
   VAR_15.fra_pass |= VAR_6;
   if (VAR_15.fra_info.fin_fi.fi_flx & VAR_0)
    VAR_15.fra_pass |= VAR_3;
  } else
   VAR_15.fra_pass |= VAR_4;
  FUNC_7("answer = %c (%x), id %d idx %d\n", VAR_19[0],
   VAR_15.fra_pass, VAR_15.fra_info.fin_id, VAR_15.fra_index);
  if (FUNC_4(VAR_20, VAR_9, &VAR_16) != 0)
   FUNC_6("SIOCAUTHR");
 }
 FUNC_2(VAR_12, "errno=%d \n", VAR_11);
 FUNC_6("frauth-SIOCAUTHW");
}
