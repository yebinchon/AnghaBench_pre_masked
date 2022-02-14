
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct partition {size_t xmid; size_t ymid; int lo_minimal; int hi_minimal; } ;
typedef size_t lin ;
struct TYPE_2__ {int* changed; size_t* realindexes; } ;


 int FUNC_0 (size_t,size_t,size_t,size_t,int,struct partition*) ;
 TYPE_1__* VAR_0 ;
 size_t* VAR_1 ;
 size_t* VAR_2 ;

__attribute__((used)) static void
FUNC_1 (lin VAR_3, lin VAR_4, lin VAR_5, lin VAR_6, bool VAR_7)
{
  lin const *VAR_8 = VAR_1;
  lin const *VAR_9 = VAR_2;


  while (VAR_3 < VAR_4 && VAR_5 < VAR_6 && VAR_8[VAR_3] == VAR_9[VAR_5])
    ++VAR_3, ++VAR_5;

  while (VAR_4 > VAR_3 && VAR_6 > VAR_5 && VAR_8[VAR_4 - 1] == VAR_9[VAR_6 - 1])
    --VAR_4, --VAR_6;


  if (VAR_3 == VAR_4)
    while (VAR_5 < VAR_6)
      VAR_0[1].changed[VAR_0[1].realindexes[VAR_5++]] = 1;
  else if (VAR_5 == VAR_6)
    while (VAR_3 < VAR_4)
      VAR_0[0].changed[VAR_0[0].realindexes[VAR_3++]] = 1;
  else
    {
      struct partition VAR_10;


      FUNC_0 (VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, &VAR_10);


      FUNC_1 (VAR_3, VAR_10.xmid, VAR_5, VAR_10.ymid, VAR_10.lo_minimal);
      FUNC_1 (VAR_10.xmid, VAR_4, VAR_10.ymid, VAR_6, VAR_10.hi_minimal);
    }
}
