
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int c_cflag; int c_lflag; } ;
struct TYPE_8__ {char* driver_name; char* name; int flags; TYPE_1__ init_termios; int subtype; int type; int minor_start; int major; int owner; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_14 ;
 TYPE_2__* VAR_15 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 TYPE_1__ VAR_16 ;

int FUNC_6(void)
{
 VAR_15 = FUNC_2(VAR_8);
 if (!VAR_15)
  return -1;

 VAR_15->owner = VAR_10;
 VAR_15->driver_name = "rfcomm";
 VAR_15->name = "rfcomm";
 VAR_15->major = VAR_6;
 VAR_15->minor_start = VAR_7;
 VAR_15->type = VAR_13;
 VAR_15->subtype = VAR_9;
 VAR_15->flags = VAR_12 | VAR_11;
 VAR_15->init_termios = VAR_16;
 VAR_15->init_termios.c_cflag = VAR_0 | VAR_3 | VAR_2 | VAR_4 | VAR_1;
 VAR_15->init_termios.c_lflag &= ~VAR_5;
 FUNC_5(VAR_15, &VAR_14);

 if (FUNC_4(VAR_15)) {
  FUNC_0("Can't register RFCOMM TTY driver");
  FUNC_3(VAR_15);
  return -1;
 }

 FUNC_1("RFCOMM TTY layer initialized");

 return 0;
}
