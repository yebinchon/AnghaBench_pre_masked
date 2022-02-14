
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * msgring_handler ;
struct TYPE_2__ {void* arg; int * action; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,int,int *,void*) ;

int
FUNC_4(int VAR_4, int VAR_5, msgring_handler VAR_6,
    void *VAR_7)
{
 int VAR_8;

 if (VAR_1)
  FUNC_3("Register handler %d-%d %p(%p)\n",
      VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_0(VAR_4 >= 0 && VAR_4 <= VAR_5 && VAR_5 < VAR_0,
     ("Invalid value for bucket range %d,%d", VAR_4, VAR_5));

 FUNC_1(&VAR_3);
 for (VAR_8 = VAR_4; VAR_8 <= VAR_5; VAR_8++) {
  FUNC_0(VAR_2[VAR_8].action == ((void*)0),
     ("Bucket %d already used [action %p]", VAR_8, VAR_2[VAR_8].action));
  VAR_2[VAR_8].action = VAR_6;
  VAR_2[VAR_8].arg = VAR_7;
 }
 FUNC_2(&VAR_3);
 return (0);
}
