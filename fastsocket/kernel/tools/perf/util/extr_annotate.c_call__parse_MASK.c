
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* addr; int * name; } ;
struct ins_operands {char* raw; TYPE_1__ target; } ;


 char* FUNC_0 (char*,char) ;
 int * FUNC_1 (char*) ;
 void* FUNC_2 (char*,char**,int) ;

__attribute__((used)) static int FUNC_3(struct ins_operands *VAR_0)
{
 char *VAR_1, *VAR_2, *VAR_3;

 VAR_0->target.addr = FUNC_2(VAR_0->raw, &VAR_1, 16);

 VAR_3 = FUNC_0(VAR_1, '<');
 if (VAR_3 == ((void*)0))
  goto indirect_call;

 VAR_3++;

 VAR_2 = FUNC_0(VAR_3, '>');
 if (VAR_2 == ((void*)0))
  return -1;

 *VAR_2 = '\0';
 VAR_0->target.name = FUNC_1(VAR_3);
 *VAR_2 = '>';

 return VAR_0->target.name == ((void*)0) ? -1 : 0;

indirect_call:
 VAR_2 = FUNC_0(VAR_1, '(');
 if (VAR_2 != ((void*)0)) {
  VAR_0->target.addr = 0;
  return 0;
 }

 VAR_2 = FUNC_0(VAR_1, '*');
 if (VAR_2 == ((void*)0))
  return -1;

 VAR_0->target.addr = FUNC_2(VAR_2 + 1, ((void*)0), 16);
 return 0;
}
