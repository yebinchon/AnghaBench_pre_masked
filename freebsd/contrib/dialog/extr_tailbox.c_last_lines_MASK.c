
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * input; } ;
struct TYPE_5__ {TYPE_1__ obj; } ;
typedef TYPE_2__ MY_OBJ ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 size_t FUNC_2 (char*,int,size_t,int *) ;
 int FUNC_3 (int *,long,int ) ;
 long FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(MY_OBJ * VAR_3, int VAR_4)
{
    FILE *VAR_5 = VAR_3->obj.input;
    size_t VAR_6;
    int VAR_7 = 0;
    char VAR_8[VAR_0 + 1];
    size_t VAR_9;
    size_t VAR_10;
    long VAR_11 = 0;
    long VAR_12 = 0;

    if (FUNC_3(VAR_5, 0L, VAR_1) == -1
 || (VAR_12 = FUNC_4(VAR_5)) < 0)
 FUNC_0("Error moving file pointer in last_lines().");

    if (VAR_12 != 0) {
 ++VAR_4;
 for (;;) {
     if (VAR_12 >= VAR_0) {
  VAR_9 = VAR_0;
     } else {
  VAR_9 = (size_t) VAR_12;
     }
     VAR_12 = VAR_12 - (long) VAR_9;
     if (FUNC_3(VAR_5, VAR_12, VAR_2) == -1)
  FUNC_0("Error moving file pointer in last_lines().");
     VAR_10 = FUNC_2(VAR_8, sizeof(char), VAR_9, VAR_5);
     if (FUNC_1(VAR_5))
  FUNC_0("Error reading file in last_lines().");

     if (VAR_10 == 0) {
  VAR_12 = 0;
  VAR_11 = 0;
  break;
     }

     VAR_11 += (long) VAR_10;
     for (VAR_6 = VAR_10 - 1; VAR_6 != 0; --VAR_6) {
  if (VAR_8[VAR_6] == '\n') {
      if (++VAR_7 > VAR_4)
   break;
      VAR_11 = (long) (VAR_6 + 1);
  }
     }

     if (VAR_7 > VAR_4) {
  break;
     } else if (VAR_12 == 0) {
  VAR_11 = 0;
  break;
     }
 }

 if (FUNC_3(VAR_5, VAR_12 + VAR_11, VAR_2) == -1)
     FUNC_0("Error moving file pointer in last_lines().");
    }
}
