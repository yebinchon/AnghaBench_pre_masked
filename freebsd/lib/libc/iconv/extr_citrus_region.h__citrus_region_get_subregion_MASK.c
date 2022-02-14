
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_region {int dummy; } ;


 scalar_t__ FUNC_0 (struct _citrus_region const*,size_t,size_t) ;
 int FUNC_1 (struct _citrus_region*,int ,size_t) ;
 int FUNC_2 (struct _citrus_region const*,size_t) ;

__attribute__((used)) static __inline int
FUNC_3(struct _citrus_region *VAR_0,
    const struct _citrus_region *VAR_1, size_t VAR_2, size_t VAR_3)
{

 if (FUNC_0(VAR_1, VAR_2, VAR_3))
  return (-1);
 FUNC_1(VAR_0, FUNC_2(VAR_1, VAR_2), VAR_3);
 return (0);
}
