
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _region {int dummy; } ;
struct _citrus_db_factory {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct _citrus_db_factory*) ;
 int FUNC_1 (struct _citrus_db_factory*,int ,struct _region*) ;
 int FUNC_2 (struct _region*,void*,size_t) ;
 int VAR_1 ;
 void* FUNC_3 (size_t) ;

__attribute__((used)) static int
FUNC_4(struct _citrus_db_factory *VAR_2, struct _region *VAR_3)
{
 void *VAR_4;
 size_t VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 VAR_4 = FUNC_3(VAR_5);
 if (VAR_4 == ((void*)0))
  return (VAR_1);
 FUNC_2(VAR_3, VAR_4, VAR_5);

 return (FUNC_1(VAR_2, VAR_0, VAR_3));
}
