
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct dfa {int sindex; scalar_t__* tokens; TYPE_7__* states; int salloc; } ;
struct TYPE_11__ {int nelem; TYPE_2__* elems; } ;
typedef TYPE_3__ position_set ;
struct TYPE_14__ {int constraint; int index; } ;
struct TYPE_9__ {scalar_t__ nelem; } ;
struct TYPE_12__ {int nelem; TYPE_8__* elems; } ;
struct TYPE_13__ {int hash; int newline; int letter; int backref; int constraint; scalar_t__ first_end; TYPE_1__ mbps; TYPE_6__ elems; } ;
struct TYPE_10__ {int index; int constraint; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_8__*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_7__*,int ,int ,int) ;
 scalar_t__ FUNC_2 (int,int,int,int,int) ;
 int FUNC_3 (TYPE_3__ const*,TYPE_6__*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_4 (struct dfa *VAR_5, position_set const *VAR_6, int VAR_7, int VAR_8)
{
  int VAR_9 = 0;
  int VAR_10;
  int VAR_11, VAR_12;

  VAR_7 = VAR_7 ? 1 : 0;
  VAR_8 = VAR_8 ? 1 : 0;

  for (VAR_11 = 0; VAR_11 < VAR_6->nelem; ++VAR_11)
    VAR_9 ^= VAR_6->elems[VAR_11].index + VAR_6->elems[VAR_11].constraint;


  for (VAR_11 = 0; VAR_11 < VAR_5->sindex; ++VAR_11)
    {
      if (VAR_9 != VAR_5->states[VAR_11].hash || VAR_6->nelem != VAR_5->states[VAR_11].elems.nelem
   || VAR_7 != VAR_5->states[VAR_11].newline || VAR_8 != VAR_5->states[VAR_11].letter)
 continue;
      for (VAR_12 = 0; VAR_12 < VAR_6->nelem; ++VAR_12)
 if (VAR_6->elems[VAR_12].constraint
     != VAR_5->states[VAR_11].elems.elems[VAR_12].constraint
     || VAR_6->elems[VAR_12].index != VAR_5->states[VAR_11].elems.elems[VAR_12].index)
   break;
      if (VAR_12 == VAR_6->nelem)
 return VAR_11;
    }


  FUNC_1(VAR_5->states, VAR_3, VAR_5->salloc, VAR_5->sindex);
  VAR_5->states[VAR_11].hash = VAR_9;
  FUNC_0(VAR_5->states[VAR_11].elems.elems, VAR_4, VAR_6->nelem);
  FUNC_3(VAR_6, &VAR_5->states[VAR_11].elems);
  VAR_5->states[VAR_11].newline = VAR_7;
  VAR_5->states[VAR_11].letter = VAR_8;
  VAR_5->states[VAR_11].backref = 0;
  VAR_5->states[VAR_11].constraint = 0;
  VAR_5->states[VAR_11].first_end = 0;




  for (VAR_12 = 0; VAR_12 < VAR_6->nelem; ++VAR_12)
    if (VAR_5->tokens[VAR_6->elems[VAR_12].index] < 0)
      {
 VAR_10 = VAR_6->elems[VAR_12].constraint;
 if (FUNC_2(VAR_10, VAR_7, 0, VAR_8, 0)
     || FUNC_2(VAR_10, VAR_7, 0, VAR_8, 1)
     || FUNC_2(VAR_10, VAR_7, 1, VAR_8, 0)
     || FUNC_2(VAR_10, VAR_7, 1, VAR_8, 1))
   VAR_5->states[VAR_11].constraint |= VAR_10;
 if (! VAR_5->states[VAR_11].first_end)
   VAR_5->states[VAR_11].first_end = VAR_5->tokens[VAR_6->elems[VAR_12].index];
      }
    else if (VAR_5->tokens[VAR_6->elems[VAR_12].index] == VAR_0)
      {
 VAR_5->states[VAR_11].constraint = VAR_2;
 VAR_5->states[VAR_11].backref = 1;
      }

  ++VAR_5->sindex;

  return VAR_11;
}
