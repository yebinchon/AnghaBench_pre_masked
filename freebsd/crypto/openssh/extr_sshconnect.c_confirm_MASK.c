
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ batch_mode; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_1 ;
 char* FUNC_1 (char const*,int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 size_t FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_2)
{
 const char *VAR_3, *VAR_4 = "Please type 'yes' or 'no': ";
 char *VAR_5;
 int VAR_6 = -1;

 if (VAR_1.batch_mode)
  return 0;
 for (VAR_3 = VAR_2;;VAR_3 = VAR_4) {
  VAR_5 = FUNC_1(VAR_3, VAR_0);
  if (VAR_5 == ((void*)0))
   return 0;
  VAR_5[FUNC_3(VAR_5, "\n")] = '\0';
  if (VAR_5[0] == '\0' || FUNC_2(VAR_5, "no") == 0)
   VAR_6 = 0;
  else if (FUNC_2(VAR_5, "yes") == 0)
   VAR_6 = 1;
  FUNC_0(VAR_5);
  if (VAR_6 != -1)
   return VAR_6;
 }
}
