
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_11__ {scalar_t__ isp_state; } ;
typedef TYPE_1__ ispsoftc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ,char*,int,int) ;

__attribute__((used)) static void
FUNC_8(ispsoftc_t *VAR_9)
{
 uint16_t VAR_10, VAR_11, VAR_12;

 VAR_10 = FUNC_0(VAR_9, FUNC_3(VAR_9, VAR_0));
 VAR_11 = FUNC_0(VAR_9, FUNC_3(VAR_9, VAR_1));
 FUNC_7(VAR_9, VAR_5, "ISR 0x%x SEMA 0x%x", VAR_10, VAR_11);
 VAR_10 &= FUNC_1(VAR_9);
 VAR_11 &= VAR_2;
 if (VAR_10 == 0 && VAR_11 == 0)
  return;
 if (VAR_11 != 0) {
  VAR_12 = FUNC_0(VAR_9, FUNC_3(VAR_9, VAR_8));
  if (VAR_12 & VAR_7)
   FUNC_5(VAR_9, VAR_12);
  else
   FUNC_4(VAR_9, VAR_12);
  if (VAR_9->isp_state == VAR_6)
   FUNC_6(VAR_9);
 } else
  FUNC_6(VAR_9);
 FUNC_2(VAR_9, VAR_3, VAR_4);
 if (VAR_11)
  FUNC_2(VAR_9, VAR_1, 0);
}
