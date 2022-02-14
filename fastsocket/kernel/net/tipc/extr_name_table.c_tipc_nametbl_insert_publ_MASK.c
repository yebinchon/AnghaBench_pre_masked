
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct publication {int dummy; } ;
struct name_seq {int dummy; } ;
struct TYPE_2__ {int * types; } ;


 int FUNC_0 (char*,struct name_seq*,...) ;
 size_t FUNC_1 (int ) ;
 struct name_seq* FUNC_2 (int ) ;
 TYPE_1__ VAR_0 ;
 struct name_seq* FUNC_3 (int ,int *) ;
 struct publication* FUNC_4 (struct name_seq*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (char*,int ,int ,int ) ;

struct publication *FUNC_6(u32 VAR_1, u32 VAR_2, u32 VAR_3,
          u32 VAR_4, u32 VAR_5, u32 VAR_6, u32 VAR_7)
{
 struct name_seq *VAR_8 = FUNC_2(VAR_1);

 FUNC_0("tipc_nametbl_insert_publ: {%u,%u,%u} found %p\n", VAR_1, VAR_2, VAR_3, VAR_8);
 if (VAR_2 > VAR_3) {
  FUNC_5("Failed to publish illegal {%u,%u,%u}\n",
       VAR_1, VAR_2, VAR_3);
  return ((void*)0);
 }

 FUNC_0("Publishing {%u,%u,%u} from 0x%x\n", VAR_1, VAR_2, VAR_3, VAR_5);
 if (!VAR_8) {
  VAR_8 = FUNC_3(VAR_1, &VAR_0.types[FUNC_1(VAR_1)]);
  FUNC_0("tipc_nametbl_insert_publ: created %p\n", VAR_8);
 }
 if (!VAR_8)
  return ((void*)0);

 return FUNC_4(VAR_8, VAR_1, VAR_2, VAR_3,
     VAR_4, VAR_5, VAR_6, VAR_7);
}
