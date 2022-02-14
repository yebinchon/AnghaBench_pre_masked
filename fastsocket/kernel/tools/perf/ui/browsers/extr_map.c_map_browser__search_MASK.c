
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int target ;
struct symbol {int rb_node; } ;
struct TYPE_2__ {int top_idx; int index; int * top; } ;
struct map_browser {TYPE_1__ b; int map; } ;


 struct symbol* FUNC_0 (int ,int ,int *) ;
 struct symbol* FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (char*,int *,int) ;
 int * FUNC_3 (struct symbol*) ;
 char FUNC_4 (char) ;
 int FUNC_5 (char*,char*,int,int) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static int FUNC_7(struct map_browser *VAR_0)
{
 char VAR_1[512];
 struct symbol *VAR_2;
 int VAR_3 = FUNC_5("Search by name/addr", VAR_1, sizeof(VAR_1), 40);

 if (VAR_3)
  return VAR_3;

 if (VAR_1[0] == '0' && FUNC_4(VAR_1[1]) == 'x') {
  u64 VAR_4 = FUNC_2(VAR_1, ((void*)0), 16);
  VAR_2 = FUNC_0(VAR_0->map, VAR_4, ((void*)0));
 } else
  VAR_2 = FUNC_1(VAR_0->map, VAR_1, ((void*)0));

 if (VAR_2 != ((void*)0)) {
  u32 *VAR_5 = FUNC_3(VAR_2);

  VAR_0->b.top = &VAR_2->rb_node;
  VAR_0->b.index = VAR_0->b.top_idx = *VAR_5;
 } else
  FUNC_6("%s not found!", VAR_1);

 return 0;
}
