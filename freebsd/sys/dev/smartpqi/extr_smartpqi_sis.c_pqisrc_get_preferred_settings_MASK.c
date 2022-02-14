
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int max_cmd_size; int max_fib_size; } ;
struct TYPE_6__ {TYPE_1__ pref_settings; } ;
typedef TYPE_2__ pqisrc_softstate_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,int*) ;

int FUNC_3(pqisrc_softstate_t *VAR_2)
{
 int VAR_3 = VAR_0;
 uint32_t VAR_4[6] = {0};

 FUNC_0("IN\n");

 VAR_4[0] = VAR_1;
 VAR_3 = FUNC_2(VAR_2, VAR_4);
 if (!VAR_3) {

  VAR_2->pref_settings.max_cmd_size = VAR_4[1] >> 16;

  VAR_2->pref_settings.max_fib_size = VAR_4[1] & 0x0000FFFF;
  FUNC_1("cmd size = %x, fib size = %x\n",
   VAR_2->pref_settings.max_cmd_size,
   VAR_2->pref_settings.max_fib_size);
 }

 FUNC_0("OUT\n");
 return VAR_3;
}
