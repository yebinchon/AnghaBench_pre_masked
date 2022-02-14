
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct ref_map {char* stabs; int value; struct symbol* sym; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ref_map*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct ref_map* VAR_4 ;
 scalar_t__ FUNC_2 (struct ref_map*,int ) ;

void
FUNC_3 (int VAR_5, struct symbol *VAR_6, char *VAR_7, CORE_ADDR VAR_8)
{
  if (VAR_3 == 0)
    VAR_2 = 0;
  if (VAR_5 >= VAR_3)
    VAR_3 = VAR_5 + 1;
  if (VAR_3 > VAR_2 * VAR_0)
    {
      int VAR_9 = VAR_3 - VAR_2 * VAR_0;
      int VAR_10 = VAR_9 / VAR_0 + 1;
      VAR_4 = (struct ref_map *)
 FUNC_2 (VAR_4, FUNC_0 (VAR_2 + VAR_10));
      FUNC_1 (VAR_4 + VAR_2 * VAR_0, 0, VAR_10 * VAR_1);
      VAR_2 += VAR_10;
    }
  VAR_4[VAR_5].stabs = VAR_7;
  VAR_4[VAR_5].sym = VAR_6;
  VAR_4[VAR_5].value = VAR_8;
}
