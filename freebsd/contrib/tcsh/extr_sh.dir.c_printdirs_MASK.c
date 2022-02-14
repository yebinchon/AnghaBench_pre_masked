
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct directory {int * di_name; struct directory* di_prev; } ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_3 ;
 struct directory* VAR_4 ;
 struct directory VAR_5 ;
 int * FUNC_1 (int **) ;
 int FUNC_2 (char*,int *,...) ;
 int FUNC_3 (char) ;

__attribute__((used)) static void
FUNC_4(int VAR_6)
{
    struct directory *VAR_7;
    Char *VAR_8, *VAR_9;
    int VAR_10, VAR_11, VAR_12;

    VAR_7 = VAR_4;
    VAR_10 = 0;
    VAR_12 = 0;
    do {
 if (VAR_7 == &VAR_5)
     continue;
 if (VAR_6 & VAR_2) {
     FUNC_2("%d\t", VAR_10++);
     VAR_12 = 0;
 }
 VAR_8 = VAR_7->di_name;
 VAR_9 = ((void*)0);
 if (!(VAR_6 & VAR_1) && (VAR_9 = FUNC_1(&VAR_8)) != ((void*)0))
     VAR_11 = (int) (FUNC_0(VAR_9) + FUNC_0(VAR_8) + 2);
 else
     VAR_11 = (int) (FUNC_0(VAR_8) + 1);

 VAR_12 += VAR_11;
 if ((VAR_6 & VAR_0) && VAR_12 >= VAR_3 - 1 && VAR_11 < VAR_3) {
     FUNC_3('\n');
     VAR_12 = VAR_11;
 }
 if (VAR_9)
     FUNC_2("~%S", VAR_9);
 FUNC_2("%-S%c", VAR_8, (VAR_6 & VAR_2) ? '\n' : ' ');
    } while ((VAR_7 = VAR_7->di_prev) != VAR_4);
    if (!(VAR_6 & VAR_2))
 FUNC_3('\n');
}
