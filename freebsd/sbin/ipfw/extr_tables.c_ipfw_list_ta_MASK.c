
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* algoname; int refcnt; int type; } ;
typedef TYPE_1__ ipfw_ta_info ;
struct TYPE_6__ {int count; scalar_t__ objsize; } ;
typedef TYPE_2__ ipfw_obj_lheader ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,char const*,...) ;
 int FUNC_4 (TYPE_2__**) ;
 int VAR_1 ;

void
FUNC_5(int VAR_2, char *VAR_3[])
{
 ipfw_obj_lheader *VAR_4;
 ipfw_ta_info *VAR_5;
 int VAR_6, VAR_7;
 const char *VAR_8;

 VAR_6 = FUNC_4(&VAR_4);
 if (VAR_6 != 0)
  FUNC_0(VAR_0, "Unable to request algorithm list");

 VAR_5 = (ipfw_ta_info *)(VAR_4 + 1);
 for (VAR_7 = 0; VAR_7 < VAR_4->count; VAR_7++) {
  if ((VAR_8 = FUNC_2(VAR_1, VAR_5->type)) == ((void*)0))
   VAR_8 = "unknown";
  FUNC_3("--- %s ---\n", VAR_5->algoname);
  FUNC_3(" type: %s\n refcount: %u\n", VAR_8, VAR_5->refcnt);

  VAR_5 = (ipfw_ta_info *)((caddr_t)VAR_5 + VAR_4->objsize);
 }

 FUNC_1(VAR_4);
}
