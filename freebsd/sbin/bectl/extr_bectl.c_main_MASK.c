
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command_map_entry {int (* fn ) (int,char**) ;int silent; } ;


 int * VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 struct command_map_entry* FUNC_1 (char const*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (int,char**) ;
 int FUNC_8 (int) ;

int
FUNC_9(int VAR_2, char *VAR_3[])
{
 struct command_map_entry *VAR_4;
 const char *VAR_5;
 char *VAR_6;
 int VAR_7;

 VAR_4 = ((void*)0);
 VAR_6 = ((void*)0);
 if (VAR_2 < 2)
  return (FUNC_8(0));

 if (FUNC_5(VAR_3[1], "-r") == 0) {
  if (VAR_2 < 4)
   return (FUNC_8(0));
  VAR_6 = FUNC_6(VAR_3[2]);
  VAR_5 = VAR_3[3];
  VAR_2 -= 3;
  VAR_3 += 3;
 } else {
  VAR_5 = VAR_3[1];
  VAR_2 -= 1;
  VAR_3 += 1;
 }


 if (FUNC_5(VAR_5, "umount") == 0)
  VAR_5 = "unmount";

 if (FUNC_5(VAR_5, "ujail") == 0)
  VAR_5 = "unjail";

 if ((FUNC_5(VAR_5, "-?") == 0) || (FUNC_5(VAR_5, "-h") == 0))
  return (FUNC_8(1));

 if ((VAR_4 = FUNC_1(VAR_5)) == ((void*)0)) {
  FUNC_0(VAR_1, "unknown command: %s\n", VAR_5);
  return (FUNC_8(0));
 }

 if ((VAR_0 = FUNC_3(VAR_6)) == ((void*)0))
  return (-1);

 FUNC_4(VAR_0, !VAR_4->silent);

 VAR_7 = VAR_4->fn(VAR_2, VAR_3);

 FUNC_2(VAR_0);
 return (VAR_7);
}
