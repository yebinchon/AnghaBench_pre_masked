
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {scalar_t__ os_zil; int os_logbias; } ;
typedef TYPE_1__ objset_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_2, uint64_t VAR_3)
{
 objset_t *VAR_4 = VAR_2;

 FUNC_0(VAR_3 == VAR_0 ||
     VAR_3 == VAR_1);
 VAR_4->os_logbias = VAR_3;
 if (VAR_4->os_zil)
  FUNC_1(VAR_4->os_zil, VAR_3);
}
