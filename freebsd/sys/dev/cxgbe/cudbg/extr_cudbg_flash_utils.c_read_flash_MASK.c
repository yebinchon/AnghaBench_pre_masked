
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct adapter*,unsigned int,unsigned int,int*,int ) ;

int FUNC_1(struct adapter *VAR_2, u32 VAR_3 , void *VAR_4, u32 VAR_5,
  u32 VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9;
 int VAR_10;
 u32 *VAR_11 = (u32 *)VAR_4;
 VAR_7 = VAR_3 * VAR_0 + VAR_6;
 VAR_5 = VAR_5 / 4;
 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8 += VAR_1) {
  if ((VAR_5 - VAR_8) < VAR_1)
   VAR_9 = VAR_5 - VAR_8;
  else
   VAR_9 = VAR_1;
  VAR_10 = FUNC_0(VAR_2, VAR_7, VAR_9, VAR_11, 0);
  if (VAR_10)
   goto out;

  VAR_7 = VAR_7 + (VAR_9*4);
  VAR_11 += VAR_9;
 }

 return 0;
out:
 return VAR_10;
}
