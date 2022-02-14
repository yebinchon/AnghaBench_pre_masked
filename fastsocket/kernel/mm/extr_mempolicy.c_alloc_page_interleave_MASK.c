
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zonelist {int * _zonerefs; } ;
struct page {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct page* FUNC_0 (int ,unsigned int,struct zonelist*) ;
 int FUNC_1 (struct page*,int ) ;
 struct zonelist* FUNC_2 (unsigned int,int ) ;
 scalar_t__ FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static struct page *FUNC_5(gfp_t VAR_1, unsigned VAR_2,
     unsigned VAR_3)
{
 struct zonelist *VAR_4;
 struct page *VAR_5;

 VAR_4 = FUNC_2(VAR_3, VAR_1);
 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_4);
 if (VAR_5 && FUNC_3(VAR_5) == FUNC_4(&VAR_4->_zonerefs[0]))
  FUNC_1(VAR_5, VAR_0);
 return VAR_5;
}
