
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct val_neg_zone {scalar_t__ count; struct val_neg_zone* parent; int node; scalar_t__ len; int name; } ;
struct val_neg_cache {int tree; int use; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 struct val_neg_zone* FUNC_2 (struct val_neg_cache*,int *,size_t,int,int ) ;
 struct val_neg_zone* FUNC_3 (int *,size_t,int,int ,struct val_neg_zone*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int *) ;

struct val_neg_zone* FUNC_6(struct val_neg_cache* VAR_0,
 uint8_t* VAR_1, size_t VAR_2, uint16_t VAR_3)
{
 struct val_neg_zone* VAR_4;
 struct val_neg_zone* VAR_5;
 struct val_neg_zone* VAR_6, *VAR_7;
 int VAR_8 = FUNC_0(VAR_1);


 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_8, VAR_3);
 if(VAR_5 && FUNC_4(VAR_5->name, VAR_1) == 0)
  return VAR_5;

 FUNC_1(!VAR_5 || VAR_5->count > 0);
 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_8, VAR_3, VAR_5);
 if(!VAR_4) {
  return ((void*)0);
 }


 VAR_6 = VAR_4;
 while(VAR_6) {
  VAR_7 = VAR_6->parent;

  VAR_0->use += sizeof(struct val_neg_zone) + VAR_6->len;

  (void)FUNC_5(&VAR_0->tree, &VAR_6->node);

  if(VAR_7 == ((void*)0))
   VAR_6->parent = VAR_5;
  VAR_6 = VAR_7;
 }
 return VAR_4;
}
