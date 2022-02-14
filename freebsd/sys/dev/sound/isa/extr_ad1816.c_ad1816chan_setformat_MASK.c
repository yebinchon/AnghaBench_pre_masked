
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ad1816_info {int dummy; } ;
struct ad1816_chinfo {scalar_t__ dir; struct ad1816_info* parent; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int FUNC_0 (int) ;
 int FUNC_1 (int) ;




 scalar_t__ VAR_8 ;
 int FUNC_2 (struct ad1816_info*) ;
 int FUNC_3 (struct ad1816_info*) ;
 int FUNC_4 (struct ad1816_info*,int,int) ;
 int FUNC_5 (struct ad1816_info*,int,int) ;

__attribute__((used)) static int
FUNC_6(kobj_t VAR_9, void *VAR_10, u_int32_t VAR_11)
{
 struct ad1816_chinfo *VAR_12 = VAR_10;
   struct ad1816_info *VAR_13 = VAR_12->parent;
     int VAR_14 = VAR_7, VAR_15;

 FUNC_2(VAR_13);
     if (VAR_12->dir == VAR_8) {
         VAR_15 = VAR_3;
         FUNC_4(VAR_13, 8, 0x0000);
         FUNC_4(VAR_13, 9, 0x0000);
     } else {
         VAR_15 = VAR_1;
         FUNC_4(VAR_13, 10, 0x0000);
         FUNC_4(VAR_13, 11, 0x0000);
     }
     switch (FUNC_1(VAR_11)) {
     case 132:
         VAR_14 = VAR_0;
  break;

     case 131:
  VAR_14 = VAR_2;
  break;

     case 129:
  VAR_14 = VAR_5;
  break;

     case 130:
  VAR_14 = VAR_4;
  break;

     case 128:
  VAR_14 = VAR_7;
  break;
     }
     if (FUNC_0(VAR_11) > 1) VAR_14 |= VAR_6;
     FUNC_5(VAR_13, VAR_15, VAR_14);
 FUNC_3(VAR_13);



     return 0;

}
