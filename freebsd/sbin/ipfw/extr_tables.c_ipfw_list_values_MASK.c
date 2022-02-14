
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_long ;
struct _table_value {int spare1; scalar_t__ refcnt; } ;
typedef int ipfw_table_value ;
struct TYPE_4__ {int count; scalar_t__ objsize; } ;
typedef TYPE_1__ ipfw_obj_lheader ;
typedef scalar_t__ caddr_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct _table_value*,int,scalar_t__,int ) ;
 int FUNC_4 (TYPE_1__**) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (char*,int,int *,int,int ) ;

void
FUNC_7(int VAR_2, char *VAR_3[])
{
 ipfw_obj_lheader *VAR_4;
 struct _table_value *VAR_5;
 int VAR_6, VAR_7;
 uint32_t VAR_8;
 char VAR_9[128];

 VAR_6 = FUNC_4(&VAR_4);
 if (VAR_6 != 0)
  FUNC_0(VAR_0, "Unable to request value list");

 VAR_8 = 0x7FFFFFFF;

 FUNC_5(VAR_9, sizeof(VAR_9), VAR_8);
 FUNC_2("HEADER: %s\n", VAR_9);
 VAR_5 = (struct _table_value *)(VAR_4 + 1);
 FUNC_3(VAR_5, VAR_4->count, VAR_4->objsize, VAR_1);
 for (VAR_7 = 0; VAR_7 < VAR_4->count; VAR_7++) {
  FUNC_6(VAR_9, sizeof(VAR_9), (ipfw_table_value *)VAR_5,
      VAR_8, 0);
  FUNC_2("[%u] refs=%lu %s\n", VAR_5->spare1, (u_long)VAR_5->refcnt, VAR_9);
  VAR_5 = (struct _table_value *)((caddr_t)VAR_5 + VAR_4->objsize);
 }

 FUNC_1(VAR_4);
}
