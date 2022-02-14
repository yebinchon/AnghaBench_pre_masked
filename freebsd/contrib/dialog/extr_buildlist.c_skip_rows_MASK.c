
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int item_no; int * list; } ;
typedef int MY_DATA ;
typedef TYPE_1__ ALL_DATA ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(ALL_DATA * VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    MY_DATA *VAR_4 = VAR_0->list + VAR_3;
    int VAR_5 = VAR_1;
    int VAR_6;

    if (VAR_2 > 0) {
 for (VAR_6 = VAR_1 + 1; (VAR_6 < VAR_0->item_no) && (VAR_6 <= VAR_1 + VAR_2); ++VAR_6) {
     if (FUNC_1(VAR_4, VAR_6) == 0)
  break;
     VAR_5 = VAR_6;
 }
    } else if (VAR_2 < 0) {
 VAR_5 -= VAR_2;
 if (VAR_5 < 0)
     VAR_5 = 0;
    }
    FUNC_0(("! skip_rows row %d, skip %d, %s = %d\n",
    VAR_1, VAR_2, FUNC_2(VAR_3), VAR_5));
    return VAR_5;
}
