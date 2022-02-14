
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hostapd_iface {size_t num_bss; struct hostapd_data** bss; TYPE_1__* conf; } ;
struct hostapd_data {unsigned int num_backlogged_sta; int airtime_weight; TYPE_2__* conf; int started; } ;
struct TYPE_4__ {unsigned int airtime_weight; scalar_t__ airtime_limit; } ;
struct TYPE_3__ {scalar_t__ airtime_mode; } ;
typedef int Boolean ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hostapd_data*) ;
 int FUNC_1 (unsigned int,unsigned int,void (*) (void*,void*),struct hostapd_iface*,int *) ;
 scalar_t__ FUNC_2 (struct hostapd_iface*,unsigned int*,unsigned int*) ;
 unsigned int FUNC_3 (int) ;
 int FUNC_4 (struct hostapd_data*,unsigned int) ;

__attribute__((used)) static void FUNC_5(void *VAR_3, void *VAR_4)
{
 struct hostapd_iface *VAR_5 = VAR_3;
 struct hostapd_data *VAR_6;
 unsigned int VAR_7, VAR_8;
 unsigned int VAR_9 = 0, VAR_10 = 1, VAR_11 = 0,
  VAR_12 = 0;
 unsigned int VAR_13;
 Boolean VAR_14 = VAR_2;
 Boolean VAR_15 = VAR_5->conf->airtime_mode == VAR_0;
 int VAR_16, VAR_17 = 0, VAR_18 = 0;
 size_t VAR_19;

 for (VAR_19 = 0; VAR_19 < VAR_5->num_bss; VAR_19++) {
  VAR_6 = VAR_5->bss[VAR_19];
  if (!VAR_6->started || !VAR_6->conf->airtime_weight)
   continue;

  FUNC_0(VAR_6);
  if (!VAR_6->num_backlogged_sta)
   continue;

  if (!VAR_9 || VAR_6->num_backlogged_sta < VAR_9)
   VAR_9 = VAR_6->num_backlogged_sta;

  VAR_10 *= VAR_6->num_backlogged_sta;
  VAR_11 += VAR_6->num_backlogged_sta;
  VAR_12 += VAR_6->conf->airtime_weight;
  VAR_17++;
 }

 if (VAR_9) {
  for (VAR_19 = 0; VAR_19 < VAR_5->num_bss; VAR_19++) {
   VAR_6 = VAR_5->bss[VAR_19];
   if (!VAR_6->started || !VAR_6->conf->airtime_weight)
    continue;





   if (VAR_6->num_backlogged_sta &&
       VAR_6->num_backlogged_sta % VAR_9 > 0)
    VAR_14 = VAR_1;





   if (!VAR_15 && VAR_6->conf->airtime_limit) {
    if (VAR_6->num_backlogged_sta * VAR_12 >
        VAR_6->conf->airtime_weight * VAR_11)
     VAR_15 = VAR_2;
   }
  }
  if (VAR_14)
   VAR_10 /= VAR_9;
 }

 for (VAR_19 = 0; VAR_19 < VAR_5->num_bss; VAR_19++) {
  VAR_6 = VAR_5->bss[VAR_19];
  if (!VAR_6->started || !VAR_6->conf->airtime_weight)
   continue;






  if (VAR_15 && VAR_6->num_backlogged_sta && VAR_17 > 1)
   VAR_16 = VAR_6->conf->airtime_weight * VAR_10 /
    VAR_6->num_backlogged_sta;
  else
   VAR_16 = 1;

  VAR_6->airtime_weight = VAR_16;
  if (VAR_16 > VAR_18)
   VAR_18 = VAR_16;
 }

 VAR_13 = FUNC_3(VAR_18);

 for (VAR_19 = 0; VAR_19 < VAR_5->num_bss; VAR_19++) {
  VAR_6 = VAR_5->bss[VAR_19];
  if (!VAR_6->started || !VAR_6->conf->airtime_weight)
   continue;
  FUNC_4(VAR_6, VAR_6->airtime_weight * VAR_13);
 }

 if (FUNC_2(VAR_5, &VAR_7, &VAR_8) < 0)
  return;

 FUNC_1(VAR_7, VAR_8, FUNC_5, VAR_5,
          ((void*)0));
}
