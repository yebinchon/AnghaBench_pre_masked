
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct khash {int k_state; scalar_t__ k_keep; struct khash* k_next; } ;
struct TYPE_2__ {scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_12 ;
 int FUNC_2 (struct khash*) ;
 int FUNC_3 (struct khash*,int ) ;
 int FUNC_4 (struct khash*,int ,int ) ;
 int VAR_13 ;
 struct khash** VAR_14 ;
 int VAR_15 ;
 TYPE_1__ VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_18 ;

__attribute__((used)) static void
FUNC_6(void)
{
 int VAR_19;
 struct khash *VAR_20, **VAR_21;


 VAR_15 = VAR_12;



 (void)FUNC_5(VAR_17, VAR_18, 0);
 FUNC_1(0,0,VAR_13);

 for (VAR_19 = 0; VAR_19 < VAR_0; VAR_19++) {
  for (VAR_21 = &VAR_14[VAR_19]; (VAR_20 = *VAR_21) != ((void*)0); ) {

   if (VAR_20->k_state & VAR_7) {
    FUNC_3(VAR_20,0);
    VAR_21 = &VAR_20->k_next;
    continue;
   }


   if (VAR_20->k_keep > VAR_16.tv_sec) {

    FUNC_0(VAR_15, VAR_20->k_keep);

    VAR_20->k_state |= VAR_3;
    VAR_21 = &VAR_20->k_next;
    continue;
   }

   if ((VAR_20->k_state & VAR_3)
       && !(VAR_20->k_state & VAR_5)) {
    FUNC_4(VAR_20, VAR_11, 0);
    *VAR_21 = VAR_20->k_next;
    FUNC_2(VAR_20);
    continue;
   }

   if (VAR_20->k_state & VAR_4)
    FUNC_4(VAR_20, VAR_11, 0);

   if (VAR_20->k_state & VAR_1) {
    FUNC_4(VAR_20, VAR_9,
        ((0 != (VAR_20->k_state & (VAR_6
       | VAR_5)))
         ? VAR_8 : 0));
   } else if (VAR_20->k_state & VAR_2) {
    FUNC_4(VAR_20, VAR_10,
        ((0 != (VAR_20->k_state & (VAR_6
       | VAR_5)))
         ? VAR_8 : 0));
   }
   VAR_20->k_state &= ~(VAR_1|VAR_2|VAR_4);







   VAR_20->k_state |= VAR_3;
   VAR_21 = &VAR_20->k_next;
  }
 }
}
