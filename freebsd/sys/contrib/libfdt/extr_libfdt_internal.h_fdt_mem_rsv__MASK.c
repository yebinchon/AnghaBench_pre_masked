
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdt_reserve_entry {int dummy; } ;


 int FUNC_0 (void const*) ;

__attribute__((used)) static inline const struct fdt_reserve_entry *FUNC_1(const void *VAR_0, int VAR_1)
{
 const struct fdt_reserve_entry *VAR_2 =
  (const struct fdt_reserve_entry *)
  ((const char *)VAR_0 + FUNC_0(VAR_0));

 return VAR_2 + VAR_1;
}
