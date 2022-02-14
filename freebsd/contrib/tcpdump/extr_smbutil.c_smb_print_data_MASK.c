
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (unsigned char const) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,unsigned char const*,int) ;

void
FUNC_4(netdissect_options *VAR_0, const unsigned char *VAR_1, int VAR_2)
{
    int VAR_3 = 0;

    if (VAR_2 <= 0)
 return;
    FUNC_0((VAR_0, "[%03X] ", VAR_3));
    for (VAR_3 = 0; VAR_3 < VAR_2; ) {
        FUNC_1(VAR_1[VAR_3]);
 FUNC_0((VAR_0, "%02X ", VAR_1[VAR_3] & 0xff));
 VAR_3++;
 if (VAR_3%8 == 0)
     FUNC_0((VAR_0, " "));
 if (VAR_3 % 16 == 0) {
     FUNC_3(VAR_0, &VAR_1[VAR_3 - 16], 8);
     FUNC_0((VAR_0, " "));
     FUNC_3(VAR_0, &VAR_1[VAR_3 - 8], 8);
     FUNC_0((VAR_0, "\n"));
     if (VAR_3 < VAR_2)
  FUNC_0((VAR_0, "[%03X] ", VAR_3));
 }
    }
    if (VAR_3 % 16) {
 int VAR_4;

 VAR_4 = 16 - (VAR_3 % 16);
 FUNC_0((VAR_0, " "));
 if (VAR_4>8)
     FUNC_0((VAR_0, " "));
 while (VAR_4--)
     FUNC_0((VAR_0, "   "));

 VAR_4 = FUNC_2(8, VAR_3 % 16);
 FUNC_3(VAR_0, &VAR_1[VAR_3 - (VAR_3 % 16)], VAR_4);
 FUNC_0((VAR_0, " "));
 VAR_4 = (VAR_3 % 16) - VAR_4;
 if (VAR_4 > 0)
     FUNC_3(VAR_0, &VAR_1[VAR_3 - VAR_4], VAR_4);
 FUNC_0((VAR_0, "\n"));
    }
    return;

trunc:
    FUNC_0((VAR_0, "\n"));
    FUNC_0((VAR_0, "WARNING: Short packet. Try increasing the snap length\n"));
}
