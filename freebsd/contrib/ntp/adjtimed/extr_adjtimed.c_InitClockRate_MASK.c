
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ n_type; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,int,int,int) ;
 int FUNC_2 (char*,int ) ;
 int VAR_7 ;
 int FUNC_3 (int ,char*) ;
 TYPE_1__* VAR_8 ;
 int FUNC_4 (char*,TYPE_1__*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

int
FUNC_7(void)
{
 if ((VAR_7 = FUNC_5("/dev/kmem", VAR_3)) == -1) {
  FUNC_3(VAR_1, "open(/dev/kmem): %m");
  FUNC_6("adjtimed: open(/dev/kmem)");
  return (-1);
 }

 FUNC_4("/hp-ux", VAR_8);

 if (VAR_8[0].n_type == 0) {
  FUNC_2("adjtimed: /hp-ux has no symbol table\n", VAR_10);
  FUNC_3(VAR_1, "/hp-ux has no symbol table");
  return (-1);
 }



 VAR_6 = FUNC_0();
 if (VAR_6 == VAR_5) VAR_6 = VAR_0;
 VAR_11 = (VAR_2 / VAR_6);
 VAR_9 = VAR_4 * VAR_11;
 FUNC_1(VAR_10,"default_rate=%d, tick_rate=%d, slew_rate=%d\n",VAR_6,VAR_11,VAR_9);

 return (0);
}
