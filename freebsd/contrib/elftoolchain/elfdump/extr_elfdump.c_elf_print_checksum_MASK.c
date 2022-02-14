
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elfdump {int elf; int snl; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct elfdump *VAR_0)
{

 if (!FUNC_1(&VAR_0->snl))
  return;

 FUNC_0("\nelf checksum: %#lx\n", FUNC_2(VAR_0->elf));
}
