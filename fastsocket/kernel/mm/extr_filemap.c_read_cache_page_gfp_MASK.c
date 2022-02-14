
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct address_space {TYPE_1__* a_ops; } ;
typedef int pgoff_t ;
typedef int gfp_t ;
typedef int filler_t ;
struct TYPE_2__ {scalar_t__ readpage; } ;


 int FUNC_0 (struct address_space*,int ,int *,int *,int ) ;
 struct page* FUNC_1 (int ) ;

struct page *FUNC_2(struct address_space *VAR_0,
    pgoff_t VAR_1,
    gfp_t VAR_2)
{
 filler_t *VAR_3 = (filler_t *)VAR_0->a_ops->readpage;

 return FUNC_1(FUNC_0(VAR_0, VAR_1, VAR_3, ((void*)0), VAR_2));
}
