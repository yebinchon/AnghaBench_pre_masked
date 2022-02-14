
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfd_target {int dummy; } ;
typedef struct bfd_target bfd_target ;
typedef int bfd_boolean ;



__attribute__((used)) static bfd_boolean
FUNC_0 (const struct bfd_target *VAR_0)
{
  extern const bfd_target VAR_1;
  extern const bfd_target VAR_2;

  return VAR_0 == &VAR_1 || VAR_0 == &VAR_2;
}
