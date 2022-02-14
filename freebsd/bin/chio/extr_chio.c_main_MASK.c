
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * cc_name; int (* cc_handler ) (int *,int,char**) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int,char*,char*) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 (int *,int ,int) ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_7 (char*,int *) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,int *,int ) ;
 int FUNC_10 (int *,int,char**) ;
 int FUNC_11 () ;

int
FUNC_12(int VAR_9, char **VAR_10)
{
 int VAR_11, VAR_12;

 while ((VAR_11 = FUNC_5(VAR_9, VAR_10, "f:")) != -1) {
  switch (VAR_11) {
  case 'f':
   VAR_4 = VAR_7;
   break;

  default:
   FUNC_11();
  }
 }
 VAR_9 -= VAR_8;
 VAR_10 += VAR_8;

 if (VAR_9 == 0)
  FUNC_11();


 if (VAR_4 == ((void*)0))
  if ((VAR_4 = FUNC_4(VAR_0)) == ((void*)0))
   VAR_4 = VAR_2;


 if ((VAR_3 = FUNC_6(VAR_4, VAR_1, 0600)) == -1)
  FUNC_1(1, "%s: open", VAR_4);


 if (FUNC_0(VAR_5))
  FUNC_1(1, "can't register cleanup function");


 for (VAR_12 = 0; VAR_6[VAR_12].cc_name != ((void*)0); ++VAR_12)
  if (FUNC_7(*VAR_10, VAR_6[VAR_12].cc_name) == 0)
   break;
 if (VAR_6[VAR_12].cc_name == ((void*)0)) {

  for (VAR_12 = 0; VAR_6[VAR_12].cc_name != ((void*)0); ++VAR_12)
   if (FUNC_9(*VAR_10, VAR_6[VAR_12].cc_name,
       FUNC_8(*VAR_10)) == 0)
    break;
 }

 if (VAR_6[VAR_12].cc_name == ((void*)0))
  FUNC_2(1, "unknown command: %s", *VAR_10);

 FUNC_3 ((*VAR_6[VAR_12].cc_handler)(VAR_6[VAR_12].cc_name, VAR_9, VAR_10));

}
