
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ag_info {int ag_mask; int ag_dst_h; int ag_state; scalar_t__ ag_gate; scalar_t__ ag_pref; scalar_t__ ag_tag; scalar_t__ ag_nhop; struct ag_info* ag_cors; } ;
typedef int naddr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct ag_info*) ;
 struct ag_info* VAR_5 ;
 int FUNC_3 (struct ag_info*,void (*) (struct ag_info*)) ;

void
FUNC_4(naddr VAR_6,
  naddr VAR_7,
  void (*VAR_8)(struct ag_info *))
{
 struct ag_info *VAR_9, *VAR_10;
 naddr VAR_11;


 for (VAR_9 = VAR_5;
      VAR_9 != ((void*)0) && VAR_9->ag_mask >= VAR_7;
      VAR_9 = VAR_10) {
  VAR_10 = VAR_9->ag_cors;


  VAR_11 = VAR_9->ag_dst_h;
  if ((VAR_11 & VAR_7) != VAR_6)
   continue;

  if (!(VAR_9->ag_state & VAR_4))
   FUNC_3(VAR_9, VAR_8);

  else for ( ; ; VAR_10 = VAR_10->ag_cors) {


   if (VAR_10 == ((void*)0)) {



    FUNC_3(VAR_9, VAR_8);
    break;
   }

   if ((VAR_11 & VAR_10->ag_mask) == VAR_10->ag_dst_h) {







    if (VAR_9->ag_gate != VAR_10->ag_gate
        && !(VAR_9->ag_state & VAR_1)
        && !(VAR_10->ag_state & VAR_0)) {
     FUNC_3(VAR_9, VAR_8);
     break;
    }






    if (VAR_10->ag_pref <= VAR_9->ag_pref) {
        if (FUNC_0(VAR_9->ag_state)
     && VAR_10->ag_mask==VAR_9->ag_mask<<1) {
     if (VAR_10->ag_dst_h == VAR_11)
         VAR_10->ag_state |= VAR_2;
     else
         VAR_10->ag_state |= VAR_3;
        }
        if (VAR_9->ag_tag != VAR_10->ag_tag)
         VAR_10->ag_tag = 0;
        if (VAR_9->ag_nhop != VAR_10->ag_nhop)
         VAR_10->ag_nhop = 0;
        break;
    }
   }
  }


  VAR_10 = VAR_9->ag_cors;
  FUNC_2(VAR_9);
 }

 FUNC_1();
}
