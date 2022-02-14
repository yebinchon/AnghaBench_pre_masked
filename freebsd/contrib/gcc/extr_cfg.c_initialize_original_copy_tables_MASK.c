
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htab_bb_copy_original_entry {int dummy; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_0 (char*,int,int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int,int ,int ,int *) ;
 scalar_t__ VAR_4 ;

void
FUNC_3 (void)
{
  FUNC_1 (!VAR_4);
  VAR_4
    = FUNC_0 ("original_copy",
    sizeof (struct htab_bb_copy_original_entry), 10);
  VAR_3 = FUNC_2 (10, VAR_2,
        VAR_1, ((void*)0));
  VAR_0 = FUNC_2 (10, VAR_2, VAR_1, ((void*)0));
}
