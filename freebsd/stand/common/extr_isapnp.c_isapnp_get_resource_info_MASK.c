
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(uint8_t *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7;
    u_char VAR_8;

    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
 FUNC_2(VAR_2, VAR_1);
 for (VAR_7 = 0; VAR_7 < 100; VAR_7++) {
     if ((FUNC_1(VAR_3)) & 0x1)
  break;
     FUNC_0(1);
 }
 if (VAR_7 == 100) {
     FUNC_3("PnP device failed to report resource data\n");
     return(1);
 }
 FUNC_2(VAR_2, VAR_0);
 VAR_8 = FUNC_1(VAR_3);
 if (VAR_4 != ((void*)0))
     VAR_4[VAR_6] = VAR_8;
    }
    return(0);
}
