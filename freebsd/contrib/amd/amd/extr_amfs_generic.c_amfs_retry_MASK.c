
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct continuation {scalar_t__ start; int retry; scalar_t__* al; TYPE_1__* mp; } ;
typedef scalar_t__ opaque_t ;
struct TYPE_3__ {int am_path; } ;
typedef TYPE_1__ am_node ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct continuation*) ;
 int VAR_3 ;
 int FUNC_1 (struct continuation*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct continuation*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(int VAR_4, int VAR_5, opaque_t VAR_6)
{
  struct continuation *VAR_7 = (struct continuation *) VAR_6;
  am_node *VAR_8 = VAR_7->mp;
  int VAR_9 = 0;

  FUNC_3("Commencing retry for mount of %s", VAR_8->am_path);

  FUNC_5(VAR_8);

  if ((VAR_7->start + VAR_0) < FUNC_2(((void*)0))) {





    FUNC_6(VAR_3, "mount of \"%s\" has timed out", VAR_8->am_path);
    VAR_9 = VAR_1;
    while (*VAR_7->al)
      VAR_7->al++;

    VAR_7->retry = VAR_2;
  }
  if (VAR_9 || !FUNC_0(VAR_7))
    VAR_9 = FUNC_1(VAR_7);
  else






    FUNC_4(VAR_7);

  FUNC_7();
}
