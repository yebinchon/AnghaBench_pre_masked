
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
typedef int intmax_t ;
struct TYPE_2__ {scalar_t__ c_date; scalar_t__ c_ddate; char* c_host; char* c_label; int c_dev; int c_filesys; scalar_t__ c_level; } ;


 int FUNC_0 (scalar_t__) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,char*,...) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_3(void)
{
 time_t VAR_3;
 VAR_3 = FUNC_0(VAR_0.c_date);
 FUNC_2(VAR_2, "Dump   date: %s", FUNC_1(&VAR_3));
 VAR_3 = FUNC_0(VAR_0.c_ddate);
 FUNC_2(VAR_2, "Dumped from: %s",
     (VAR_0.c_ddate == 0) ? "the epoch\n" : FUNC_1(&VAR_3));
 if (VAR_0.c_host[0] == '\0')
  return;
 FUNC_2(VAR_1, "Level %s dump of %d on %s:%d\n",
     (intmax_t)VAR_0.c_level, VAR_0.c_filesys, VAR_0.c_host, VAR_0.c_dev);
 FUNC_2(VAR_1, "Label: %s\n", VAR_0.c_label);
}
