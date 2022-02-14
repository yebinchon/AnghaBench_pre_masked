
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct adapter {TYPE_1__* chip_params; } ;
struct TYPE_2__ {int cim_num_obq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 void* FUNC_4 (struct adapter*,int ) ;
 int FUNC_5 (struct adapter*,int ,int ,int ,int,int) ;
 int FUNC_6 (struct adapter*,int ,int) ;

int FUNC_7(struct adapter *VAR_8, unsigned int VAR_9, u32 *VAR_10, size_t VAR_11)
{
 int VAR_12, VAR_13;
 unsigned int VAR_14, VAR_15, VAR_16;
 int VAR_17 = VAR_8->chip_params->cim_num_obq;

 if ((VAR_9 > (VAR_17 - 1)) || (VAR_11 & 3))
  return -VAR_4;

 FUNC_6(VAR_8, VAR_3, VAR_7 |
       FUNC_3(VAR_9));
 VAR_15 = FUNC_4(VAR_8, VAR_2);

 VAR_14 = FUNC_0(VAR_15) * 64;
 VAR_16 = FUNC_1(VAR_15) * 64;
 if (VAR_11 > VAR_16)
  VAR_11 = VAR_16;

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++, VAR_14++) {
  FUNC_6(VAR_8, VAR_0, FUNC_2(VAR_14) |
        VAR_6);
  VAR_13 = FUNC_5(VAR_8, VAR_0, VAR_5, 0,
          2, 1);
  if (VAR_13)
   return VAR_13;
  *VAR_10++ = FUNC_4(VAR_8, VAR_1);
 }
 FUNC_6(VAR_8, VAR_0, 0);
 return VAR_12;
}
