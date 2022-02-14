
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct regional {int dummy; } ;
struct compress_tree_node {int labs; struct compress_tree_node* parent; struct compress_tree_node* right; } ;


 size_t VAR_0 ;
 struct compress_tree_node* FUNC_0 (scalar_t__*,int,size_t,struct regional*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(uint8_t* VAR_1, int VAR_2, size_t VAR_3,
 struct regional* VAR_4, struct compress_tree_node* VAR_5,
 struct compress_tree_node** VAR_6)
{
 uint8_t VAR_7;
 struct compress_tree_node* VAR_8;
 struct compress_tree_node* VAR_9 = ((void*)0);
 int VAR_10 = VAR_2-1;
 if(VAR_5) VAR_10 = VAR_2 - VAR_5->labs;
 FUNC_1(VAR_10 >= 0);

 while(VAR_10--) {
  if(VAR_3 > VAR_0) {

   return 1;
  }
  if(!(VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3,
   VAR_4))) {

   return 0;
  }

  if(VAR_9) {


   VAR_8->right = VAR_9;
   VAR_9->parent = VAR_8;
  }


  VAR_7 = *VAR_1++;
  VAR_1 += VAR_7;
  VAR_3 += VAR_7+1;
  VAR_9 = VAR_8;
  VAR_2--;
 }

 if(VAR_9) {
  *VAR_6 = VAR_9;
  VAR_9->parent = VAR_5;
 }
 return 1;
}
