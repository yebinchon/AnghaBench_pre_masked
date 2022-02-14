
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct khash {int k_state; scalar_t__ k_gate; scalar_t__ k_redirect_time; int k_mask; int k_dst; struct khash* k_next; } ;
typedef scalar_t__ naddr ;
struct TYPE_4__ {int tv_sec; } ;
struct TYPE_3__ {int tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 struct khash** VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 TYPE_2__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,int ,int ) ;

void
FUNC_3(naddr VAR_8,
       time_t VAR_9)
{
 int VAR_10;
 struct khash *VAR_11;


 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  for (VAR_11 = VAR_4[VAR_10]; VAR_11 != ((void*)0); VAR_11 = VAR_11->k_next) {
   if (!(VAR_11->k_state & VAR_2)
       || (VAR_11->k_state & VAR_3))
    continue;

   if (VAR_11->k_gate != VAR_8
       && VAR_11->k_redirect_time > VAR_9
       && !VAR_7)
    continue;

   VAR_11->k_state |= VAR_1;
   VAR_11->k_state &= ~VAR_2;
   VAR_5.tv_sec = VAR_6.tv_sec;
   FUNC_2("mark redirected %s --> %s for deletion",
      FUNC_0(VAR_11->k_dst, VAR_11->k_mask, 0),
      FUNC_1(VAR_11->k_gate));
  }
 }
}
