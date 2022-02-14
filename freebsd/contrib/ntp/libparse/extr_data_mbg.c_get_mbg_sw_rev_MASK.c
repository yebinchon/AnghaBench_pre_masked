
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; int code; } ;
typedef TYPE_1__ SW_REV ;


 int FUNC_0 (unsigned char**) ;
 int FUNC_1 (int ,unsigned char*,int) ;

void
FUNC_2(
 unsigned char **VAR_0,
 SW_REV *VAR_1
 )
{
  VAR_1->code = FUNC_0(VAR_0);
  FUNC_1(VAR_1->name, *VAR_0, sizeof(VAR_1->name));
  *VAR_0 += sizeof(VAR_1->name);
}
