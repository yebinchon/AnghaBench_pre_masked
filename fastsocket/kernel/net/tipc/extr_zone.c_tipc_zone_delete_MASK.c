
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct _zone {int * clusters; } ;


 int FUNC_0 (struct _zone*) ;
 int FUNC_1 (int ) ;
 size_t VAR_0 ;

void FUNC_2(struct _zone *VAR_1)
{
 u32 VAR_2;

 if (!VAR_1)
  return;
 for (VAR_2 = 1; VAR_2 <= VAR_0; VAR_2++) {
  FUNC_1(VAR_1->clusters[VAR_2]);
 }
 FUNC_0(VAR_1);
}
