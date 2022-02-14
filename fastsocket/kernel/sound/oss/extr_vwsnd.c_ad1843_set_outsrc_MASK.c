
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lithium_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,int,int *,int,int *,int) ;

__attribute__((used)) static int FUNC_1(lithium_t *VAR_13, int VAR_14)
{
 int VAR_15, VAR_16, VAR_17, VAR_18;

 if (VAR_14 & ~(VAR_4 | VAR_2 |
       VAR_1 | VAR_3))
  return -VAR_0;
 VAR_15 = (VAR_14 & VAR_4) ? 0 : 1;
 VAR_16 = (VAR_14 & VAR_2) ? 0 : 1;
 VAR_17 = (VAR_14 & VAR_3) ? 0 : 1;
 VAR_18 = (VAR_14 & VAR_1) ? 0 : 1;

 FUNC_0(VAR_13, 2, &VAR_5, VAR_15, &VAR_9, VAR_15);
 FUNC_0(VAR_13, 2, &VAR_7, VAR_16, &VAR_11, VAR_16);
 FUNC_0(VAR_13, 2, &VAR_8, VAR_18, &VAR_12, VAR_18);
 FUNC_0(VAR_13, 2, &VAR_6, VAR_17, &VAR_10, VAR_17);

 return VAR_14;
}
