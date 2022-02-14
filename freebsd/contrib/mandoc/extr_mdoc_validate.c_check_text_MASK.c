
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_man {TYPE_1__* last; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int,int *) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static void
FUNC_2(struct roff_man *VAR_2, int VAR_3, int VAR_4, char *VAR_5)
{
 char *VAR_6;

 if (VAR_2->last->flags & VAR_1)
  return;

 for (VAR_6 = VAR_5; ((void*)0) != (VAR_5 = FUNC_1(VAR_5, '\t')); VAR_5++)
  FUNC_0(VAR_0, VAR_3, VAR_4 + (int)(VAR_5 - VAR_6), ((void*)0));
}
