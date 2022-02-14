
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_mapper_std {int ms_file; int ms_db; int (* ms_uninit ) (struct _citrus_mapper_std*) ;} ;
struct _citrus_mapper {struct _citrus_mapper_std* cm_closure; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct _citrus_mapper_std*) ;
 int FUNC_3 (struct _citrus_mapper_std*) ;

__attribute__((used)) static void

FUNC_4(struct _citrus_mapper *VAR_0)
{
 struct _citrus_mapper_std *VAR_1;

 VAR_1 = VAR_0->cm_closure;
 if (VAR_1->ms_uninit)
  (*VAR_1->ms_uninit)(VAR_1);
 FUNC_0(VAR_1->ms_db);
 FUNC_1(&VAR_1->ms_file);
 FUNC_2(VAR_1);
}
