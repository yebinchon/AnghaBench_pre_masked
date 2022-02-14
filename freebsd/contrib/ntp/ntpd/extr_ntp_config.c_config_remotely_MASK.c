
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sockaddr_u ;
typedef int origin ;
struct TYPE_6__ {int s; } ;
struct TYPE_5__ {TYPE_2__ value; int attr; } ;
struct TYPE_7__ {TYPE_1__ source; int timestamp; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int,char*,char*) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;

void
FUNC_10(
 sockaddr_u * VAR_3
 )
{
 char VAR_4[128];

 FUNC_6(VAR_4, sizeof(VAR_4), "remote config from %s",
   FUNC_7(VAR_3));
 FUNC_4(VAR_4, ((void*)0));
 FUNC_2(&VAR_2);
 FUNC_9();
 FUNC_3();

 VAR_2.source.attr = VAR_0;
 VAR_2.timestamp = FUNC_8(((void*)0));
 VAR_2.source.value.s = FUNC_1(FUNC_7(VAR_3));

 FUNC_0(1, ("Finished Parsing!!\n"));

 FUNC_5(VAR_1);
}
