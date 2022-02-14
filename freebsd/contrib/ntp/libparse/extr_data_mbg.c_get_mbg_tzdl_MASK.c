
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* name; int tm_off; int tm_on; void* offs_dl; void* offs; } ;
typedef TYPE_1__ TZDL ;


 void* FUNC_0 (unsigned char**) ;
 int FUNC_1 (unsigned char**,int *) ;
 int FUNC_2 (unsigned char**,char*) ;

void
FUNC_3(
 unsigned char **VAR_0,
 TZDL *VAR_1
 )
{
  VAR_1->offs = FUNC_0(VAR_0);
  VAR_1->offs_dl = FUNC_0(VAR_0);
  FUNC_1(VAR_0, &VAR_1->tm_on);
  FUNC_1(VAR_0, &VAR_1->tm_off);
  FUNC_2(VAR_0, (char *)VAR_1->name[0]);
  FUNC_2(VAR_0, (char *)VAR_1->name[1]);
}
