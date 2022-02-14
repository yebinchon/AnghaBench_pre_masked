
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {char* error; } ;
struct g_command {int gc_flags; int (* gc_func ) (struct gctl_req*,unsigned int) ;int gc_name; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 struct g_command* FUNC_2 (char*,int ) ;
 char* VAR_5 ;
 int FUNC_3 (struct gctl_req*) ;
 struct gctl_req* FUNC_4 () ;
 char* FUNC_5 (struct gctl_req*) ;
 int FUNC_6 (struct gctl_req*,char*,int,char*) ;
 int FUNC_7 (struct gctl_req*,char*,int,char*) ;
 int FUNC_8 () ;
 int FUNC_9 (struct g_command*,struct gctl_req*,int*,char***) ;
 int FUNC_10 (char*,...) ;
 unsigned int FUNC_11 (struct g_command*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (char const*,char*,int ) ;
 int FUNC_15 (struct gctl_req*,unsigned int) ;
 int FUNC_16 () ;
 scalar_t__ VAR_6 ;
 char* VAR_7 ;
 int FUNC_17 (char*,char const*) ;

__attribute__((used)) static void
FUNC_18(int VAR_8, char *VAR_9[])
{
 struct g_command *VAR_10;
 struct gctl_req *VAR_11;
 const char *VAR_12;
 char VAR_13[4096];


 VAR_10 = FUNC_2(VAR_9[0], VAR_2);
 if (VAR_10 == ((void*)0)) {

  VAR_10 = FUNC_2(VAR_9[0], VAR_3);
  if (VAR_10 == ((void*)0)) {
   FUNC_17("Unknown command: %s.", VAR_9[0]);
   FUNC_16();
  }
  if (!FUNC_12(VAR_10->gc_name)) {
   FUNC_17("Command '%s' not available; "
       "try 'load' first.", VAR_9[0]);
   FUNC_1(VAR_0);
  }
 }
 if ((VAR_10->gc_flags & VAR_4) != 0)
  FUNC_8();

 VAR_11 = FUNC_4();
 FUNC_6(VAR_11, "class", -1, VAR_5);
 FUNC_6(VAR_11, "verb", -1, VAR_9[0]);
 if (VAR_7 != ((void*)0))
  FUNC_6(VAR_11, "version", sizeof(*VAR_7), VAR_7);
 FUNC_9(VAR_10, VAR_11, &VAR_8, &VAR_9);

 FUNC_0(VAR_13, sizeof(VAR_13));
 if (VAR_10->gc_func != ((void*)0)) {
  unsigned VAR_14;

  VAR_14 = FUNC_11(VAR_10);
  VAR_10->gc_func(VAR_11, VAR_14);
  VAR_12 = VAR_11->error;
 } else {
  FUNC_7(VAR_11, "output", sizeof(VAR_13), VAR_13);
  VAR_12 = FUNC_5(VAR_11);
 }
 if (VAR_12 != ((void*)0) && VAR_12[0] != '\0') {
  FUNC_17("%s", VAR_12);
  if (FUNC_14(VAR_12, "warning: ", FUNC_13("warning: ")) != 0) {
   FUNC_3(VAR_11);
   FUNC_1(VAR_0);
  }
 }
 if (VAR_13[0] != '\0')
  FUNC_10("%s", VAR_13);
 FUNC_3(VAR_11);
 if (VAR_6)
  FUNC_10("Done.\n");
 FUNC_1(VAR_1);
}
