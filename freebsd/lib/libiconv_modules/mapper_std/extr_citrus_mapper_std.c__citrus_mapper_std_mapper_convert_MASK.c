
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_mapper_std {int (* ms_convert ) (struct _citrus_mapper_std*,int *,int ,void*) ;} ;
struct _citrus_mapper {struct _citrus_mapper_std* cm_closure; } ;
typedef int _index_t ;


 int FUNC_0 (struct _citrus_mapper_std*,int *,int ,void*) ;

__attribute__((used)) static int

FUNC_1(struct _citrus_mapper * __restrict VAR_0,
    _index_t * __restrict VAR_1, _index_t VAR_2, void * __restrict VAR_3)
{
 struct _citrus_mapper_std *VAR_4;

 VAR_4 = VAR_0->cm_closure;
 return ((*VAR_4->ms_convert)(VAR_4, VAR_1, VAR_2, VAR_3));
}
