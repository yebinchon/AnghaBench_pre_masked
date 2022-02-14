
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct adapter*,int,int,int *,int *) ;
 int FUNC_3 (struct adapter*,int,int,int *,int *) ;

int FUNC_4(struct adapter *VAR_3, int VAR_4, u32 VAR_5, u32 VAR_6,
  __be32 *VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;




 if ((VAR_5 & 0x3) || (VAR_6 & 0x3))
  return -VAR_0;






 VAR_9 = FUNC_0(VAR_5, 64);
 VAR_10 = FUNC_1(VAR_5 + VAR_6, 64);
 VAR_11 = (VAR_5 - VAR_9)/sizeof(__be32);

 for (VAR_8 = VAR_9; VAR_8 < VAR_10; VAR_8 += 64, VAR_11 = 0) {
  __be32 VAR_13[16];




  if ((VAR_4 == VAR_1) || (VAR_4 == VAR_2))
   VAR_12 = FUNC_3(VAR_3, VAR_4 - VAR_1, VAR_8, VAR_13, ((void*)0));
  else
   VAR_12 = FUNC_2(VAR_3, VAR_4, VAR_8, VAR_13, ((void*)0));
  if (VAR_12)
   return VAR_12;




  while (VAR_11 < 16 && VAR_6 > 0) {
   *VAR_7++ = VAR_13[VAR_11++];
   VAR_6 -= sizeof(__be32);
  }
 }

 return 0;
}
