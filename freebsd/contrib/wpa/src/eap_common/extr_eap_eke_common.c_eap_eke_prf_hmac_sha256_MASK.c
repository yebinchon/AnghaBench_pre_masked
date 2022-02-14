
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int const*,size_t,int,int const**,size_t*,int*) ;
 int FUNC_1 (int*,int*,size_t) ;

__attribute__((used)) static int FUNC_2(const u8 *VAR_1, size_t VAR_2, const u8 *VAR_3,
       size_t VAR_4, u8 *VAR_5, size_t VAR_6)
{
 u8 VAR_7[VAR_0];
 u8 VAR_8;
 const u8 *VAR_9[3];
 size_t VAR_10[3];
 int VAR_11;

 VAR_8 = 0;
 VAR_9[0] = VAR_7;
 VAR_10[0] = VAR_0;
 VAR_9[1] = VAR_3;
 VAR_10[1] = VAR_4;
 VAR_9[2] = &VAR_8;
 VAR_10[2] = 1;

 while (VAR_6 > 0) {
  VAR_8++;
  if (VAR_8 == 1)
   VAR_11 = FUNC_0(VAR_1, VAR_2, 2, &VAR_9[1],
       &VAR_10[1], VAR_7);
  else
   VAR_11 = FUNC_0(VAR_1, VAR_2, 3, VAR_9, VAR_10,
       VAR_7);
  if (VAR_11 < 0)
   return -1;
  if (VAR_6 > VAR_0) {
   FUNC_1(VAR_5, VAR_7, VAR_0);
   VAR_5 += VAR_0;
   VAR_6 -= VAR_0;
  } else {
   FUNC_1(VAR_5, VAR_7, VAR_6);
   VAR_6 = 0;
  }
 }

 return 0;
}
