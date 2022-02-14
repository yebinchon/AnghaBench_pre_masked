
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* to_shortname; char* to_longname; char* to_doc; int to_open; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int *,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 TYPE_1__ VAR_5 ;

void
FUNC_3 (void)
{
  FUNC_2 ("lo 0\r", &VAR_0, &VAR_4);
  FUNC_2 ("lo 1\r", &VAR_1, &VAR_5);
  FUNC_1 (&VAR_4);

  VAR_4 = "ppcbug";
  VAR_4 = "PowerPC PPCBug monitor on port 0";
  VAR_4 = "Debug via the PowerPC PPCBug monitor using port 0.\nSpecify the serial device it is connected to (e.g. /dev/ttya).";

  VAR_4 = VAR_2;

  FUNC_0 (&VAR_4);

  FUNC_1 (&VAR_5);

  VAR_5 = "ppcbug1";
  VAR_5 = "PowerPC PPCBug monitor on port 1";
  VAR_5 = "Debug via the PowerPC PPCBug monitor using port 1.\nSpecify the serial device it is connected to (e.g. /dev/ttya).";

  VAR_5 = VAR_3;

  FUNC_0 (&VAR_5);
}
