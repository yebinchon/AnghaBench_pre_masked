
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int typecookie; int const cmd; int arglen; } ;
struct ng_mesg {TYPE_1__ header; scalar_t__ data; } ;
struct ng_hole_hookstat {int dummy; } ;
typedef int node_p ;
typedef int item_p ;
typedef int * hook_p ;
typedef TYPE_2__* hinfo_p ;
struct TYPE_4__ {struct ng_hole_hookstat stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct ng_mesg*) ;




 int FUNC_1 (struct ng_mesg*) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 int FUNC_4 (int,int ,int ,struct ng_mesg*) ;
 int FUNC_5 (struct ng_hole_hookstat*,scalar_t__,int) ;
 int FUNC_6 (struct ng_hole_hookstat*,int) ;
 int * FUNC_7 (int ,char*) ;

__attribute__((used)) static int
FUNC_8(node_p VAR_5, item_p VAR_6, hook_p VAR_7)
{
 struct ng_mesg *VAR_8;
 struct ng_mesg *VAR_9 = ((void*)0);
 int VAR_10 = 0;
 struct ng_hole_hookstat *VAR_11;
 hook_p VAR_12;

 FUNC_0(VAR_6, VAR_8);
 switch (VAR_8->header.typecookie) {
 case 130:
  switch (VAR_8->header.cmd) {
  case 128:
  case 131:
  case 129:

   if (VAR_8->header.arglen != VAR_4) {
    VAR_10 = VAR_0;
    break;
   }

   VAR_12 = FUNC_7(VAR_5, (char *)VAR_8->data);
   if (VAR_12 == ((void*)0)) {
    VAR_10 = VAR_1;
    break;
   }
   VAR_11 = &((hinfo_p)FUNC_2(VAR_12))->stats;

   if (VAR_8->header.cmd != 131) {
    FUNC_3(VAR_9, VAR_8, sizeof(*VAR_11),
        VAR_3);
    if (VAR_9 == ((void*)0)) {
     VAR_10 = VAR_2;
     break;
    }
    FUNC_5(VAR_11, VAR_9->data, sizeof(*VAR_11));
   }

   if (VAR_8->header.cmd != 128)
    FUNC_6(VAR_11, sizeof(*VAR_11));
   break;
  default:
   VAR_10 = VAR_0;
   break;
  }
  break;
 default:
  VAR_10 = VAR_0;
  break;
 }
 FUNC_4(VAR_10, VAR_5, VAR_6, VAR_9);
 FUNC_1(VAR_8);
 return (VAR_10);
}
