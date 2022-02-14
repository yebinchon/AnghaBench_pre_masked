
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {uintptr_t dtt_base; uintptr_t dtt_limit; } ;
typedef TYPE_1__ dtrace_toxrange_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_3 (int,int ) ;

__attribute__((used)) static void
FUNC_4(uintptr_t VAR_4, uintptr_t VAR_5)
{
 if (VAR_2 >= VAR_3) {
  int VAR_6, VAR_7;
  dtrace_toxrange_t *VAR_8;

  VAR_6 = VAR_3 * sizeof (dtrace_toxrange_t);

  if (VAR_6 == 0) {
   FUNC_0(VAR_1 == ((void*)0));
   FUNC_0(VAR_3 == 0);
   VAR_3 = 1;
  } else {
   VAR_3 <<= 1;
  }

  VAR_7 = VAR_3 * sizeof (dtrace_toxrange_t);
  VAR_8 = FUNC_3(VAR_7, VAR_0);

  if (VAR_1 != ((void*)0)) {
   FUNC_0(VAR_6 != 0);
   FUNC_1(VAR_1, VAR_8, VAR_6);
   FUNC_2(VAR_1, VAR_6);
  }

  VAR_1 = VAR_8;
 }

 FUNC_0(VAR_1[VAR_2].dtt_base == 0);
 FUNC_0(VAR_1[VAR_2].dtt_limit == 0);

 VAR_1[VAR_2].dtt_base = VAR_4;
 VAR_1[VAR_2].dtt_limit = VAR_5;
 VAR_2++;
}
