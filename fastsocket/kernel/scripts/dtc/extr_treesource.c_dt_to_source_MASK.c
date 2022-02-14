
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; scalar_t__ address; } ;
struct reserve_info {char* label; TYPE_1__ re; struct reserve_info* next; } ;
struct boot_info {int dt; struct reserve_info* reservelist; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ,int ) ;

void FUNC_2(FILE *VAR_0, struct boot_info *VAR_1)
{
 struct reserve_info *VAR_2;

 FUNC_0(VAR_0, "/dts-v1/;\n\n");

 for (VAR_2 = VAR_1->reservelist; VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_2->label)
   FUNC_0(VAR_0, "%s: ", VAR_2->label);
  FUNC_0(VAR_0, "/memreserve/\t0x%016llx 0x%016llx;\n",
   (unsigned long long)VAR_2->re.address,
   (unsigned long long)VAR_2->re.size);
 }

 FUNC_1(VAR_0, VAR_1->dt, 0);
}
