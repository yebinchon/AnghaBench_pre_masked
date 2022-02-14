
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; char* name; int blocks; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char const*,char const*,int,int,int,int,char**) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_4, const char *VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8, VAR_9, VAR_10;
    char VAR_11[VAR_1][40];
    char *VAR_12[VAR_1 * 2];
    int VAR_13[VAR_1];

    VAR_9 = 0;
    for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
 if (VAR_3[VAR_8].type == VAR_0) {
     VAR_12[VAR_9 * 2] = VAR_3[VAR_8].name;
     FUNC_2(VAR_11[VAR_9], "Linux partition with %d blocks",
      VAR_3[VAR_8].blocks);
     VAR_12[VAR_9 * 2 + 1] = VAR_11[VAR_9];
     VAR_13[VAR_9] = VAR_8;
     VAR_9++;
 }
    }
    VAR_10 = FUNC_1(VAR_4, VAR_5, VAR_6 + VAR_9, VAR_7, VAR_9, VAR_9, VAR_12);
    FUNC_0();
    if (VAR_10 >= 0)
 VAR_10 = VAR_13[VAR_10];
    return VAR_10;
}
