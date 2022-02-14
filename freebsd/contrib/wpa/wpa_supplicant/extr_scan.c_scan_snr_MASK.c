
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_scan_res {int flags; scalar_t__ level; scalar_t__ snr; scalar_t__ noise; int freq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_1(struct wpa_scan_res *VAR_4)
{
 if (VAR_4->flags & VAR_3) {
  VAR_4->noise = FUNC_0(VAR_4->freq) ?
   VAR_1 :
   VAR_0;
 }

 if (VAR_4->flags & VAR_2) {
  VAR_4->snr = VAR_4->level - VAR_4->noise;
 } else {


  VAR_4->snr = VAR_4->level;
 }
}
