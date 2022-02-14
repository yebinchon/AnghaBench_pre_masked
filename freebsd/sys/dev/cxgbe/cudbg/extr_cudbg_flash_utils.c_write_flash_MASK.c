
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned int u32 ;
struct TYPE_2__ {unsigned int sf_size; unsigned int sf_nsec; } ;
struct adapter {TYPE_1__ params; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct adapter*,unsigned int,unsigned int) ;
 int FUNC_2 (struct adapter*,unsigned int,unsigned int,int *,int ) ;

int FUNC_3(struct adapter *VAR_2, u32 VAR_3, void *VAR_4, u32 VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7, VAR_8;
 unsigned int VAR_9;
 int VAR_10 = 0;

 u8 *VAR_11 = (u8 *)VAR_4;

 VAR_9 = VAR_2->params.sf_size/VAR_2->params.sf_nsec;

 VAR_6 = VAR_3 * VAR_0;
 VAR_7 = FUNC_0(VAR_5,
   VAR_9);

 VAR_10 = FUNC_1(VAR_2, VAR_3,
     VAR_3 + VAR_7 - 1);





 if (VAR_10 || VAR_5 == 0)
  goto out;


 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7 += VAR_1) {
  if ((VAR_5 - VAR_7) < VAR_1)
   VAR_8 = VAR_5 - VAR_7;
  else
   VAR_8 = VAR_1;
  VAR_10 = FUNC_2(VAR_2, VAR_6, VAR_8, VAR_11, 0);
  if (VAR_10)
   goto out;

  VAR_6 += VAR_8;
  VAR_11 += VAR_8;
 }

 return 0;
out:
 return VAR_10;
}
