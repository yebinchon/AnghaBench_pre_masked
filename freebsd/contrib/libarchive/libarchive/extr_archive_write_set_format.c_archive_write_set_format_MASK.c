
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive {int dummy; } ;
struct TYPE_2__ {int code; int (* setter ) (struct archive*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive*,int ,char*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct archive*) ;

int
FUNC_2(struct archive *VAR_3, int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_2[VAR_5].code != 0; VAR_5++) {
  if (VAR_4 == VAR_2[VAR_5].code)
   return ((VAR_2[VAR_5].setter)(VAR_3));
 }

 FUNC_0(VAR_3, VAR_1, "No such format");
 return (VAR_0);
}
