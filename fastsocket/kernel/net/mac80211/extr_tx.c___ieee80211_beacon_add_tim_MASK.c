
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ps_data {int dtim_count; int dtim_bc_mc; scalar_t__* tim; int bc_buf; int num_sta_ps; } ;
struct TYPE_3__ {int dtim_period; } ;
struct TYPE_4__ {TYPE_1__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (unsigned long*,scalar_t__) ;
 int FUNC_2 (int*,scalar_t__*,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_sub_if_data *VAR_3,
           struct ps_data *VAR_4, struct sk_buff *VAR_5)
{
 u8 *VAR_6, *VAR_7;
 int VAR_8 = 0;
 int VAR_9, VAR_10 = 0, VAR_11, VAR_12;



 if (FUNC_0(&VAR_4->num_sta_ps) > 0)


  VAR_10 = !FUNC_1((unsigned long*)VAR_4->tim,
       VAR_0+1);

 if (VAR_4->dtim_count == 0)
  VAR_4->dtim_count = VAR_3->vif.bss_conf.dtim_period - 1;
 else
  VAR_4->dtim_count--;

 VAR_7 = VAR_6 = (u8 *) FUNC_3(VAR_5, 6);
 *VAR_6++ = VAR_2;
 *VAR_6++ = 4;
 *VAR_6++ = VAR_4->dtim_count;
 *VAR_6++ = VAR_3->vif.bss_conf.dtim_period;

 if (VAR_4->dtim_count == 0 && !FUNC_4(&VAR_4->bc_buf))
  VAR_8 = 1;

 VAR_4->dtim_bc_mc = VAR_8 == 1;

 if (VAR_10) {



  VAR_11 = 0;
  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
   if (VAR_4->tim[VAR_9]) {
    VAR_11 = VAR_9 & 0xfe;
    break;
   }
  }
  VAR_12 = VAR_11;
  for (VAR_9 = VAR_1 - 1; VAR_9 >= VAR_11; VAR_9--) {
   if (VAR_4->tim[VAR_9]) {
    VAR_12 = VAR_9;
    break;
   }
  }


  *VAR_6++ = VAR_11 | VAR_8;

  FUNC_3(VAR_5, VAR_12 - VAR_11);
  FUNC_2(VAR_6, VAR_4->tim + VAR_11, VAR_12 - VAR_11 + 1);

  VAR_7[1] = VAR_12 - VAR_11 + 4;
 } else {
  *VAR_6++ = VAR_8;
  *VAR_6++ = 0;
 }
}
