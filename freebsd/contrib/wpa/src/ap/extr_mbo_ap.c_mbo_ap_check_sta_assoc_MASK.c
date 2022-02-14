
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sta_info {int cell_capa; } ;
struct ieee802_11_elems {int* mbo; int mbo_len; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {int mbo_enabled; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (int const*,size_t,int ) ;
 int FUNC_1 (struct sta_info*,int const*,int) ;
 int FUNC_2 (struct sta_info*) ;
 int FUNC_3 (int ,char*,int const*,size_t) ;

void FUNC_4(struct hostapd_data *VAR_3, struct sta_info *VAR_4,
       struct ieee802_11_elems *VAR_5)
{
 const u8 *VAR_6, *VAR_7, *VAR_8;
 size_t VAR_9;

 if (!VAR_3->conf->mbo_enabled || !VAR_5->mbo)
  return;

 VAR_6 = VAR_5->mbo + 4;
 VAR_9 = VAR_5->mbo_len - 4;
 FUNC_3(VAR_2, "MBO: Association Request attributes", VAR_6, VAR_9);

 VAR_7 = FUNC_0(VAR_6, VAR_9, VAR_0);
 if (VAR_7 && VAR_7[1] >= 1)
  VAR_4->cell_capa = VAR_7[2];

 FUNC_2(VAR_4);
 VAR_8 = VAR_6 + VAR_9;
 while (VAR_8 - VAR_6 > 1) {
  u8 VAR_10 = VAR_6[1];

  if (2 + VAR_10 > VAR_8 - VAR_6)
   break;

  if (VAR_6[0] == VAR_1)
   FUNC_1(VAR_4, VAR_6 + 2, VAR_10);
  VAR_6 += 2 + VAR_6[1];
 }
}
