
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct local_bp_list_entry {scalar_t__ addr; struct local_bp_list_entry* next; int point; } ;
typedef int PointHandle ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct local_bp_list_entry* VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct local_bp_list_entry*) ;

__attribute__((used)) static int
FUNC_4 (CORE_ADDR VAR_2, char *VAR_3)
{
  int VAR_4;
  PointHandle VAR_5;
  struct local_bp_list_entry **VAR_6, *VAR_7;

  for (VAR_6 = &VAR_1; *VAR_6 != ((void*)0); VAR_6 = &(*VAR_6)->next)
    if ((*VAR_6)->addr == VAR_2)
      break;

  if (*VAR_6)
    {
      VAR_7 = *VAR_6;
      VAR_4 = FUNC_0 (VAR_7->point);
      if (VAR_4 != VAR_0)
 FUNC_1 ("RDI_clearbreak: %s\n", FUNC_2 (VAR_4));


      *VAR_6 = VAR_7->next;
      FUNC_3 (VAR_7);
    }

  return 0;
}
