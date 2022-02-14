
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_entry {int dummy; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (unsigned int,char*) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_5, unsigned VAR_6, int VAR_7,
        CORE_ADDR VAR_8)
{
  struct st_entry VAR_9;
  unsigned int VAR_10;

  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++)
    if (VAR_3[VAR_10] != -1)
      FUNC_2 (VAR_10, VAR_5 + FUNC_1 (VAR_4, VAR_2)
         + VAR_3[VAR_10]);







}
