
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct dn_scp {unsigned char services_rem; scalar_t__ snd_window; scalar_t__ flowrem_oth; scalar_t__ flowrem_dat; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff_head*) ;

__attribute__((used)) static inline int FUNC_1(struct dn_scp *VAR_3, struct sk_buff_head *VAR_4, int VAR_5)
{
 unsigned char VAR_6 = VAR_3->services_rem & VAR_1;
 if (FUNC_0(VAR_4) >= VAR_3->snd_window)
  return 1;
 if (VAR_6 != VAR_2) {
  if (VAR_5 & VAR_0) {
   if (VAR_3->flowrem_oth == 0)
    return 1;
  } else {
   if (VAR_3->flowrem_dat == 0)
    return 1;
  }
 }
 return 0;
}
