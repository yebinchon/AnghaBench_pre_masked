
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct out_section_hash_entry {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3 (void)
{
  if (!FUNC_1 (&VAR_1,
         VAR_0,
         sizeof (struct out_section_hash_entry),
         61))
    FUNC_2 (FUNC_0("%P%F: can not create hash table: %E\n"));
}
