
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cmd; } ;
typedef TYPE_1__ CMD ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(char *VAR_0)
{
    CMD VAR_1;
    int VAR_2 = 1;

 while (1) {
 FUNC_0(VAR_0, &VAR_1);
  switch (VAR_1.cmd) {
 case 0:



     break;
 case 'g':



     VAR_2 = FUNC_2(&VAR_1);
     break;
 case 'p':
     VAR_2 = FUNC_3(&VAR_1);
     break;
 case 'a':
     VAR_2 = FUNC_1(&VAR_1);
     break;
 default:
     VAR_2 = 0;
     break;
 }
 break;
    }
    return (VAR_2);
}
