
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mount {int dummy; } ;
struct TYPE_2__ {int v_page_count; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct mount* FUNC_1 (int *) ;
 struct mount* FUNC_2 (struct mount*,int ) ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 int VAR_11 ;
 int FUNC_4 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ,int *,int,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 unsigned long VAR_15 ;
 int VAR_16 ;
 int FUNC_8 (int ,int ,char*,int) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct mount*,int) ;
 int FUNC_11 (struct mount*) ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_12 (struct mount*,int,int) ;
 TYPE_1__ VAR_19 ;
 int FUNC_13 (unsigned long,int *) ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_14 () ;
 scalar_t__ VAR_25 ;
 int FUNC_15 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_16(void)
{
 struct mount *VAR_26, *VAR_27;
 unsigned long VAR_28;
 int VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
 bool VAR_34;

 FUNC_0(VAR_16, VAR_11, VAR_21,
     VAR_6);

 VAR_30 = 0;
 for (;;) {
  FUNC_4(VAR_21);
  FUNC_6(&VAR_23);





  if (VAR_15 > VAR_8)
   FUNC_13(VAR_15 - VAR_8, ((void*)0));







  if (VAR_25 && VAR_30 == 0) {
   VAR_30 = 1;
   VAR_25 = 0;
  }
  VAR_33 = FUNC_14();
  if (VAR_33 >= VAR_18 && VAR_30 == 0) {
   VAR_22 = 0;
   FUNC_15(&VAR_22);
   FUNC_5(VAR_21, &VAR_23,
       VAR_5|VAR_2, "vlruwt", VAR_10);
   continue;
  }
  FUNC_7(&VAR_23);
  VAR_29 = 0;
  VAR_28 = VAR_15;







  if (VAR_15 <= VAR_8)
   VAR_32 = VAR_15 - VAR_9;
  else
   VAR_32 = VAR_15;
  if (VAR_32 <= 0)
   VAR_32 = 1;
  VAR_31 = VAR_19.v_page_count * 2 / VAR_32;
  if (VAR_30 < 2)
   VAR_31 = VAR_24;
  VAR_34 = VAR_30 >= 3;
  FUNC_6(&VAR_14);
  for (VAR_26 = FUNC_1(&VAR_13); VAR_26 != ((void*)0); VAR_26 = VAR_27) {
   if (FUNC_10(VAR_26, VAR_1 | VAR_0)) {
    VAR_27 = FUNC_2(VAR_26, VAR_12);
    continue;
   }
   VAR_29 += FUNC_12(VAR_26, VAR_34, VAR_31);
   FUNC_6(&VAR_14);
   VAR_27 = FUNC_2(VAR_26, VAR_12);
   FUNC_11(VAR_26);
  }
  FUNC_7(&VAR_14);
  if (VAR_28 > VAR_8 && VAR_15 <= VAR_8)
   FUNC_9(VAR_7);
  if (VAR_29 == 0) {
   if (VAR_30 == 0 || VAR_30 == 1) {
    VAR_30 = 2;
    continue;
   }
   if (VAR_30 == 2) {
    VAR_30 = 3;
    continue;
   }
   VAR_30 = 0;
   VAR_20++;
   FUNC_8(VAR_21, VAR_3, "vlrup", VAR_10 * 3);
  } else
   FUNC_3(VAR_4);




  VAR_33 = FUNC_14();
  VAR_30 = VAR_33 < VAR_17;
 }
}
