
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct regional {int dummy; } ;
struct compress_tree_node {int dummy; } ;
typedef int sldns_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct compress_tree_node* FUNC_0 (struct compress_tree_node**,int *,int,struct compress_tree_node***) ;
 int FUNC_1 (int *,int,size_t,struct regional*,struct compress_tree_node*,struct compress_tree_node**) ;
 int FUNC_2 (int *,int *) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int,struct compress_tree_node*) ;

__attribute__((used)) static int
FUNC_5(uint8_t* VAR_3, sldns_buffer* VAR_4, int VAR_5,
 struct regional* VAR_6, struct compress_tree_node** VAR_7)
{
 struct compress_tree_node* VAR_8;
 struct compress_tree_node** VAR_9 = ((void*)0);
 size_t VAR_10 = FUNC_3(VAR_4);
 if((VAR_8 = FUNC_0(VAR_7, VAR_3, VAR_5, &VAR_9))) {
  if(!FUNC_4(VAR_4, VAR_3, VAR_5, VAR_8))
   return VAR_2;
 } else {
  if(!FUNC_2(VAR_4, VAR_3))
   return VAR_2;
 }
 if(!FUNC_1(VAR_3, VAR_5, VAR_10, VAR_6, VAR_8, VAR_9))
  return VAR_1;
 return VAR_0;
}
