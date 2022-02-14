
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct keyent_t {scalar_t__* map; int spcl; scalar_t__ flgs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct keyent_t*,int) ;
 int VAR_2 ;
 int FUNC_1 (struct thread*,int ) ;

__attribute__((used)) static int
FUNC_2(struct keyent_t *VAR_3, struct keyent_t *VAR_4, struct thread *VAR_5)
{
 int VAR_6;


 if (VAR_2 <= 0)
  return (0);


 if (VAR_2 >= 2) {
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
   if (VAR_3->map[VAR_6] != VAR_4->map[VAR_6])
    return FUNC_1(VAR_5, VAR_1);
  if (VAR_3->spcl != VAR_4->spcl)
   return FUNC_1(VAR_5, VAR_1);
  if (VAR_3->flgs != VAR_4->flgs)
   return FUNC_1(VAR_5, VAR_1);
  return (0);
 }


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {




  if (!FUNC_0(VAR_3, VAR_6) && !FUNC_0(VAR_4, VAR_6))
   continue;
  if ((VAR_3->spcl & (0x80 >> VAR_6)) == (VAR_4->spcl & (0x80 >> VAR_6))
      && VAR_3->map[VAR_6] == VAR_4->map[VAR_6])
   continue;
  return FUNC_1(VAR_5, VAR_1);
 }

 return (0);
}
