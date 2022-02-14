
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * raw; int name; int addr; } ;
struct TYPE_3__ {int name; int addr; int * raw; } ;
struct ins_operands {char* raw; TYPE_2__ source; TYPE_1__ target; } ;


 int FUNC_0 (int *,char*,int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char) ;
 char* FUNC_3 (char*,char) ;
 void* FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct ins_operands *VAR_0)
{
 char *VAR_1 = FUNC_3(VAR_0->raw, ','), *VAR_2, *VAR_3, VAR_4;

 if (VAR_1 == ((void*)0))
  return -1;

 *VAR_1 = '\0';
 VAR_0->source.raw = FUNC_4(VAR_0->raw);
 *VAR_1 = ',';

 if (VAR_0->source.raw == ((void*)0))
  return -1;

 VAR_2 = ++VAR_1;

 while (VAR_1[0] != '\0' && !FUNC_2(VAR_1[0]))
  ++VAR_1;
 VAR_4 = *VAR_1;
 *VAR_1 = '\0';

 VAR_0->target.raw = FUNC_4(VAR_2);
 *VAR_1 = VAR_4;

 if (VAR_0->target.raw == ((void*)0))
  goto out_free_source;

 VAR_3 = FUNC_3(VAR_1, '#');
 if (VAR_3 == ((void*)0))
  return 0;

 while (VAR_3[0] != '\0' && FUNC_2(VAR_3[0]))
  ++VAR_3;

 FUNC_0(VAR_0->source.raw, VAR_3, &VAR_0->source.addr, &VAR_0->source.name);
 FUNC_0(VAR_0->target.raw, VAR_3, &VAR_0->target.addr, &VAR_0->target.name);

 return 0;

out_free_source:
 FUNC_1(VAR_0->source.raw);
 VAR_0->source.raw = ((void*)0);
 return -1;
}
