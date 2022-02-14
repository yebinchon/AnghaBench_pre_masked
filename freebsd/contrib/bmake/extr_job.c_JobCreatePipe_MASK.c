
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* jobPipe; } ;
typedef TYPE_1__ Job ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(Job *VAR_7, int VAR_8)
{
    int VAR_9, VAR_10, VAR_11;

    if (FUNC_3(VAR_7->jobPipe) == -1)
 FUNC_0("Cannot create pipe: %s", FUNC_4(VAR_6));

    for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {

       VAR_10 = FUNC_2(VAR_7->jobPipe[VAR_9], VAR_1, VAR_8);
       if (VAR_10 != -1) {
    FUNC_1(VAR_7->jobPipe[VAR_9]);
    VAR_7->jobPipe[VAR_9] = VAR_10;
       }
    }


    if (FUNC_2(VAR_7->jobPipe[0], VAR_3, VAR_0) == -1)
 FUNC_0("Cannot set close-on-exec: %s", FUNC_4(VAR_6));
    if (FUNC_2(VAR_7->jobPipe[1], VAR_3, VAR_0) == -1)
 FUNC_0("Cannot set close-on-exec: %s", FUNC_4(VAR_6));







    VAR_11 = FUNC_2(VAR_7->jobPipe[0], VAR_2, 0);
    if (VAR_11 == -1)
 FUNC_0("Cannot get flags: %s", FUNC_4(VAR_6));
    VAR_11 |= VAR_5;
    if (FUNC_2(VAR_7->jobPipe[0], VAR_4, VAR_11) == -1)
 FUNC_0("Cannot set flags: %s", FUNC_4(VAR_6));
}
