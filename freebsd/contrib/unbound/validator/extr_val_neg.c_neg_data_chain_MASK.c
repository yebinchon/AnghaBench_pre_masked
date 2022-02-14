
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct val_neg_data {int labs; struct val_neg_data* parent; struct val_neg_data* name; } ;


 int FUNC_0 (int **,size_t*) ;
 int FUNC_1 (struct val_neg_data*) ;
 struct val_neg_data* FUNC_2 (int *,size_t,int) ;

__attribute__((used)) static struct val_neg_data* FUNC_3(
 uint8_t* VAR_0, size_t VAR_1, int VAR_2, struct val_neg_data* VAR_3)
{
 int VAR_4;
 int VAR_5 = VAR_3?VAR_3->labs:0;
 struct val_neg_data* VAR_6, *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);



 for(VAR_4=VAR_2; VAR_4!=VAR_5; VAR_4--) {

  VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_4);
  if(!VAR_6) {

   struct val_neg_data* VAR_9 = VAR_7, *VAR_10;
   while(VAR_9) {
    VAR_10 = VAR_9->parent;
    FUNC_1(VAR_9->name);
    FUNC_1(VAR_9);
    VAR_9 = VAR_10;
   }
   return ((void*)0);
  }
  if(VAR_4 == VAR_2) {
   VAR_7 = VAR_6;
  } else {
   VAR_8->parent = VAR_6;
  }


  VAR_8 = VAR_6;
  FUNC_0(&VAR_0, &VAR_1);
 }
 return VAR_7;
}
