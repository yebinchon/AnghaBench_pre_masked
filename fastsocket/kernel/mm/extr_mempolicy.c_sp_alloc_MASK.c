
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sp_node {unsigned long start; unsigned long end; struct mempolicy* policy; } ;
struct mempolicy {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sp_node* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mempolicy*) ;
 int VAR_2 ;

__attribute__((used)) static struct sp_node *FUNC_2(unsigned long VAR_3, unsigned long VAR_4,
    struct mempolicy *VAR_5)
{
 struct sp_node *VAR_6 = FUNC_0(VAR_2, VAR_0);

 if (!VAR_6)
  return ((void*)0);
 VAR_6->start = VAR_3;
 VAR_6->end = VAR_4;
 FUNC_1(VAR_5);
 VAR_5->flags |= VAR_1;
 VAR_6->policy = VAR_5;
 return VAR_6;
}
