
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
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int ,int ,int*,int) ;

__attribute__((used)) static void FUNC_2(int VAR_17)
{
 int VAR_18;

 if (VAR_11) {
  FUNC_1(VAR_17, VAR_7, VAR_9, (void *) &VAR_11,
       sizeof VAR_11);
  FUNC_1(VAR_17, VAR_7, VAR_8, (void *) &VAR_11,
       sizeof VAR_11);
 } else {
  VAR_18 = 1 << 19;
  FUNC_1(VAR_17, VAR_7, VAR_9, (void *) &VAR_18, sizeof VAR_18);
  FUNC_1(VAR_17, VAR_7, VAR_8, (void *) &VAR_18, sizeof VAR_18);
 }

 VAR_18 = 1;
 FUNC_1(VAR_17, VAR_1, VAR_10, (void *) &VAR_18, sizeof(VAR_18));
 FUNC_1(VAR_17, VAR_6, VAR_5, (void *) &VAR_18, sizeof VAR_18);

 if (VAR_12 & VAR_2)
  FUNC_0(VAR_17, VAR_0, VAR_3);


 if (VAR_16 == VAR_15) {
  FUNC_1(VAR_17, VAR_6, VAR_4, &VAR_13,
       sizeof VAR_13);
 } else if (VAR_16 == VAR_14) {
  VAR_18 = 0;
  FUNC_1(VAR_17, VAR_6, VAR_4, &VAR_18, sizeof VAR_18);
 }
}
