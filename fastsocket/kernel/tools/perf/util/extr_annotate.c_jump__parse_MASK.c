
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* offset; void* addr; } ;
struct ins_operands {char const* raw; TYPE_1__ target; } ;


 void* VAR_0 ;
 char* FUNC_0 (char const*,char) ;
 void* FUNC_1 (char const*,int *,int) ;

__attribute__((used)) static int FUNC_2(struct ins_operands *VAR_1)
{
 const char *VAR_2 = FUNC_0(VAR_1->raw, '+');

 VAR_1->target.addr = FUNC_1(VAR_1->raw, ((void*)0), 16);

 if (VAR_2++ != ((void*)0))
  VAR_1->target.offset = FUNC_1(VAR_2, ((void*)0), 16);
 else
  VAR_1->target.offset = VAR_0;

 return 0;
}
