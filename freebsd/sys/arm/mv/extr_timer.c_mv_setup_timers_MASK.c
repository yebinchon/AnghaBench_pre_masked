
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {TYPE_1__* config; } ;
struct TYPE_3__ {scalar_t__ soc_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 TYPE_2__* VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_4(void)
{
 uint32_t VAR_10;

 FUNC_3(1, VAR_6);
 FUNC_1(1, VAR_6);
 VAR_10 = FUNC_0();
 VAR_10 &= ~(VAR_2 | VAR_1);
 VAR_10 |= VAR_5 | VAR_4;

 if (VAR_8->config->soc_family == VAR_7) {

  VAR_10 |= VAR_0 | VAR_3;
 }

 FUNC_2(VAR_10);
 VAR_9 = 1;
}
