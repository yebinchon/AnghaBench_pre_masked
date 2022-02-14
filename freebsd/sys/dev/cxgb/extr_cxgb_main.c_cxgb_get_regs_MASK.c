
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct ch_ifconf_regs {int version; } ;
struct TYPE_6__ {int rev; } ;
struct TYPE_7__ {TYPE_1__ params; } ;
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
 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_2__*,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_5(adapter_t *VAR_11, struct ch_ifconf_regs *VAR_12, uint8_t *VAR_13)
{







 VAR_12->version = 3 | (VAR_11->params.rev << 10) | (FUNC_2(VAR_11) << 31);






 FUNC_3(VAR_13, 0, FUNC_1());
 FUNC_4(VAR_11, VAR_13, 0, VAR_4);
 FUNC_4(VAR_11, VAR_13, VAR_3, VAR_6);
 FUNC_4(VAR_11, VAR_13, VAR_7, VAR_2);
 FUNC_4(VAR_11, VAR_13, VAR_1, VAR_0);
 FUNC_4(VAR_11, VAR_13, VAR_5, VAR_9);
 FUNC_4(VAR_11, VAR_13, VAR_10,
         FUNC_0(VAR_9, 1));
 FUNC_4(VAR_11, VAR_13, FUNC_0(VAR_10, 1),
         FUNC_0(VAR_8, 1));
}
