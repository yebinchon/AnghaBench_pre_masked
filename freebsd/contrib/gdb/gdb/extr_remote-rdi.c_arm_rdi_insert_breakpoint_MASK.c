
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct local_bp_list_entry {struct local_bp_list_entry* next; int point; int addr; } ;
typedef int PointHandle ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct local_bp_list_entry* VAR_3 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6 (CORE_ADDR VAR_4, char *VAR_5)
{
  int VAR_6;
  PointHandle VAR_7;
  struct local_bp_list_entry *VAR_8;
  int VAR_9 = VAR_2;

  if (FUNC_1 (VAR_4) || FUNC_2 (VAR_4))
    VAR_9 |= VAR_1;
  VAR_6 = FUNC_0 (VAR_4, VAR_9, 0, &VAR_7);
  if (VAR_6 != VAR_0)
    {
      FUNC_3 ("RDI_setbreak: %s\n", FUNC_4 (VAR_6));
    }
  VAR_8 =
    (struct local_bp_list_entry *) FUNC_5 (sizeof (struct local_bp_list_entry));
  VAR_8->addr = VAR_4;
  VAR_8->point = VAR_7;
  VAR_8->next = VAR_3;
  VAR_3 = VAR_8;
  return VAR_6;
}
