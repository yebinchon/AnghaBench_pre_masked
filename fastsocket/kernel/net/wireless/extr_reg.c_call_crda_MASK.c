
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,...) ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_2)
{
 if (!FUNC_0((char *) VAR_2))
  FUNC_2("Calling CRDA for country: %c%c\n",
   VAR_2[0], VAR_2[1]);
 else
  FUNC_2("Calling CRDA to update world regulatory domain\n");


 FUNC_3(VAR_2);

 return FUNC_1(&VAR_1->dev.kobj, VAR_0);
}
