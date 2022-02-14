
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int tab_len; } ;
struct TYPE_8__ {scalar_t__ tab_correct; } ;
struct TYPE_6__ {int * input; } ;
struct TYPE_7__ {int hscroll; char* line; TYPE_1__ obj; } ;
typedef TYPE_2__ MY_OBJ ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static char *
FUNC_3(MY_OBJ * VAR_5)
{
    FILE *VAR_6 = VAR_5->obj.input;
    int VAR_7 = -(VAR_5->hscroll);
    int VAR_8, VAR_9, VAR_10;

    do {
 if (((VAR_10 = FUNC_2(VAR_6)) == VAR_0) && !FUNC_1(VAR_6))
     FUNC_0("Error moving file pointer in get_line().");
 else if (!FUNC_1(VAR_6) && (VAR_10 != '\n')) {
     if ((VAR_10 == VAR_2) && (VAR_4.tab_correct)) {
  VAR_9 = VAR_3.tab_len
      - ((VAR_7 + VAR_5->hscroll) % VAR_3.tab_len);
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
      if (VAR_7 >= 0 && VAR_7 < VAR_1)
   VAR_5->line[VAR_7] = ' ';
      ++VAR_7;
  }
     } else {
  if (VAR_7 >= 0)
      VAR_5->line[VAR_7] = (char) VAR_10;
  ++VAR_7;
     }
     if (VAR_7 >= VAR_1)
  break;
 }
    } while (!FUNC_1(VAR_6) && (VAR_10 != '\n'));

    if (VAR_7 < 0)
 VAR_7 = 0;
    VAR_5->line[VAR_7] = '\0';

    return VAR_5->line;
}
