
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_mapper_area {int dummy; } ;
struct _citrus_mapper {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (struct _citrus_mapper_area*,struct _citrus_mapper**,char*,char*) ;
 int FUNC_1 (char*,int,char*,char const*,char const*,char const*,char const*) ;

__attribute__((used)) static __inline int
FUNC_2(struct _citrus_mapper_area *__restrict VAR_1,
    struct _citrus_mapper * __restrict * __restrict VAR_2,
    const char *VAR_3, const char *VAR_4, const char *VAR_5)
{
 char VAR_6[VAR_0];

 FUNC_1(VAR_6, sizeof(VAR_6), "%s/%s,%s/%s", VAR_3, VAR_4, VAR_4, VAR_5);

 return (FUNC_0(VAR_1, VAR_2, "mapper_serial", VAR_6));
}
