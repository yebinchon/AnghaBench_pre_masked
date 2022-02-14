
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tipc_media_addr {int dummy; } ;
struct print_buf {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct bearer {TYPE_1__ publ; } ;
typedef int media_addr_str ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct print_buf*,struct tipc_media_addr*) ;
 int FUNC_2 (struct print_buf*,char*,int) ;
 int FUNC_3 (struct print_buf*) ;
 int FUNC_4 (char*,char*,char*,int ) ;

__attribute__((used)) static void FUNC_5(struct bearer *VAR_0, u32 VAR_1,
       struct tipc_media_addr *VAR_2)
{
 char VAR_3[16];
 char VAR_4[64];
 struct print_buf VAR_5;

 FUNC_0(VAR_3, VAR_1);
 FUNC_2(&VAR_5, VAR_4, sizeof(VAR_4));
 FUNC_1(&VAR_5, VAR_2);
 FUNC_3(&VAR_5);
 FUNC_4("Duplicate %s using %s seen on <%s>\n",
      VAR_3, VAR_4, VAR_0->publ.name);
}
