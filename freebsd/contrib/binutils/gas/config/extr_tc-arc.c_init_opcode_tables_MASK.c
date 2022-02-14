
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int valueT ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {char* name; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_6 ;
 int FUNC_5 (int *,char*,void*) ;
 int * FUNC_6 () ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_11 (int VAR_11)
{
  int VAR_12;
  char *VAR_13;

  if ((VAR_2 = FUNC_6 ()) == ((void*)0))
    FUNC_2 ("virtual memory exhausted");

  if (!FUNC_4 (VAR_8, VAR_5, VAR_11))
    FUNC_3 ("could not set architecture and machine");



  FUNC_1 (FUNC_0 (VAR_11, VAR_9));



  VAR_13 = "";
  for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
    {
      if (FUNC_7 (VAR_3[VAR_12].name, VAR_13) != 0)
 FUNC_5 (VAR_2, VAR_3[VAR_12].name, (void *) (VAR_3 + VAR_12));
      VAR_13 = VAR_3[VAR_12].name;
    }
  for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++)
    {
      if (FUNC_9 (VAR_0[VAR_12].name))
 continue;


      FUNC_10 (FUNC_8 (VAR_0[VAR_12].name,
       VAR_7,
       (valueT) &VAR_0[VAR_12],
       &VAR_10));
    }


  VAR_6 = 1;
}
