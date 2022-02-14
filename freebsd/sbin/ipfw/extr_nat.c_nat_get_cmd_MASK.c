
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct nat44_cfg_nat {size_t size; int name; } ;
struct TYPE_7__ {int length; } ;
struct TYPE_8__ {int name; TYPE_1__ head; } ;
struct TYPE_9__ {int opheader; TYPE_2__ ntlv; } ;
typedef TYPE_3__ ipfw_obj_header ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int,size_t) ;
 scalar_t__ FUNC_1 (int ,int *,size_t*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_4(char *VAR_2, uint16_t VAR_3, ipfw_obj_header **VAR_4)
{
 ipfw_obj_header *VAR_5;
 struct nat44_cfg_nat *VAR_6;
 size_t VAR_7;


 VAR_7 = sizeof(*VAR_5) + sizeof(*VAR_6) + 128;

 for (;;) {
  if ((VAR_5 = FUNC_0(1, VAR_7)) == ((void*)0))
   return (VAR_0);
  VAR_6 = (struct nat44_cfg_nat *)(VAR_5 + 1);
  VAR_5->ntlv.head.length = sizeof(VAR_5->ntlv);
  FUNC_3(VAR_5->ntlv.name, VAR_2, sizeof(VAR_5->ntlv.name));
  FUNC_3(VAR_6->name, VAR_2, sizeof(VAR_6->name));

  if (FUNC_1(VAR_3, &VAR_5->opheader, &VAR_7) != 0) {
   VAR_7 = VAR_6->size;
   FUNC_2(VAR_5);
   if (VAR_1 == VAR_0)
    continue;
   return (VAR_1);
  }

  *VAR_4 = VAR_5;
  break;
 }

 return (0);
}
