
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_reserve_entry {int dummy; } ;


 int FUNC_0 (void*,struct fdt_reserve_entry*,int,int) ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*,scalar_t__) ;
 int FUNC_4 (void*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(void *VAR_0, struct fdt_reserve_entry *VAR_1,
          int VAR_2, int VAR_3)
{
 int VAR_4 = (VAR_3 - VAR_2) * sizeof(*VAR_1);
 int VAR_5;
 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2 * sizeof(*VAR_1), VAR_3 * sizeof(*VAR_1));
 if (VAR_5)
  return VAR_5;
 FUNC_4(VAR_0, FUNC_2(VAR_0) + VAR_4);
 FUNC_3(VAR_0, FUNC_1(VAR_0) + VAR_4);
 return 0;
}
