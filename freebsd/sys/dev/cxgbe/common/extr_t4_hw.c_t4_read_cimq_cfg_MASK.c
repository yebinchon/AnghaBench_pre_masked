
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct adapter {TYPE_1__* chip_params; } ;
struct TYPE_2__ {int cim_num_obq; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (struct adapter*,int ) ;
 int FUNC_5 (struct adapter*,int ,int) ;

void FUNC_6(struct adapter *VAR_5, u16 *VAR_6, u16 *VAR_7, u16 *VAR_8)
{
 unsigned int VAR_9, VAR_10;
 int VAR_11 = VAR_5->chip_params->cim_num_obq;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  FUNC_5(VAR_5, VAR_1, VAR_3 |
        FUNC_3(VAR_9));
  VAR_10 = FUNC_4(VAR_5, VAR_0);

  *VAR_6++ = FUNC_0(VAR_10) * 256;
  *VAR_7++ = FUNC_1(VAR_10) * 256;
  *VAR_8++ = FUNC_2(VAR_10) * 8;
 }
 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
  FUNC_5(VAR_5, VAR_1, VAR_4 |
        FUNC_3(VAR_9));
  VAR_10 = FUNC_4(VAR_5, VAR_0);

  *VAR_6++ = FUNC_0(VAR_10) * 256;
  *VAR_7++ = FUNC_1(VAR_10) * 256;
 }
}
