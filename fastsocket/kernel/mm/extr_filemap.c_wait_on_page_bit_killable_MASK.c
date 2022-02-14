
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; } ;


 int FUNC_0 (int ,int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ,int ) ;
 int FUNC_2 (struct page*) ;
 int VAR_1 ;
 int FUNC_3 (int,int *) ;
 int VAR_2 ;

int FUNC_4(struct page *VAR_3, int VAR_4)
{
 FUNC_0(VAR_2, &VAR_3->flags, VAR_4);

 if (!FUNC_3(VAR_4, &VAR_3->flags))
  return 0;

 return FUNC_1(FUNC_2(VAR_3), &VAR_2,
        VAR_1, VAR_0);
}
