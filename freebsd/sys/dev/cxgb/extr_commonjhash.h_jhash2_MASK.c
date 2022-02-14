
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;

__attribute__((used)) static inline u32 FUNC_1(u32 *VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_4 = VAR_5 = VAR_0;
 VAR_6 = VAR_3;
 VAR_7 = VAR_2;

 while (VAR_7 >= 3) {
  VAR_4 += VAR_1[0];
  VAR_5 += VAR_1[1];
  VAR_6 += VAR_1[2];
  FUNC_0(VAR_4, VAR_5, VAR_6);
  VAR_1 += 3; VAR_7 -= 3;
 }

 VAR_6 += VAR_2 * 4;

 switch (VAR_7) {
 case 2 : VAR_5 += VAR_1[1];
 case 1 : VAR_4 += VAR_1[0];
 };

 FUNC_0(VAR_4,VAR_5,VAR_6);

 return VAR_6;
}
