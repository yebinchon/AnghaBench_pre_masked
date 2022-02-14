
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_km_flags_t ;


 void* FUNC_0 (size_t,int ) ;
 int FUNC_1 (void const*) ;
 int FUNC_2 (void*,void const*,size_t) ;

void *
FUNC_3(const void *VAR_0, size_t VAR_1, size_t VAR_2,
      xfs_km_flags_t VAR_3)
{
 void *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_3);
 if (VAR_0) {
  if (VAR_4)
   FUNC_2(VAR_4, VAR_0,
    ((VAR_2 < VAR_1) ? VAR_2 : VAR_1));
  FUNC_1(VAR_0);
 }
 return VAR_4;
}
