
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct score_got_info {int * got_entries; } ;
typedef int * htab_t ;


 int FUNC_0 (int *,int ,int **) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1 (struct score_got_info *VAR_1)
{
  htab_t VAR_2;

  do
    {
      VAR_2 = VAR_1->got_entries;

      FUNC_0 (VAR_2,
       VAR_0,
       &VAR_2);
    }
  while (VAR_2 == ((void*)0));
}
