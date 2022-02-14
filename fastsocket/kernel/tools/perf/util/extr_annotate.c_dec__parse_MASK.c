
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; int addr; int * raw; } ;
struct ins_operands {char* raw; TYPE_1__ target; } ;


 int FUNC_0 (int *,char*,int *,int *) ;
 scalar_t__ FUNC_1 (char) ;
 char* FUNC_2 (char*,char) ;
 int * FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct ins_operands *VAR_0)
{
 char *VAR_1, *VAR_2, *VAR_3, VAR_4;

 VAR_1 = VAR_3 = VAR_0->raw;

 while (VAR_3[0] != '\0' && !FUNC_1(VAR_3[0]))
  ++VAR_3;
 VAR_4 = *VAR_3;
 *VAR_3 = '\0';

 VAR_0->target.raw = FUNC_3(VAR_1);
 *VAR_3 = VAR_4;

 if (VAR_0->target.raw == ((void*)0))
  return -1;

 VAR_2 = FUNC_2(VAR_3, '#');
 if (VAR_2 == ((void*)0))
  return 0;

 while (VAR_2[0] != '\0' && FUNC_1(VAR_2[0]))
  ++VAR_2;

 FUNC_0(VAR_0->target.raw, VAR_2, &VAR_0->target.addr, &VAR_0->target.name);

 return 0;
}
