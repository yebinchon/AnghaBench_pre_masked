
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct huffman_tree_node {int* branches; } ;
struct huffman_code {int numallocatedentries; int numentries; struct huffman_tree_node* tree; } ;


 void* FUNC_0 (struct huffman_tree_node*,int) ;

__attribute__((used)) static int
FUNC_1(struct huffman_code *VAR_0)
{
  void *VAR_1;
  if (VAR_0->numallocatedentries == VAR_0->numentries) {
    int VAR_2 = 256;
    if (VAR_0->numentries > 0) {
        VAR_2 = VAR_0->numentries * 2;
    }
    VAR_1 = FUNC_0(VAR_0->tree, VAR_2 * sizeof(*VAR_0->tree));
    if (VAR_1 == ((void*)0))
        return (-1);
    VAR_0->tree = (struct huffman_tree_node *)VAR_1;
    VAR_0->numallocatedentries = VAR_2;
  }
  VAR_0->tree[VAR_0->numentries].branches[0] = -1;
  VAR_0->tree[VAR_0->numentries].branches[1] = -2;
  return 1;
}
