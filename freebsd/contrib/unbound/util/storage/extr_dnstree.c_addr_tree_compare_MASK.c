
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct addr_tree_node {scalar_t__ net; int addrlen; int addr; } ;


 int FUNC_0 (int *,int ,int *,int ) ;

int FUNC_1(const void* VAR_0, const void* VAR_1)
{
        struct addr_tree_node* VAR_2 = (struct addr_tree_node*)VAR_0;
        struct addr_tree_node* VAR_3 = (struct addr_tree_node*)VAR_1;
        int VAR_4 = FUNC_0(&VAR_2->addr, VAR_2->addrlen, &VAR_3->addr,
                VAR_3->addrlen);
        if(VAR_4 != 0) return VAR_4;
        if(VAR_2->net < VAR_3->net)
                return -1;
        if(VAR_2->net > VAR_3->net)
                return 1;
        return 0;
}
