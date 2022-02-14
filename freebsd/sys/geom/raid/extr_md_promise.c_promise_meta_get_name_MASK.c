
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct promise_raid_conf {int name; } ;


 int FUNC_0 (char*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct promise_raid_conf *VAR_0, char *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1, VAR_0->name, 32);
 VAR_1[32] = 0;
 for (VAR_2 = 31; VAR_2 >= 0; VAR_2--) {
  if (VAR_1[VAR_2] > 0x20)
   break;
  VAR_1[VAR_2] = 0;
 }
}
