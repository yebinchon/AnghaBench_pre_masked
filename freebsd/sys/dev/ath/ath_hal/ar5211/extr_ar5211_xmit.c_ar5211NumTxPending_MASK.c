
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t u_int ;
struct ath_hal {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ah_txq; } ;
struct TYPE_3__ {scalar_t__ tqi_type; } ;


 TYPE_2__* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct ath_hal*,int ) ;

uint32_t
FUNC_4(struct ath_hal *VAR_4, u_int VAR_5)
{
 uint32_t VAR_6;

 FUNC_2(VAR_5 < VAR_2);
 FUNC_2(FUNC_0(VAR_4)->ah_txq[VAR_5].tqi_type != VAR_3);

 VAR_6 = FUNC_3(VAR_4, FUNC_1(VAR_5)) & VAR_0;





 if (VAR_6 == 0 && (FUNC_3(VAR_4, VAR_1) & (1<<VAR_5)))
  VAR_6 = 1;
 return VAR_6;
}
