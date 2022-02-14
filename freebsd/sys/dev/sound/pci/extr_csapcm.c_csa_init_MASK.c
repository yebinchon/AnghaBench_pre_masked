
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csa_info {scalar_t__ pfie; int res; } ;
typedef int csa_res ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct csa_info*) ;
 int FUNC_5 (struct csa_info*) ;
 int FUNC_6 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_7(struct csa_info *VAR_6)
{
 csa_res *VAR_7;

 VAR_7 = &VAR_6->res;

 VAR_6->pfie = 0;
 FUNC_5(VAR_6);
 FUNC_4(VAR_6);

 if (FUNC_3(VAR_7))
  return (1);


 FUNC_2(VAR_7, 8000);
 FUNC_1(VAR_7, 8000);

 FUNC_6(VAR_7, VAR_0, VAR_2);
 FUNC_6(VAR_7, VAR_1, VAR_4);

 FUNC_6(VAR_7, VAR_0, FUNC_0(VAR_7, VAR_0) |
  VAR_3);
 FUNC_6(VAR_7, VAR_1, FUNC_0(VAR_7, VAR_1) |
  VAR_5);

 return 0;
}
