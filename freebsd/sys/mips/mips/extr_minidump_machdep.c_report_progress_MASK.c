
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int min_per; int max_per; int visited; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_2(uint64_t VAR_1, uint64_t VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = 100 - ((VAR_1 * 100) / VAR_2);
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  if (VAR_3 < VAR_0[VAR_4].min_per ||
      VAR_3 > VAR_0[VAR_4].max_per)
   continue;
  if (VAR_0[VAR_4].visited)
   return;
  VAR_0[VAR_4].visited = 1;
  FUNC_1("..%d%%", VAR_3);
  return;
 }
}
