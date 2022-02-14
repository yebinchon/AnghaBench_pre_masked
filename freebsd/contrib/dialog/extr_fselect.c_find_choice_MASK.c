
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int choice; int length; char** data; } ;
typedef TYPE_1__ LIST ;


 int FUNC_0 (char) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0, LIST * VAR_1)
{
    int VAR_2;
    int VAR_3 = VAR_1->choice;
    int VAR_4, VAR_5, VAR_6, VAR_7;

    if (*VAR_0 == 0) {
 VAR_1->choice = 0;
    } else {




 VAR_4 = 0;
 VAR_6 = 256;
 for (VAR_2 = 0; VAR_2 < VAR_1->length; VAR_2++) {
     char *VAR_8 = VAR_0;
     char *VAR_9 = VAR_1->data[VAR_2];

     VAR_5 = 0;
     while ((*VAR_8 != 0) && (*VAR_9 != 0) && (*VAR_8 == *VAR_9)) {
  VAR_8++;
  VAR_9++;
  VAR_5++;
     }
     VAR_7 = FUNC_0(*VAR_8) - FUNC_0(*VAR_9);
     if (VAR_7 < 0)
  VAR_7 = -VAR_7;
     if ((VAR_5 > VAR_4)
  || (VAR_4 == VAR_5 && VAR_7 < VAR_6)) {
  VAR_4 = VAR_5;
  VAR_6 = VAR_7;
  VAR_1->choice = VAR_2;
     }
 }
    }
    if (VAR_3 != VAR_1->choice) {
 FUNC_1(VAR_1);
    }
    return (VAR_3 != VAR_1->choice);
}
