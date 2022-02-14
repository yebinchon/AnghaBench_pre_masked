
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct domainset {int ds_mask; } ;
struct domainlist {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 struct domainset* FUNC_1 (struct domainlist*) ;
 int FUNC_2 (struct domainset*,int ) ;
 struct domainset* FUNC_3 (struct domainset*,struct domainlist*) ;
 int FUNC_4 (struct domainset const*,struct domainset*) ;
 int VAR_0 ;

__attribute__((used)) static struct domainset *
FUNC_5(const struct domainset *VAR_1,
    const struct domainset *VAR_2, struct domainlist *VAR_3)
{
 struct domainset *VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 FUNC_2(VAR_4, VAR_0);




 FUNC_4(VAR_2, VAR_4);




 FUNC_0(&VAR_4->ds_mask, &VAR_1->ds_mask);

 return FUNC_3(VAR_4, VAR_3);
}
