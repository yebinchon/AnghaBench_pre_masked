
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int ,int ,int*,int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static void FUNC_3(int VAR_18)
{
 int VAR_19;

 if (VAR_10) {
  FUNC_1(VAR_18, VAR_6, VAR_8, (void *) &VAR_10,
         sizeof VAR_10);
  FUNC_1(VAR_18, VAR_6, VAR_7, (void *) &VAR_10,
         sizeof VAR_10);
 } else {
  VAR_19 = 1 << 19;
  FUNC_1(VAR_18, VAR_6, VAR_8, (void *) &VAR_19, sizeof VAR_19);
  FUNC_1(VAR_18, VAR_6, VAR_7, (void *) &VAR_19, sizeof VAR_19);
 }

 VAR_19 = 1;
 FUNC_1(VAR_18, VAR_1, VAR_9, (void *) &VAR_19, sizeof(VAR_19));

 if (VAR_11 & VAR_2)
  FUNC_0(VAR_18, VAR_0, VAR_3);

 if (VAR_17) {

  if (VAR_16 == VAR_15) {
   FUNC_1(VAR_18, VAR_5, VAR_4, &VAR_12,
          sizeof VAR_12);
  } else if (VAR_16 == VAR_14) {
   VAR_19 = 0;
   FUNC_1(VAR_18, VAR_5, VAR_4, &VAR_19, sizeof VAR_19);
  }
 }

 if (VAR_13)
  FUNC_2(VAR_18);
}
