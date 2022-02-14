
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct mss_info {int dummy; } ;
struct mss_chinfo {int fmt; struct mss_info* parent; } ;



 int FUNC_0 (int) ;
 int FUNC_1 (int) ;





 int FUNC_2 (struct mss_info*) ;
 int FUNC_3 (struct mss_info*) ;
 int FUNC_4 (struct mss_info*,int) ;
 int FUNC_5 (struct mss_info*,int) ;
 int FUNC_6 (struct mss_info*,int,int) ;

__attribute__((used)) static int
FUNC_7(struct mss_chinfo *VAR_0, u_int32_t VAR_1)
{
     struct mss_info *VAR_2 = VAR_0->parent;
     int VAR_3, VAR_4 = FUNC_1(VAR_1);
     static int VAR_5[] =
         {128, 131, 130, 133,
  -1, 132, 129, -1};

 VAR_0->fmt = VAR_1;
     for (VAR_3 = 0; VAR_3 < 8; VAR_3++) if (VAR_4 == VAR_5[VAR_3]) break;
     VAR_4 = VAR_3 << 1;
     if (FUNC_0(VAR_1) > 1) VAR_4 |= 1;
     VAR_4 <<= 4;
     FUNC_2(VAR_2);
     FUNC_6(VAR_2, 8, (FUNC_4(VAR_2, 8) & 0x0f) | VAR_4);
 FUNC_5(VAR_2, 10000);
     if (FUNC_4(VAR_2, 12) & 0x40) {
  FUNC_6(VAR_2, 28, VAR_4);
  FUNC_5(VAR_2, 10000);
 }
     FUNC_3(VAR_2);
     return VAR_1;
}
