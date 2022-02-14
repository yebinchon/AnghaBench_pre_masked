
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {unsigned int sf_size; } ;
struct adapter {TYPE_1__ params; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct adapter*,char*,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct adapter*,int,int) ;
 scalar_t__ FUNC_4 (int const*,int *,unsigned int) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (struct adapter*,unsigned int,int,int,unsigned int) ;
 unsigned int FUNC_7 (unsigned int) ;
 int FUNC_8 (struct adapter*,unsigned int,int ,int *,int) ;
 int FUNC_9 (struct adapter*,int ,int ) ;

int FUNC_10(struct adapter *VAR_6, unsigned int VAR_7,
     unsigned int VAR_8, const u8 *VAR_9, int VAR_10)
{
 int VAR_11;
 u32 VAR_12[VAR_3 / 4];
 unsigned int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17 = VAR_7 & 0xff;

 if (VAR_7 >= VAR_6->params.sf_size || VAR_17 + VAR_8 > VAR_3)
  return -VAR_1;

 VAR_16 = FUNC_7(VAR_7) | VAR_4;

 if ((VAR_11 = FUNC_6(VAR_6, 1, 0, 1, VAR_5)) != 0 ||
     (VAR_11 = FUNC_6(VAR_6, 4, 1, 1, VAR_16)) != 0)
  goto unlock;

 for (VAR_15 = VAR_8; VAR_15; VAR_15 -= VAR_14) {
  VAR_14 = FUNC_5(VAR_15, 4U);
  for (VAR_16 = 0, VAR_13 = 0; VAR_13 < VAR_14; ++VAR_13)
   VAR_16 = (VAR_16 << 8) + *VAR_9++;

  if (!VAR_10)
   VAR_16 = FUNC_2(VAR_16);

  VAR_11 = FUNC_6(VAR_6, VAR_14, VAR_14 != VAR_15, 1, VAR_16);
  if (VAR_11)
   goto unlock;
 }
 VAR_11 = FUNC_3(VAR_6, 8, 1);
 if (VAR_11)
  goto unlock;

 FUNC_9(VAR_6, VAR_0, 0);


 VAR_11 = FUNC_8(VAR_6, VAR_7 & ~0xff, FUNC_0(VAR_12), VAR_12,
       VAR_10);
 if (VAR_11)
  return VAR_11;

 if (FUNC_4(VAR_9 - VAR_8, (u8 *)VAR_12 + VAR_17, VAR_8)) {
  FUNC_1(VAR_6,
   "failed to correctly write the flash page at %#x\n",
   VAR_7);
  return -VAR_2;
 }
 return 0;

unlock:
 FUNC_9(VAR_6, VAR_0, 0);
 return VAR_11;
}
