
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int member_0; char* member_1; int member_2; } ;
typedef TYPE_1__ heim_integer ;


 scalar_t__ FUNC_0 (char*,char*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(void)
{
    heim_integer VAR_0 = { 1, "\x10", 0 };
    heim_integer VAR_1 = { 1, "\x10", 1 };
    heim_integer VAR_2 = { 1, "\01", 0 };
    char *VAR_3 =
 "FFFFFFFF" "FFFFFFFF" "C90FDAA2" "2168C234" "C4C6628B" "80DC1CD1"
 "29024E08" "8A67CC74" "020BBEA6" "3B139B22" "514A0879" "8E3404DD"
 "EF9519B3" "CD3A431B" "302B0A6D" "F25F1437" "4FE1356D" "6D51C245"
 "E485B576" "625E7EC6" "F44C42E9" "A637ED6B" "0BFF5CB6" "F406B7ED"
 "EE386BFB" "5A899FA5" "AE9F2411" "7C4B1FE6" "49286651" "ECE65381"
 "FFFFFFFF" "FFFFFFFF";
    heim_integer VAR_4 = {
 128,
 "\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xC9\x0F\xDA\xA2"
 "\x21\x68\xC2\x34\xC4\xC6\x62\x8B\x80\xDC\x1C\xD1"
 "\x29\x02\x4E\x08\x8A\x67\xCC\x74\x02\x0B\xBE\xA6"
 "\x3B\x13\x9B\x22\x51\x4A\x08\x79\x8E\x34\x04\xDD"
 "\xEF\x95\x19\xB3\xCD\x3A\x43\x1B\x30\x2B\x0A\x6D"
 "\xF2\x5F\x14\x37\x4F\xE1\x35\x6D\x6D\x51\xC2\x45"
 "\xE4\x85\xB5\x76\x62\x5E\x7E\xC6\xF4\x4C\x42\xE9"
 "\xA6\x37\xED\x6B\x0B\xFF\x5C\xB6\xF4\x06\xB7\xED"
 "\xEE\x38\x6B\xFB\x5A\x89\x9F\xA5\xAE\x9F\x24\x11"
 "\x7C\x4B\x1F\xE6\x49\x28\x66\x51\xEC\xE6\x53\x81"
 "\xFF\xFF\xFF\xFF\xFF\xFF\xFF\xFF",
 0
    };
    heim_integer VAR_5;
    int VAR_6 = 0;

    VAR_6 += FUNC_0(VAR_3, VAR_3, &VAR_4);
    VAR_6 += FUNC_0("10", "10", &VAR_0);
    VAR_6 += FUNC_0("00000010", "10", &VAR_0);
    VAR_6 += FUNC_0("-10", "-10", &VAR_1);
    VAR_6 += FUNC_0("-00000010", "-10", &VAR_1);
    VAR_6 += FUNC_0("01", "01", &VAR_2);
    VAR_6 += FUNC_0("1", "01", &VAR_2);

    {
 int VAR_7;
 VAR_7 = FUNC_2("-", &VAR_5);
 if (VAR_7 == 0) {
     FUNC_1(&VAR_5);
     VAR_6++;
 }

 VAR_7 = FUNC_2("00", &VAR_5);
 if (VAR_7 == 0)
     FUNC_1(&VAR_5);
 else
     VAR_6++;
    }

    return VAR_6;
}
