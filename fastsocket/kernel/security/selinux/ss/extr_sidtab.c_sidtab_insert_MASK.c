
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sidtab_node {scalar_t__ sid; struct sidtab_node* next; int context; } ;
struct sidtab {scalar_t__ next_sid; int nel; struct sidtab_node** htable; } ;
struct context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,struct context*) ;
 int FUNC_2 (struct sidtab_node*) ;
 struct sidtab_node* FUNC_3 (int,int ) ;
 int FUNC_4 () ;

int FUNC_5(struct sidtab *VAR_3, u32 VAR_4, struct context *VAR_5)
{
 int VAR_6, VAR_7 = 0;
 struct sidtab_node *VAR_8, *VAR_9, *VAR_10;

 if (!VAR_3) {
  VAR_7 = -VAR_1;
  goto out;
 }

 VAR_6 = FUNC_0(VAR_4);
 VAR_8 = ((void*)0);
 VAR_9 = VAR_3->htable[VAR_6];
 while (VAR_9 && VAR_4 > VAR_9->sid) {
  VAR_8 = VAR_9;
  VAR_9 = VAR_9->next;
 }

 if (VAR_9 && VAR_4 == VAR_9->sid) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_2);
 if (VAR_10 == ((void*)0)) {
  VAR_7 = -VAR_1;
  goto out;
 }
 VAR_10->sid = VAR_4;
 if (FUNC_1(&VAR_10->context, VAR_5)) {
  FUNC_2(VAR_10);
  VAR_7 = -VAR_1;
  goto out;
 }

 if (VAR_8) {
  VAR_10->next = VAR_8->next;
  FUNC_4();
  VAR_8->next = VAR_10;
 } else {
  VAR_10->next = VAR_3->htable[VAR_6];
  FUNC_4();
  VAR_3->htable[VAR_6] = VAR_10;
 }

 VAR_3->nel++;
 if (VAR_4 >= VAR_3->next_sid)
  VAR_3->next_sid = VAR_4 + 1;
out:
 return VAR_7;
}
