
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,int ,char*,char const**) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 int FUNC_5 (char const*,char**,int) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_3, u_int *VAR_4)
{
 const char *VAR_5;
 u_int VAR_6, VAR_7, VAR_8, VAR_9;
 u_int32_t VAR_10;
 char *VAR_11;

 if (FUNC_3("hifn", FUNC_1(VAR_3),
     "pllconfig", &VAR_5))
  VAR_5 = "ext66";
 VAR_8 = 33, VAR_9 = 66;
 VAR_10 = 0;
 if (FUNC_4(VAR_5, "ext", 3) == 0) {
  VAR_5 += 3;
  VAR_10 |= VAR_2;
  switch (FUNC_2(VAR_3)) {
  case 129:
  case 128:
   VAR_8 = 20, VAR_9 = 100;
   break;





  }
 } else if (FUNC_4(VAR_5, "pci", 3) == 0)
  VAR_5 += 3;
 VAR_6 = FUNC_5(VAR_5, &VAR_11, 10);
 if (VAR_11 == VAR_5)
  VAR_6 = 66;
 else
  VAR_6 = FUNC_0(VAR_3, "frequency", VAR_6, VAR_8, VAR_9);





 VAR_7 = FUNC_0(VAR_3, "PLL divisor", (266 / VAR_6) &~ 1, 2, 12);
 VAR_10 |= (VAR_7 / 2 - 1) << VAR_1;
 if (VAR_7 > 8)
  VAR_10 |= VAR_0;
 *VAR_4 = VAR_10;
}
