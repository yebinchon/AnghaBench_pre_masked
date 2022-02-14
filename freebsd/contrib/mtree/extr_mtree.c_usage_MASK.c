
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int ,char*,...) ;
 char* FUNC_3 () ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(void)
{
 unsigned int VAR_2;

 FUNC_2(VAR_1,
     "usage: %s [-bCcDdejLlMnPqrStUuWx] [-i|-m] [-E tags]\n"
     "\t\t[-f spec] [-f spec]\n"
     "\t\t[-I tags] [-K keywords] [-k keywords] [-N dbdir] [-p path]\n"
     "\t\t[-R keywords] [-s seed] [-X exclude-file]\n"
     "\t\t[-F flavor]\n",
     FUNC_3());
 FUNC_2(VAR_1, "\nflavors:");
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  FUNC_2(VAR_1, " %s", VAR_0[VAR_2].name);
 FUNC_2(VAR_1, "\n");
 FUNC_1(1);
}
