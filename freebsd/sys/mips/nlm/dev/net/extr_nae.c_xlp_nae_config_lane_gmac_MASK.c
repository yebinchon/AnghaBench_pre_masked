
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int,int,int ) ;
 int FUNC_4 (int ,int,int,int ) ;

void
FUNC_5(uint64_t VAR_9, int VAR_10)
{
 int VAR_11, VAR_12;
 int VAR_13;
 int VAR_14 = 0;

 VAR_13 = VAR_4 |
     (VAR_4 << 4) |
     (VAR_4 << 8) |
     (VAR_4 << 12);


 VAR_11 = 7;


 if (VAR_10 & 0x1)
  VAR_14 |= VAR_13;

 if (VAR_10 & 0x2)
  VAR_14 |= (VAR_13 << 16);

 if (VAR_14) {
  FUNC_2(VAR_9,
      FUNC_0(VAR_11, VAR_0, VAR_1),
      VAR_14);
  VAR_14 = 0;
 }

 if (VAR_10 & 0x4)
  VAR_14 |= VAR_13;

 if (VAR_10 & 0x8)
  VAR_14 |= (VAR_13 << 16);

 FUNC_2(VAR_9,
     FUNC_0(VAR_11, VAR_0, VAR_2),
     VAR_14);



 if (VAR_10 & 0x10) {
  FUNC_2(VAR_9,
      FUNC_0(VAR_11, VAR_0, VAR_3),
      ((VAR_4 << 4) | VAR_4));
  for (VAR_12 = VAR_6;
      VAR_12 <= VAR_7; VAR_12++) {
   if (!FUNC_1())
    FUNC_4(VAR_9,
        4, VAR_12, VAR_5);
   else
    FUNC_3(VAR_9, 4,
        VAR_12, VAR_5);
  }
 }

 for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
  if ((VAR_10 & (1 << VAR_11)) == 0)
   continue;

  for (VAR_12 = VAR_6;
      VAR_12 <= VAR_8; VAR_12++) {
   if (!FUNC_1())
    FUNC_4(VAR_9,
        VAR_11, VAR_12, VAR_5);
   else
    FUNC_3(VAR_9, VAR_11,
        VAR_12, VAR_5);
  }
 }
}
