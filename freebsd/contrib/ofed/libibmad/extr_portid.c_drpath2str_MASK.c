
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int drslid; int drdlid; int* p; int cnt; } ;
typedef TYPE_1__ ib_dr_path_t ;


 int FUNC_0 (char*,size_t,char*,int,...) ;

char *FUNC_1(ib_dr_path_t * VAR_0, char *VAR_1, size_t VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = FUNC_0(VAR_1, VAR_2, "slid %u; dlid %u; %d",
     VAR_0->drslid, VAR_0->drdlid, VAR_0->p[0]);
 if (VAR_4 >= (int)VAR_2)
  return VAR_1;
 for (VAR_3 = 1; VAR_3 <= VAR_0->cnt; VAR_3++) {
  VAR_4 += FUNC_0(VAR_1 + VAR_4, VAR_2 - VAR_4, ",%d", VAR_0->p[VAR_3]);
  if (VAR_4 >= (int)VAR_2)
   break;
 }
 return (VAR_1);
}
