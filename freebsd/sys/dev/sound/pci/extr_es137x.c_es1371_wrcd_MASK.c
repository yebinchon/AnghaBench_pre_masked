
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct es_info {int dummy; } ;
typedef int kobj_t ;


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
 int FUNC_0 (void*) ;
 int FUNC_1 (struct es_info*,int,int) ;
 int FUNC_2 (struct es_info*,int,int,int) ;

__attribute__((used)) static int
FUNC_3(kobj_t VAR_11, void *VAR_12, int VAR_13, uint32_t VAR_14)
{
 uint32_t VAR_15, VAR_16, VAR_17;
 struct es_info *VAR_18 = (struct es_info*)VAR_12;

 for (VAR_15 = 0; VAR_15 < 0x1000; VAR_15++) {
    if (!FUNC_1(VAR_18, VAR_9 & VAR_4, 4))
   break;
 }

  VAR_16 = VAR_17 = FUNC_1(VAR_18, VAR_10, 4);

 FUNC_2(VAR_18, VAR_10, (VAR_16 & (VAR_8 | VAR_5 |
     VAR_6 | VAR_7)) | 0x00010000, 4);

 for (VAR_15 = 0; VAR_15 < 0x1000; VAR_15++) {
    if ((FUNC_1(VAR_18, VAR_10, 4) & 0x00870000) ==
      0x00000000)
   break;
 }

 for (VAR_15 = 0; VAR_15 < 0x1000; VAR_15++) {
    if ((FUNC_1(VAR_18, VAR_10, 4) & 0x00870000) ==
      0x00010000)
   break;
 }

 FUNC_2(VAR_18, VAR_9, ((VAR_13 << VAR_1) &
     VAR_0) | ((VAR_14 << VAR_3) &
     VAR_2), 4);

 FUNC_0(VAR_12);
 FUNC_2(VAR_18, VAR_10, VAR_17, 4);

 return (0);
}
