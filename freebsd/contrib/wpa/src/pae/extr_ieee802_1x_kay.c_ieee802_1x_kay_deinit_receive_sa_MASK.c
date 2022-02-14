
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct receive_sa {int list; int an; int * pkey; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct receive_sa*) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_4(struct receive_sa *VAR_1)
{
 FUNC_1(VAR_1->pkey);
 VAR_1->pkey = ((void*)0);
 FUNC_3(VAR_0,
     "KaY: Delete receive SA(an: %hhu) of SC",
     VAR_1->an);
 FUNC_0(&VAR_1->list);
 FUNC_2(VAR_1);
}
