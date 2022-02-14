
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_mapper_area {int dummy; } ;
struct _citrus_csmapper {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct _citrus_mapper_area*,struct _citrus_csmapper**,char*,char*) ;
 int FUNC_3 (struct _citrus_csmapper*) ;
 struct _citrus_csmapper* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(struct _citrus_mapper_area *__restrict VAR_2,
    struct _citrus_csmapper *__restrict *__restrict VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_1);
 if (VAR_0) {
  *VAR_3 = VAR_0;
  VAR_4 = 0;
  goto quit;
 }

 VAR_4 = FUNC_2(VAR_2, &VAR_0, "mapper_none", "");
 if (VAR_4)
  goto quit;
 FUNC_3(VAR_0);

 *VAR_3 = VAR_0;
 VAR_4 = 0;
quit:
 FUNC_0(&VAR_1);
 return (VAR_4);
}
