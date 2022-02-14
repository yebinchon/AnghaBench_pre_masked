
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct ata_channel {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ata_channel*,int ) ;
 int FUNC_2 (struct ata_channel*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct ata_channel *VAR_5, int VAR_6, u_int8_t VAR_7)
{
    u_int8_t VAR_8;
    int VAR_9 = 0;

    FUNC_3(1);


    while (VAR_9 < 1000000) {
 VAR_8 = FUNC_1(VAR_5, VAR_0);


 if (VAR_8 == 0xff) {
     FUNC_2(VAR_5, VAR_1, VAR_2 | FUNC_0(VAR_6));
     VAR_9 += 1000;
     FUNC_3(1000);
     continue;
 }


 if (!(VAR_8 & VAR_3))
     break;

 if (VAR_9 > 1000) {
     VAR_9 += 1000;
     FUNC_3(1000);
 }
 else {
     VAR_9 += 10;
     FUNC_3(10);
 }
    }
    if (VAR_9 >= 1000000)
 return -2;
    if (!VAR_7)
 return (VAR_8 & VAR_4);

    FUNC_3(1);


    VAR_9 = 5000;
    while (VAR_9--) {
 VAR_8 = FUNC_1(VAR_5, VAR_0);
 if ((VAR_8 & VAR_7) == VAR_7)
     return (VAR_8 & VAR_4);
 FUNC_3(10);
    }
    return -3;
}
