
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
struct bhnd_nomatch {scalar_t__ device; scalar_t__ vendor; scalar_t__ if_verbose; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 struct resource_list* FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct bhnd_nomatch* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int ,char*,int ,int ,int ) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (struct resource_list*,char*,int ,char*) ;

void
FUNC_10(device_t VAR_5, device_t VAR_6)
{
 struct resource_list *VAR_7;
 const struct bhnd_nomatch *VAR_8;
 bool VAR_9;


 VAR_9 = 1;
 for (VAR_8 = VAR_3; VAR_8->device != VAR_0; VAR_8++) {
  if (VAR_8->vendor != FUNC_5(VAR_6))
   continue;

  if (VAR_8->device != FUNC_2(VAR_6))
   continue;

  VAR_9 = 0;
  if (VAR_4 && VAR_8->if_verbose)
   VAR_9 = 1;
  break;
 }

 if (!VAR_9)
  return;


 FUNC_7(VAR_5, "<%s %s, rev %hhu>", FUNC_6(VAR_6),
  FUNC_3(VAR_6), FUNC_4(VAR_6));

 VAR_7 = FUNC_0(VAR_5, VAR_6);
 if (VAR_7 != ((void*)0)) {
  FUNC_9(VAR_7, "mem", VAR_2, "%#jx");
  FUNC_9(VAR_7, "irq", VAR_1, "%#jd");
 }

 FUNC_8(" at core %u (no driver attached)\n",
     FUNC_1(VAR_6));
}
