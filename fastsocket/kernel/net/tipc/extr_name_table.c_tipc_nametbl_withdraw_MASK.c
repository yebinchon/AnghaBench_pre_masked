
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct publication {scalar_t__ scope; int pport_list; } ;
struct TYPE_2__ {int local_publ_count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (char*,int ,int ,int ,int ) ;
 int FUNC_2 (struct publication*) ;
 scalar_t__ FUNC_3 (struct publication*) ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_1 ;
 int FUNC_5 (struct publication*) ;
 int VAR_2 ;
 struct publication* FUNC_6 (int ,int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(u32 VAR_4, u32 VAR_5, u32 VAR_6, u32 VAR_7)
{
 struct publication *VAR_8;

 FUNC_0("tipc_nametbl_withdraw: {%u,%u}, key=%u\n", VAR_4, VAR_5, VAR_7);
 FUNC_7(&VAR_2);
 VAR_8 = FUNC_6(VAR_4, VAR_5, VAR_3, VAR_6, VAR_7);
 if (FUNC_3(VAR_8)) {
  VAR_1.local_publ_count--;
  if (VAR_8->scope != VAR_0)
   FUNC_5(VAR_8);
  FUNC_8(&VAR_2);
  FUNC_4(&VAR_8->pport_list);
  FUNC_2(VAR_8);
  return 1;
 }
 FUNC_8(&VAR_2);
 FUNC_1("Unable to remove local publication\n"
     "(type=%u, lower=%u, ref=%u, key=%u)\n",
     VAR_4, VAR_5, VAR_6, VAR_7);
 return 0;
}
