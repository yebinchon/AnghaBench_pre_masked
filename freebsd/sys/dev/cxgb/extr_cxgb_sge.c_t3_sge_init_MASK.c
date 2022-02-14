
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int ;
struct sge_params {int dummy; } ;
struct TYPE_6__ {scalar_t__ rev; } ;
struct TYPE_7__ {int flags; TYPE_1__ params; } ;
typedef TYPE_2__ adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;

void
FUNC_10(adapter_t *VAR_26, struct sge_params *VAR_27)
{
 u_int VAR_28, VAR_29;

 VAR_29 = 0;

 VAR_28 = VAR_14 | FUNC_4(2) | VAR_17 | VAR_10 |
        VAR_13 | VAR_12 | VAR_21 | VAR_16 |
        FUNC_2(VAR_22 - 11) | VAR_11 |
        FUNC_7(VAR_29 ? VAR_29 - 1 : 0) | VAR_18;



 if (VAR_26->params.rev > 0) {
  if (!(VAR_26->flags & (VAR_25 | VAR_24)))
   VAR_28 |= VAR_19 | VAR_20;
 }
 FUNC_9(VAR_26, VAR_1, VAR_28);
 FUNC_9(VAR_26, VAR_3, FUNC_1(512) |
       FUNC_3(512));
 FUNC_9(VAR_26, VAR_9, FUNC_8(VAR_26) / 10);
 FUNC_9(VAR_26, VAR_0, FUNC_5(32) |
       FUNC_6(200 * FUNC_8(VAR_26)));
 FUNC_9(VAR_26, VAR_4,
       VAR_26->params.rev < VAR_23 ? 1000 : 500);
 FUNC_9(VAR_26, VAR_5, 256);
 FUNC_9(VAR_26, VAR_6, 1000);
 FUNC_9(VAR_26, VAR_7, 256);
 FUNC_9(VAR_26, VAR_8, FUNC_0(0xfff));
 FUNC_9(VAR_26, VAR_2, 63 * 1024);
}
