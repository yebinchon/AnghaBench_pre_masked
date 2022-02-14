
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sub_seq {struct publication* zone_list; int upper; int lower; } ;
struct publication {scalar_t__ node; int ref; scalar_t__ scope; struct publication* zone_list_next; int key; } ;
struct print_buf {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*,int,int,int,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct print_buf*,char*,...) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct sub_seq *VAR_3, struct print_buf *VAR_4, u32 VAR_5,
   u32 VAR_6)
{
 char VAR_7[27];
 char *VAR_8;
 struct publication *VAR_9 = VAR_3->zone_list;

 FUNC_3(VAR_4, "%-10u %-10u ", VAR_3->lower, VAR_3->upper);

 if (VAR_5 == 2 || !VAR_9) {
  FUNC_3(VAR_4, "\n");
  return;
 }

 do {
  FUNC_0 (VAR_7, "<%u.%u.%u:%u>",
    FUNC_4(VAR_9->node), FUNC_1(VAR_9->node),
    FUNC_2(VAR_9->node), VAR_9->ref);
  FUNC_3(VAR_4, "%-26s ", VAR_7);
  if (VAR_5 > 3) {
   if (VAR_9->node != VAR_2)
    VAR_8 = "";
   else if (VAR_9->scope == VAR_1)
    VAR_8 = "node";
   else if (VAR_9->scope == VAR_0)
    VAR_8 = "cluster";
   else
    VAR_8 = "zone";
   FUNC_3(VAR_4, "%-10u %s", VAR_9->key, VAR_8);
  }

  VAR_9 = VAR_9->zone_list_next;
  if (VAR_9 == VAR_3->zone_list)
   break;

  FUNC_3(VAR_4, "\n%33s", " ");
 } while (1);

 FUNC_3(VAR_4, "\n");
}
