
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xi ;
struct TYPE_4__ {int mflags; int limit; } ;
typedef TYPE_1__ ipfw_xtable_info ;
typedef int ipfw_obj_header ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;

 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (char*,int *,int) ;
 scalar_t__ FUNC_6 (int *,TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_7(ipfw_obj_header *VAR_4, int VAR_5, char *VAR_6[])
{
 ipfw_xtable_info VAR_7;
 int VAR_8;

 FUNC_4(&VAR_7, 0, sizeof(VAR_7));

 while (VAR_5 > 0) {
  VAR_8 = FUNC_3(VAR_3, *VAR_6, "option");
  VAR_5--; VAR_6++;

  switch (VAR_8) {
  case 128:
   FUNC_0("limit value required");
   VAR_7.limit = FUNC_5(*VAR_6, ((void*)0), 10);
   VAR_7.mflags |= VAR_2;
   VAR_5--; VAR_6++;
   break;
  default:
   FUNC_2(VAR_1, "cmd is not supported for modification");
  }
 }

 if (FUNC_6(VAR_4, &VAR_7) != 0)
  FUNC_1(VAR_0, "Table modification failed");
}
