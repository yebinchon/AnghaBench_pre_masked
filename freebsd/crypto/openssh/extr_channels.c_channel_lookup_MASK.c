
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct TYPE_4__ {int type; } ;
typedef TYPE_1__ Channel ;
 TYPE_1__* FUNC_0 (struct ssh*,int) ;
 int FUNC_1 (char*,int,int) ;

Channel *
FUNC_2(struct ssh *VAR_0, int VAR_1)
{
 Channel *VAR_2;

 if ((VAR_2 = FUNC_0(VAR_0, VAR_1)) == ((void*)0))
  return ((void*)0);

 switch (VAR_2->type) {
 case 128:
 case 134:
 case 136:
 case 135:
 case 129:
 case 130:
 case 131:
 case 132:
 case 137:
 case 133:
  return VAR_2;
 }
 FUNC_1("Non-public channel %d, type %d.", VAR_1, VAR_2->type);
 return ((void*)0);
}
