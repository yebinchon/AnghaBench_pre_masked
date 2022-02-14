
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ata_channel {int unit; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct ata_channel* FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int,int const,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_5, int VAR_6, int VAR_7)
{
 device_t VAR_8 = FUNC_1(VAR_5);
 struct ata_channel *VAR_9 = FUNC_2(VAR_5);
 int VAR_10 = (VAR_9->unit << 1) + VAR_6;
 int VAR_11;
 static const uint32_t VAR_12[] =
     { 0x9172d132, 0x21717121, 0x00803020, 0x20102010, 0x00100010,
       0x9172d132, 0x20102010, 0x00100010 };
 static const uint32_t VAR_13[] =
     { 0x80077771, 0x80012121, 0x80002020 };
 static const uint32_t VAR_14[] =
     { 0x80921250, 0x80911140, 0x80911030 };

 VAR_7 = FUNC_3(VAR_7, VAR_3);

 if (VAR_7 >= VAR_2) {
     FUNC_5(VAR_8, 0x44 + (VAR_10 << 3),
        VAR_14[VAR_7 & VAR_0], 4);
     VAR_11 = VAR_1;
 } else if (VAR_7 >= VAR_4) {
     FUNC_5(VAR_8, 0x44 + (VAR_10 << 3),
        VAR_13[VAR_7 & VAR_0], 4);
     VAR_11 = VAR_7;
 } else {
     FUNC_5(VAR_8, 0x44 + (VAR_10 << 3),
        FUNC_4(VAR_8, 0x44 + (VAR_10 << 3), 4) |
        0x80000000, 4);
     VAR_11 = VAR_7;
 }
 FUNC_5(VAR_8, 0x40 + (VAR_10 << 3),
    VAR_12[FUNC_0(VAR_11)], 4);
 return (VAR_7);
}
