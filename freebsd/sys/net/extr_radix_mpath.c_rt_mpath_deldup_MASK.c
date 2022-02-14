
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry {int dummy; } ;
struct radix_node {int rn_flags; int * rn_dupedkey; } ;


 int VAR_0 ;
 struct radix_node* FUNC_0 (struct radix_node*) ;

int
FUNC_1(struct rtentry *VAR_1, struct rtentry *VAR_2)
{
        struct radix_node *VAR_3, *VAR_4;

        if (!VAR_1 || !VAR_2)
            return (0);
        VAR_3 = (struct radix_node *)VAR_1;
        VAR_4 = FUNC_0(VAR_3);
        while (VAR_4) {
            if (VAR_4 == (struct radix_node *)VAR_2) {
                VAR_3->rn_dupedkey = VAR_4->rn_dupedkey;
                VAR_4->rn_dupedkey = ((void*)0);
             VAR_4->rn_flags &= ~VAR_0;
         VAR_4[1].rn_flags &= ~VAR_0;
                return (1);
            }
            VAR_3 = VAR_4;
            VAR_4 = FUNC_0((struct radix_node *)VAR_3);
        }
        return (0);
}
