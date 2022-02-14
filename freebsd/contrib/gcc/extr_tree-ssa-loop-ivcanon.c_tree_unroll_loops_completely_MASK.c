
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loops {unsigned int num; struct loop** parray; } ;
struct loop {int header; } ;
typedef enum unroll_level { ____Placeholder_unroll_level } unroll_level ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct loops*,struct loop*,int,int,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;

unsigned int
FUNC_3 (struct loops *VAR_4, bool VAR_5)
{
  unsigned VAR_6;
  struct loop *VAR_7;
  bool VAR_8 = 0;
  enum unroll_level VAR_9;

  for (VAR_6 = 1; VAR_6 < VAR_4->num; VAR_6++)
    {
      VAR_7 = VAR_4->parray[VAR_6];

      if (!VAR_7)
 continue;

      if (VAR_5 && FUNC_1 (VAR_7->header))
 VAR_9 = VAR_1;
      else
 VAR_9 = VAR_2;
      VAR_8 |= FUNC_0 (VAR_4, VAR_7,
       0, VAR_9,
       !VAR_3);
    }



  FUNC_2 ();

  if (VAR_8)
    return VAR_0;
  return 0;
}
