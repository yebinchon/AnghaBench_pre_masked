
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; int name; } ;
typedef TYPE_1__ OPLIST ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int,char*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_5 ;

int
FUNC_3(void)
{
 OPLIST *VAR_6;

 while ((VAR_6 = FUNC_0()) != ((void*)0)) {
  if (FUNC_2(VAR_6->name, VAR_3) ||
      FUNC_2(VAR_6->value, VAR_2)) {
   FUNC_1(1, "Unknown tar format -o option/value pair %s=%s",
       VAR_6->name, VAR_6->value);
   FUNC_1(1,"%s=%s is the only supported tar format option",
       VAR_3, VAR_2);
   return(-1);
  }




  if ((VAR_4 != VAR_0) && (VAR_4 != VAR_1)) {
   FUNC_1(1, "%s=%s is only supported when writing.",
       VAR_6->name, VAR_6->value);
   return(-1);
  }
  VAR_5 = 1;
 }
 return(0);
}
