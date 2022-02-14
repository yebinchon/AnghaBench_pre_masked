
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_extr_rec {int cur_len; int dr_len; int extr_off; int extr_loc; int * ce_ptr; scalar_t__ use_extr; scalar_t__* bp; } ;


 int FUNC_0 (struct ctl_extr_rec*,int) ;
 int FUNC_1 (int *,int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ctl_extr_rec *VAR_0, int VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1 > 0)
  FUNC_0(VAR_0, VAR_1);

 if (VAR_0->cur_len & 0x01) {
  VAR_0->cur_len++;
  if (VAR_0->bp != ((void*)0))
   VAR_0->bp[VAR_0->cur_len] = 0;
  VAR_2 = 1;
 }
 if (VAR_0->use_extr) {
  if (VAR_0->ce_ptr != ((void*)0))
   FUNC_1(VAR_0->ce_ptr, VAR_0->extr_loc,
       VAR_0->extr_off, VAR_0->cur_len - VAR_2);
 } else
  VAR_0->dr_len = VAR_0->cur_len;
}
