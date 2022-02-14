
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
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (struct es_info*,int ,int) ;
 int FUNC_2 (struct es_info*,int ,int,int) ;

__attribute__((used)) static int
FUNC_3(kobj_t VAR_13, void *VAR_14, int VAR_15)
{
   uint32_t VAR_16, VAR_17, VAR_18;
   struct es_info *VAR_19 = (struct es_info *)VAR_14;

   for (VAR_16 = 0; VAR_16 < 0x1000; VAR_16++) {
  if (!(VAR_17 = FUNC_1(VAR_19, VAR_11, 4) & VAR_6))
     break;
 }


   VAR_17 = VAR_18 = FUNC_1(VAR_19, VAR_12, 4);

   FUNC_2(VAR_19, VAR_12, (VAR_17 & (VAR_10 | VAR_7 |
     VAR_8 | VAR_9)) | 0x00010000, 4);

   for (VAR_16 = 0; VAR_16 < 0x1000; VAR_16++) {
  if ((VAR_17 = FUNC_1(VAR_19, VAR_12, 4) & 0x00870000) ==
      0x00000000)
     break;
 }

   for (VAR_16 = 0; VAR_16 < 0x1000; VAR_16++) {
  if ((VAR_17 = FUNC_1(VAR_19, VAR_12, 4) & 0x00870000) ==
      0x00010000)
     break;
 }

   FUNC_2(VAR_19, VAR_11, ((VAR_15 << VAR_3) &
     VAR_2) | VAR_4, 4);


   FUNC_0(VAR_14);
   FUNC_2(VAR_19, VAR_12, VAR_18, 4);


   for (VAR_16 = 0; VAR_16 < 0x1000; VAR_16++) {
  if ((VAR_17 = FUNC_1(VAR_19, VAR_11, 4)) & VAR_5)
     break;
 }

   return ((VAR_17 & VAR_0) >> VAR_1);
}
