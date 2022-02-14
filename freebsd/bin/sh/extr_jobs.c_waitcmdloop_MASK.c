
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct job {scalar_t__ state; scalar_t__ used; scalar_t__ remembered; int changed; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct job* VAR_3 ;
 int FUNC_3 (int,struct job*) ;
 int FUNC_4 (struct job*) ;
 int FUNC_5 (struct job*) ;
 int VAR_4 ;
 struct job* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_6(struct job *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 struct job *VAR_12;






 do {
  if (VAR_8 != ((void*)0)) {
   if (VAR_8->state == VAR_2) {
    VAR_9 = FUNC_5(VAR_8);
    if (FUNC_1(VAR_9))
     VAR_10 = FUNC_0(VAR_9);
    else
     VAR_10 = FUNC_2(VAR_9) + 128;
    if (! VAR_4 || ! VAR_8->changed)
     FUNC_4(VAR_8);
    else {
     VAR_8->remembered = 0;
     if (VAR_8 == VAR_3)
      VAR_3 = ((void*)0);
    }
    return VAR_10;
   }
  } else {
   for (VAR_12 = VAR_5 ; VAR_12 < VAR_5 + VAR_6; VAR_12++)
    if (VAR_12->used && VAR_12->state == VAR_2) {
     if (! VAR_4 || ! VAR_12->changed)
      FUNC_4(VAR_12);
     else {
      VAR_12->remembered = 0;
      if (VAR_12 == VAR_3)
       VAR_3 = ((void*)0);
     }
    }
   for (VAR_12 = VAR_5 ; ; VAR_12++) {
    if (VAR_12 >= VAR_5 + VAR_6) {
     return 0;
    }
    if (VAR_12->used && VAR_12->state == 0)
     break;
   }
  }
 } while (FUNC_3(VAR_0 | VAR_1, (struct job *)((void*)0)) != -1);

 VAR_11 = VAR_7;
 VAR_7 = 0;
 return VAR_11 + 128;
}
