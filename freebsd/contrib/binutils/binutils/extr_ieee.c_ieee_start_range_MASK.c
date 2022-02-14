
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee_range {struct ieee_range* next; int low; } ;
struct ieee_handle {struct ieee_range* pending_ranges; } ;
typedef int bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int FUNC_0 (struct ieee_range*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (struct ieee_handle *VAR_1, bfd_vma VAR_2)
{
  struct ieee_range *VAR_3;

  VAR_3 = (struct ieee_range *) FUNC_1 (sizeof *VAR_3);
  FUNC_0 (VAR_3, 0, sizeof *VAR_3);
  VAR_3->low = VAR_2;
  VAR_3->next = VAR_1->pending_ranges;
  VAR_1->pending_ranges = VAR_3;
  return VAR_0;
}
