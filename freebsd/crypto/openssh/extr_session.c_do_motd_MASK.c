
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buf ;
struct TYPE_2__ {scalar_t__ print_motd; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int ) ;
 int VAR_0 ;
 char* FUNC_4 (int ,char*,char*,char*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

void
FUNC_5(void)
{
 FILE *VAR_3;
 char VAR_4[256];

 if (VAR_1.print_motd) {




  VAR_3 = FUNC_2("/etc/motd", "r");

  if (VAR_3) {
   while (FUNC_1(VAR_4, sizeof(VAR_4), VAR_3))
    FUNC_3(VAR_4, VAR_2);
   FUNC_0(VAR_3);
  }
 }
}
