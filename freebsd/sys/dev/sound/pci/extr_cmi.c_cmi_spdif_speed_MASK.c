
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sc_info*,int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_1(struct sc_info *VAR_7, int VAR_8) {
 u_int32_t VAR_9, VAR_10, VAR_11;

 if (VAR_8 >= 44100) {
  VAR_9 = VAR_3;
  VAR_10 = VAR_6;
  VAR_11 = (VAR_8 == 48000) ?
   VAR_5 | VAR_4 : 0;
 } else {
  VAR_9 = VAR_11 = VAR_10 = 0;
 }

 FUNC_0(VAR_7, VAR_2, 0,
   VAR_5 | VAR_4, VAR_11);
 FUNC_0(VAR_7, VAR_0, 0,
   VAR_3, VAR_9);
 FUNC_0(VAR_7, VAR_1, 0,
   VAR_6, VAR_10);
}
