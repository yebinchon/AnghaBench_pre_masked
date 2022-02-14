
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;
 int FUNC_2 (int,int,int,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static inline int FUNC_3(int VAR_6)
{
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 VAR_8 = VAR_5;
 if (!VAR_8)
  VAR_8 = 4 * (FUNC_0(VAR_3) + 1);
 VAR_10 = (VAR_2 << VAR_4)/VAR_6;
 VAR_8 = FUNC_1(VAR_8, VAR_10);

 while (VAR_8 > 1) {
  VAR_9 = 16;
  while (VAR_9 >= 4) {
   VAR_7 = FUNC_2(VAR_6, VAR_8,
      VAR_4, VAR_9);
   if (VAR_7 <= VAR_4)
    return VAR_7;
   VAR_9 /= 2;
  }
  VAR_8--;
 }





 VAR_7 = FUNC_2(VAR_6, 1, VAR_4, 1);
 if (VAR_7 <= VAR_4)
  return VAR_7;




 VAR_7 = FUNC_2(VAR_6, 1, VAR_1, 1);
 if (VAR_7 < VAR_1)
  return VAR_7;
 return -VAR_0;
}
