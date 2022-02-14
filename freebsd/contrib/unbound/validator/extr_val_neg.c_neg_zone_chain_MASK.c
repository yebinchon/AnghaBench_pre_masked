
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct val_neg_zone {int labs; struct val_neg_zone* parent; struct val_neg_zone* name; } ;


 int FUNC_0 (int **,size_t*) ;
 int FUNC_1 (struct val_neg_zone*) ;
 struct val_neg_zone* FUNC_2 (int *,size_t,int,int ) ;

__attribute__((used)) static struct val_neg_zone* FUNC_3(
 uint8_t* VAR_0, size_t VAR_1, int VAR_2, uint16_t VAR_3,
 struct val_neg_zone* VAR_4)
{
 int VAR_5;
 int VAR_6 = VAR_4?VAR_4->labs:0;
 struct val_neg_zone* VAR_7, *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);



 for(VAR_5=VAR_2; VAR_5!=VAR_6; VAR_5--) {

  VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_5, VAR_3);
  if(!VAR_7) {

   struct val_neg_zone* VAR_10=VAR_9, *VAR_11;
   while(VAR_10) {
    VAR_11 = VAR_10->parent;
    FUNC_1(VAR_10->name);
    FUNC_1(VAR_10);
    VAR_10 = VAR_11;
   }
   return ((void*)0);
  }
  if(VAR_5 == VAR_2) {
   VAR_9 = VAR_7;
  } else {
   VAR_8->parent = VAR_7;
  }

  VAR_8 = VAR_7;
  FUNC_0(&VAR_0, &VAR_1);
 }
 return VAR_9;
}
