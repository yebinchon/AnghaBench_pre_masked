
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int isc_session_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3(isc_session_t *VAR_0, int VAR_1, u_char *VAR_2)
{
     FUNC_0(8);
     FUNC_1(4, "lun=%d", VAR_1);







     if(VAR_1 < 256) {
   VAR_2[0] = 0;
   VAR_2[1] = VAR_1;
     } else
     if(VAR_1 < 16384) {
   VAR_2[0] = (1 << 5) | ((VAR_1 >> 8) & 0x3f);
   VAR_2[1] = VAR_1 & 0xff;
     }
     else {
   FUNC_2("lun %d: is unsupported!", VAR_1);
   return -1;
     }

     return 0;
}
