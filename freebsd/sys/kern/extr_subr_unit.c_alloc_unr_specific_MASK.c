
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct unrhdr {int mtx; } ;
struct unr {int dummy; } ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int *,char*) ;
 int FUNC_3 (struct unrhdr*,int ,void**,void**) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int
FUNC_6(struct unrhdr *VAR_2, u_int VAR_3)
{
 void *VAR_4, *VAR_5;
 int VAR_6;

 FUNC_2(VAR_0 | VAR_1, ((void*)0), "alloc_unr_specific");

 VAR_4 = FUNC_1(sizeof(struct unr));
 VAR_5 = FUNC_1(sizeof(struct unr));

 FUNC_4(VAR_2->mtx);
 VAR_6 = FUNC_3(VAR_2, VAR_3, &VAR_4, &VAR_5);
 FUNC_5(VAR_2->mtx);

 if (VAR_4 != ((void*)0))
  FUNC_0(VAR_4);
 if (VAR_5 != ((void*)0))
  FUNC_0(VAR_5);

 return (VAR_6);
}
