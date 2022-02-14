
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mtpav {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mtpav*,int ) ;
 int FUNC_1 (struct mtpav*,int ,int) ;
 int FUNC_2 (struct mtpav*) ;

__attribute__((used)) static void FUNC_3(struct mtpav *VAR_3, u8 VAR_4)
{
 u8 VAR_5;
 u8 VAR_6;
 u8 VAR_7;

 FUNC_2(VAR_3);



 VAR_5 = FUNC_0(VAR_3, VAR_0);
 VAR_6 = VAR_5 & (VAR_2 ^ 0xff);
 VAR_7 = VAR_5 | VAR_2;

 FUNC_1(VAR_3, VAR_1, VAR_4);
 FUNC_1(VAR_3, VAR_0, VAR_6);

 FUNC_1(VAR_3, VAR_0, VAR_7);

}
