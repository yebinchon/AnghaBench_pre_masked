
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct maplink {int ml_mapper; } ;
struct _citrus_mapper_serial {int sr_mappers; } ;


 struct maplink* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct maplink*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct _citrus_mapper_serial *VAR_1)
{
 struct maplink *VAR_2;

 while ((VAR_2 = FUNC_0(&VAR_1->sr_mappers)) != ((void*)0)) {
  FUNC_1(&VAR_1->sr_mappers, VAR_0);
  FUNC_2(VAR_2->ml_mapper);
  FUNC_3(VAR_2);
 }
}
