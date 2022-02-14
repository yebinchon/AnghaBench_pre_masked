
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lio_stailq_node {int dummy; } ;
struct lio_stailq_head {int dummy; } ;


 scalar_t__ FUNC_0 (struct lio_stailq_head*) ;
 struct lio_stailq_node* FUNC_1 (struct lio_stailq_head*) ;
 int FUNC_2 (struct lio_stailq_head*,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline struct lio_stailq_node *
FUNC_3(struct lio_stailq_head *VAR_1)
{
 struct lio_stailq_node *VAR_2;

 if (FUNC_0(VAR_1))
  VAR_2 = ((void*)0);
 else
  VAR_2 = FUNC_1(VAR_1);

 if (VAR_2 != ((void*)0))
  FUNC_2(VAR_1, VAR_0);

 return (VAR_2);
}
