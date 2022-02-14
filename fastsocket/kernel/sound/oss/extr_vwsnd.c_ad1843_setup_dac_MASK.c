
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lithium_t ;







 int FUNC_0 (int) ;
 int FUNC_1 (char*,int *,int,int,int) ;
 int FUNC_2 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int,int *,int,int *,int) ;

__attribute__((used)) static void FUNC_5(lithium_t *VAR_3,
        int VAR_4,
        int VAR_5,
        int VAR_6)
{
 int VAR_7 = 0, VAR_8 = 0;

 FUNC_1("(lith=0x%p, framerate=%d, fmt=%d, channels=%d)\n",
       VAR_3, VAR_4, VAR_5, VAR_6);

 switch (VAR_5) {
 case 129: VAR_7 = 1; break;
 case 128: VAR_7 = 1; break;
 case 130: VAR_7 = 1; break;
 case 131: VAR_7 = 2; break;
 case 132: VAR_7 = 3; break;
 default: FUNC_0(0);
 }

 switch (VAR_6) {
 case 2: VAR_8 = 0; break;
 case 1: VAR_8 = 1; break;
 default: FUNC_0(0);
 }

 FUNC_2("ad_mode = %d, ad_fmt = %d\n", VAR_8, VAR_7);
 FUNC_0(VAR_4 >= 4000 && VAR_4 <= 49000);
 FUNC_3(VAR_3, &VAR_0, VAR_4);
 FUNC_4(VAR_3, 2,
      &VAR_2, VAR_8, &VAR_1, VAR_7);
}
