
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parse {size_t nargs; TYPE_1__* argval; } ;
struct conf_sys_flags {int flags; } ;
struct TYPE_2__ {char* string; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (scalar_t__,int,int,int,int,char*,size_t*,size_t*,char const**,int ,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void
FUNC_4(
 struct parse *VAR_12,
 FILE *VAR_13,
 int VAR_14
 )
{
 struct conf_sys_flags VAR_15;
 size_t VAR_16;
 size_t VAR_17;
 const char *VAR_18;
 int VAR_19;

 VAR_15.flags = 0;
 VAR_19 = 0;
 for (VAR_16 = 0; (size_t)VAR_16 < VAR_12->nargs; VAR_16++) {
  if (FUNC_0(VAR_12->argval[VAR_16].string, "auth"))
   VAR_15.flags |= VAR_3;
  else if (FUNC_0(VAR_12->argval[VAR_16].string, "bclient"))
   VAR_15.flags |= VAR_4;
  else if (FUNC_0(VAR_12->argval[VAR_16].string, "calibrate"))
   VAR_15.flags |= VAR_5;
  else if (FUNC_0(VAR_12->argval[VAR_16].string, "kernel"))
   VAR_15.flags |= VAR_7;
  else if (FUNC_0(VAR_12->argval[VAR_16].string, "monitor"))
   VAR_15.flags |= VAR_8;
  else if (FUNC_0(VAR_12->argval[VAR_16].string, "ntp"))
   VAR_15.flags |= VAR_9;
  else if (FUNC_0(VAR_12->argval[VAR_16].string, "pps"))
   VAR_15.flags |= VAR_10;
  else if (FUNC_0(VAR_12->argval[VAR_16].string, "stats"))
   VAR_15.flags |= VAR_6;
  else {
   (void) FUNC_2(VAR_13, "Unknown flag %s\n",
       VAR_12->argval[VAR_16].string);
   VAR_19 = 1;
  }
 }

 VAR_15.flags = FUNC_3(VAR_15.flags);
 if (VAR_19 || VAR_15.flags == 0)
     return;

again:
 VAR_19 = FUNC_1(VAR_11, VAR_14, 1, 1,
        sizeof(struct conf_sys_flags), (char *)&VAR_15, &VAR_16,
        &VAR_17, &VAR_18, 0, sizeof(struct conf_sys_flags));

 if (VAR_19 == VAR_2 && VAR_11 == VAR_0) {
  VAR_11 = VAR_1;
  goto again;
 }

 if (VAR_19 == 0)
     (void) FUNC_2(VAR_13, "done!\n");
}
