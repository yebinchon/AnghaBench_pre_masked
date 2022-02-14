
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blockvector {int dummy; } ;
struct block {int dummy; } ;
struct bfd_section {int dummy; } ;
typedef int CORE_ADDR ;


 struct block* FUNC_0 (struct blockvector*,int) ;
 struct blockvector* FUNC_1 (int ,struct bfd_section*,int*,int *) ;

struct block *
FUNC_2 (CORE_ADDR VAR_0, struct bfd_section *VAR_1)
{
  struct blockvector *VAR_2;
  int VAR_3;

  VAR_2 = FUNC_1 (VAR_0, VAR_1, &VAR_3, ((void*)0));
  if (VAR_2)
    return FUNC_0 (VAR_2, VAR_3);
  return 0;
}
