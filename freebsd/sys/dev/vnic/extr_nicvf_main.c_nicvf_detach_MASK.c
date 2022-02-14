
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicvf {int ifp; int if_media; int * reg_base; int stats_mtx; } ;
typedef int device_t ;


 int FUNC_0 (struct nicvf*) ;
 int FUNC_1 (struct nicvf*) ;
 int FUNC_2 (struct nicvf*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int ,int *) ;
 struct nicvf* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct nicvf*) ;
 int FUNC_9 (struct nicvf*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_1)
{
 struct nicvf *VAR_2;

 VAR_2 = FUNC_4(VAR_1);

 FUNC_0(VAR_2);

 FUNC_9(VAR_2);

 FUNC_7(&VAR_2->stats_mtx);

 FUNC_8(VAR_2);

 if (VAR_2->reg_base != ((void*)0)) {
  FUNC_3(VAR_1, VAR_0,
      FUNC_10(VAR_2->reg_base), VAR_2->reg_base);
 }


 FUNC_6(&VAR_2->if_media);

 FUNC_5(VAR_2->ifp);
 FUNC_2(VAR_2);

 FUNC_1(VAR_2);

 return (0);
}
