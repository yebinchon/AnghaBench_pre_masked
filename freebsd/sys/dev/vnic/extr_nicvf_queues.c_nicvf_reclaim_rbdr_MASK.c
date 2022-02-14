
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct rbdr {int head; int tail; } ;
struct nicvf {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct nicvf*,int,int ,int,int,int) ;
 int FUNC_3 (struct nicvf*,int ,int) ;
 int FUNC_4 (struct nicvf*,int ,int,int) ;

__attribute__((used)) static void
FUNC_5(struct nicvf *VAR_6, struct rbdr *VAR_7, int VAR_8)
{
 uint64_t VAR_9, VAR_10;
 int VAR_11 = 10;


 VAR_7->head =
     FUNC_3(VAR_6, VAR_2, VAR_8) >> 3;
 VAR_7->tail =
     FUNC_3(VAR_6, VAR_5, VAR_8) >> 3;





 VAR_10 = FUNC_3(VAR_6, VAR_4, VAR_8);
 if (((VAR_10 >> 62) & 0x03) == 0x3) {
  FUNC_4(VAR_6, VAR_1,
      VAR_8, VAR_0);
 }


 FUNC_4(VAR_6, VAR_1, VAR_8, 0);
 if (FUNC_2(VAR_6, VAR_8, VAR_4, 62, 2, 0x00))
  return;
 while (1) {
  VAR_9 = FUNC_3(VAR_6,
      VAR_3, VAR_8);
  if ((VAR_9 & 0xFFFFFFFF) == ((VAR_9 >> 32) & 0xFFFFFFFF))
   break;

  FUNC_0(1000);
  VAR_11--;
  if (!VAR_11) {
   FUNC_1(VAR_6->dev,
       "Failed polling on prefetch status\n");
   return;
  }
 }
 FUNC_4(VAR_6, VAR_1, VAR_8,
     VAR_0);

 if (FUNC_2(VAR_6, VAR_8, VAR_4, 62, 2, 0x02))
  return;
 FUNC_4(VAR_6, VAR_1, VAR_8, 0x00);
 if (FUNC_2(VAR_6, VAR_8, VAR_4, 62, 2, 0x00))
  return;
}
