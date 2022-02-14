
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* t; } ;
typedef TYPE_1__ undo_t ;
struct TYPE_6__ {struct TYPE_6__* q_forw; } ;
typedef TYPE_2__ line_t ;
typedef int FILE ;


 long VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int FUNC_2 (char*,int ) ;
 TYPE_2__* FUNC_3 (long) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_5 (int ,long,long) ;
 int * FUNC_6 (int ) ;
 int VAR_6 ;
 int VAR_7 ;

long
FUNC_7(FILE *VAR_8, long VAR_9)
{
 line_t *VAR_10 = FUNC_3(VAR_9);
 undo_t *VAR_11 = ((void*)0);
 unsigned long VAR_12 = 0;
 int VAR_13 = VAR_5;
 int VAR_14 = VAR_4;
 int VAR_15 = (VAR_9 == VAR_2);
 int VAR_16;

 VAR_4 = VAR_5 = 0;
 for (VAR_3 = VAR_9; (VAR_16 = FUNC_4(VAR_8)) > 0; VAR_12 += VAR_16) {
  FUNC_1();
  if (FUNC_6(VAR_6) == ((void*)0)) {
   FUNC_0();
   return VAR_0;
  }
  VAR_10 = VAR_10->q_forw;
  if (VAR_11)
   VAR_11->t = VAR_10;
  else if ((VAR_11 = FUNC_5(VAR_1, VAR_3,
      VAR_3)) == ((void*)0)) {
   FUNC_0();
   return VAR_0;
  }
  FUNC_0();
 }
 if (VAR_16 < 0)
  return VAR_0;
 if (VAR_15 && VAR_12 && VAR_14 && VAR_13)
  FUNC_2("newline inserted\n", VAR_7);
 else if (VAR_5 && (!VAR_15 || (!VAR_4 && !VAR_14)))
  FUNC_2("newline appended\n", VAR_7);
 if (VAR_4 && VAR_5 && !VAR_15)
      VAR_12 += 1;
 if (!VAR_12)
  VAR_5 = 1;
 VAR_5 = VAR_15 ? VAR_5 : VAR_13;
 VAR_4 = VAR_4 | VAR_14;
 return VAR_12;
}
