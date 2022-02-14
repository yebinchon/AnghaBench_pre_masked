
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee_range {struct ieee_range* next; int low; } ;
struct ieee_handle {struct ieee_range* pending_ranges; } ;
typedef int bfd_vma ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee_range*) ;
 int FUNC_2 (struct ieee_handle*,int ,int ,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (struct ieee_handle *VAR_1, bfd_vma VAR_2)
{
  struct ieee_range *VAR_3;
  bfd_vma VAR_4;

  FUNC_0 (VAR_1->pending_ranges != ((void*)0));
  VAR_3 = VAR_1->pending_ranges;
  VAR_4 = VAR_3->low;
  VAR_1->pending_ranges = VAR_3->next;
  FUNC_1 (VAR_3);
  return FUNC_2 (VAR_1, VAR_0, VAR_4, VAR_2);
}
