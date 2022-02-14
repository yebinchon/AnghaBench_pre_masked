
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mii_bitbang_ops_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int ,int ) ;

int
FUNC_3(device_t VAR_7, mii_bitbang_ops_t VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11, VAR_12, VAR_13;

 FUNC_2(VAR_7, VAR_8);

 FUNC_1(VAR_7, VAR_8, VAR_5, 2);
 FUNC_1(VAR_7, VAR_8, VAR_4, 2);
 FUNC_1(VAR_7, VAR_8, VAR_9, 5);
 FUNC_1(VAR_7, VAR_8, VAR_10, 5);


 FUNC_0(VAR_2);


 FUNC_0(VAR_2 | VAR_0);
 FUNC_0(VAR_2);


 VAR_12 = VAR_6 & VAR_1;


 FUNC_0(VAR_2 | VAR_0);
 FUNC_0(VAR_2);

 VAR_13 = 0;
 for (VAR_11 = 0; VAR_11 < 16; VAR_11++) {
  VAR_13 <<= 1;

  if (VAR_12 == 0 && (VAR_6 & VAR_1) != 0)
   VAR_13 |= 1;

  FUNC_0(VAR_2 | VAR_0);
  FUNC_0(VAR_2);
 }


 FUNC_0(VAR_3);

 return (VAR_12 != 0 ? 0 : VAR_13);
}
