
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_2__ {int aspect_ratio; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int *,char const*,int,int,int*,int*) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_3, int *VAR_4, int *VAR_5)
{
    int VAR_6 = 0, VAR_7 = 0;
    float VAR_8;
    float VAR_9;
    int VAR_10 = VAR_1 - 1;
    int VAR_11 = VAR_0 - 2;
    int VAR_12 = VAR_11;
    int VAR_13 = VAR_2.aspect_ratio;


    FUNC_0((WINDOW *) 0, VAR_3, VAR_10, VAR_11, &VAR_6, &VAR_7);
    VAR_8 = (float) (VAR_7 / VAR_6);





    if (VAR_8 > VAR_13) {
 VAR_9 = VAR_8 / (float) VAR_13;
 VAR_11 = (int) ((float) VAR_7 / VAR_9 + 4);
 FUNC_0((WINDOW *) 0, VAR_3, VAR_10, VAR_11, &VAR_6, &VAR_7);
 VAR_8 = (float) VAR_7 / (float) VAR_6;
    }






    while (VAR_8 < VAR_13 && VAR_11 < VAR_12) {
 VAR_11 += 4;
 FUNC_0((WINDOW *) 0, VAR_3, VAR_10, VAR_11, &VAR_6, &VAR_7);
 VAR_8 = (float) (VAR_7 / VAR_6);
    }

    *VAR_4 = VAR_6;
    *VAR_5 = VAR_7;
}
