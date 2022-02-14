
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {int cnt; int drdlid; int drslid; scalar_t__* p; } ;
typedef TYPE_1__ ib_dr_path_t ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (char*) ;

int FUNC_5(ib_dr_path_t * VAR_0, char *VAR_1, int VAR_2, int VAR_3)
{
 char *VAR_4, *VAR_5;
 char *VAR_6;

 VAR_0->cnt = -1;

 if (!VAR_1 || !(VAR_6 = FUNC_4(VAR_1)))
  goto Exit;

 FUNC_0("DR str: %s", VAR_1);

 VAR_5 = VAR_6;

 while (VAR_5 && *VAR_5) {
  if ((VAR_4 = FUNC_3(VAR_5, ',')))
   *VAR_4 = 0;
  VAR_0->p[++VAR_0->cnt] = (uint8_t) FUNC_1(VAR_5);
  if (!VAR_4)
   break;
  VAR_5 = VAR_4 + 1;
 }
 FUNC_2(VAR_6);

Exit:
 VAR_0->drdlid = VAR_3 ? VAR_3 : 0xffff;
 VAR_0->drslid = VAR_2 ? VAR_2 : 0xffff;

 return VAR_0->cnt;
}
