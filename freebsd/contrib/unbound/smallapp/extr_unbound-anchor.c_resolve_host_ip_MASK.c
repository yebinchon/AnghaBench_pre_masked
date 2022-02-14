
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_result {int * len; scalar_t__* data; scalar_t__ rcode; int havedata; } ;
struct ub_ctx {int dummy; } ;
struct ip_list {struct ip_list* next; } ;


 int VAR_0 ;
 struct ip_list* FUNC_0 (int,scalar_t__,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct ub_ctx*) ;
 int FUNC_4 (struct ub_ctx*,char const*,int,int,struct ub_result**) ;
 int FUNC_5 (struct ub_result*) ;
 char* FUNC_6 (int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_7(struct ub_ctx* VAR_2, const char* VAR_3, int VAR_4, int VAR_5, int VAR_6,
 struct ip_list** VAR_7)
{
 struct ub_result* VAR_8 = ((void*)0);
 int VAR_9;
 int VAR_10;

 VAR_9 = FUNC_4(VAR_2, VAR_3, VAR_5, VAR_6, &VAR_8);
 if(VAR_9) {
  if(VAR_1) FUNC_2("error: resolve %s %s: %s\n", VAR_3,
   (VAR_5==VAR_0)?"A":"AAAA", FUNC_6(VAR_9));
  return;
 }
 if(!VAR_8) {
  if(VAR_1) FUNC_2("out of memory\n");
  FUNC_3(VAR_2);
  FUNC_1(0);
 }
 if(!VAR_8->havedata || VAR_8->rcode || !VAR_8->data) {
  if(VAR_1) FUNC_2("resolve %s %s: no result\n", VAR_3,
   (VAR_5==VAR_0)?"A":"AAAA");
  return;
 }
 for(VAR_10 = 0; VAR_8->data[VAR_10]; VAR_10++) {
  struct ip_list* VAR_11 = FUNC_0(VAR_5, VAR_8->data[VAR_10], VAR_8->len[VAR_10],
   VAR_4);
  if(!VAR_11) continue;
  VAR_11->next = *VAR_7;
  *VAR_7 = VAR_11;
 }
 FUNC_5(VAR_8);
}
