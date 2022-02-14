
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ port_t ;
typedef int cx_board_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int *,int,scalar_t__,int,int,int,int) ;
 int FUNC_4 (int *,int,scalar_t__,int,int,int) ;
 int FUNC_5 (int *,int,scalar_t__,int,int,int,int,int,int,int,int,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;

void FUNC_9 (cx_board_t *VAR_10, int VAR_11, port_t VAR_12, int VAR_13, int VAR_14)
{
 int VAR_15, VAR_16, VAR_17, VAR_18 = 0, VAR_19 = 0, VAR_20 = 0;

 VAR_16 = FUNC_7 (FUNC_1(VAR_12));
 VAR_17 = ! (VAR_16 & VAR_3);
 if (FUNC_6 (VAR_12)) {
  FUNC_4 (VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_17);
  return;
 }
 if ((VAR_16 & VAR_2) == VAR_6 ||
     (VAR_16 & VAR_2) == VAR_7) {
  FUNC_3 (VAR_10, VAR_11, VAR_12, VAR_13, VAR_14,
   (VAR_16 & VAR_2), (VAR_16 & VAR_1));
  return;
        }

 FUNC_8 (FUNC_0(VAR_12), VAR_0);
 if (VAR_17)
  FUNC_8 (FUNC_0(VAR_12+0x10), VAR_0);
 VAR_15 = FUNC_2 (VAR_12, VAR_16);
 if (VAR_15 >= VAR_9 && VAR_15 <= VAR_8)
  VAR_18 = 1;
 if (VAR_17) {
  VAR_19 = FUNC_7 (FUNC_1(VAR_12+0x10));
  VAR_15 = FUNC_2 (VAR_12+0x10, VAR_19);
  if (VAR_15 >= VAR_9 && VAR_15 <= VAR_8)
   VAR_20 = 1;
  FUNC_8 (FUNC_0(VAR_12+0x10), 0);
 }
 FUNC_8 (FUNC_0(VAR_12), 0);

 FUNC_5 (VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_17,
  (VAR_16 & VAR_5), (VAR_16 & VAR_4), VAR_18,
  (VAR_19 & VAR_5), (VAR_19 & VAR_4), VAR_20);
}
