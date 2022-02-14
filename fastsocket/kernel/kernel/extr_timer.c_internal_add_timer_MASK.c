
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {struct list_head* vec; } ;
struct TYPE_9__ {struct list_head* vec; } ;
struct TYPE_8__ {struct list_head* vec; } ;
struct TYPE_7__ {struct list_head* vec; } ;
struct TYPE_6__ {struct list_head* vec; } ;
struct tvec_base {unsigned long timer_jiffies; TYPE_5__ tv5; TYPE_4__ tv1; TYPE_3__ tv4; TYPE_2__ tv3; TYPE_1__ tv2; } ;
struct timer_list {unsigned long expires; int entry; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int *,struct list_head*) ;

__attribute__((used)) static void FUNC_1(struct tvec_base *VAR_5, struct timer_list *VAR_6)
{
 unsigned long VAR_7 = VAR_6->expires;
 unsigned long VAR_8 = VAR_7 - VAR_5->timer_jiffies;
 struct list_head *VAR_9;

 if (VAR_8 < VAR_4) {
  int VAR_10 = VAR_7 & VAR_3;
  VAR_9 = VAR_5->tv1.vec + VAR_10;
 } else if (VAR_8 < 1 << (VAR_2 + VAR_0)) {
  int VAR_11 = (VAR_7 >> VAR_2) & VAR_1;
  VAR_9 = VAR_5->tv2.vec + VAR_11;
 } else if (VAR_8 < 1 << (VAR_2 + 2 * VAR_0)) {
  int VAR_12 = (VAR_7 >> (VAR_2 + VAR_0)) & VAR_1;
  VAR_9 = VAR_5->tv3.vec + VAR_12;
 } else if (VAR_8 < 1 << (VAR_2 + 3 * VAR_0)) {
  int VAR_13 = (VAR_7 >> (VAR_2 + 2 * VAR_0)) & VAR_1;
  VAR_9 = VAR_5->tv4.vec + VAR_13;
 } else if ((signed long) VAR_8 < 0) {




  VAR_9 = VAR_5->tv1.vec + (VAR_5->timer_jiffies & VAR_3);
 } else {
  int VAR_14;



  if (VAR_8 > 0xffffffffUL) {
   VAR_8 = 0xffffffffUL;
   VAR_7 = VAR_8 + VAR_5->timer_jiffies;
  }
  VAR_14 = (VAR_7 >> (VAR_2 + 3 * VAR_0)) & VAR_1;
  VAR_9 = VAR_5->tv5.vec + VAR_14;
 }



 FUNC_0(&VAR_6->entry, VAR_9);
}
