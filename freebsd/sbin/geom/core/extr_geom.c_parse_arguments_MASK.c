
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
struct g_option {int go_type; char* go_val; int go_char; int * go_name; } ;
struct g_command {int gc_flags; struct g_option* gc_options; } ;
typedef int opts ;
typedef int argname ;


 int VAR_0 ;
 int FUNC_0 (struct g_option*) ;
 scalar_t__ FUNC_1 (struct g_option*) ;
 int FUNC_2 (struct g_option*) ;
 scalar_t__ FUNC_3 (struct g_option*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_4 (int) ;
 struct g_option* FUNC_5 (struct g_command*,int) ;
 int FUNC_6 (struct gctl_req*,char*,int,...) ;
 int FUNC_7 (int,char**,char*) ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (struct gctl_req*,struct g_option*,char*) ;
 int FUNC_9 (char*,int,char*,unsigned int) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,int,char*,int ) ;
 int FUNC_12 () ;
 int VAR_7 ;
 int FUNC_13 (char*,int ) ;

__attribute__((used)) static void
FUNC_14(struct g_command *VAR_8, struct gctl_req *VAR_9, int *VAR_10,
    char ***VAR_11)
{
 struct g_option *VAR_12;
 char VAR_13[64];
 unsigned VAR_14;
 int VAR_15;

 *VAR_13 = '\0';
 if ((VAR_8->gc_flags & VAR_0) != 0)
  FUNC_10(VAR_13, "v", sizeof(VAR_13));
 for (VAR_14 = 0; ; VAR_14++) {
  VAR_12 = &VAR_8->gc_options[VAR_14];
  if (VAR_12->go_name == ((void*)0))
   break;
  FUNC_4(FUNC_3(VAR_12) != 0);
  FUNC_4((VAR_12->go_type & ~(VAR_2 | VAR_3)) == 0);

  FUNC_4(FUNC_3(VAR_12) != VAR_1 ||
      (VAR_12->go_type & VAR_3) == 0);
  FUNC_11(VAR_13, sizeof(VAR_13), "%c", VAR_12->go_char);
  if (FUNC_3(VAR_12) != VAR_1)
   FUNC_10(VAR_13, ":", sizeof(VAR_13));
 }




 while ((VAR_15 = FUNC_7(*VAR_10, *VAR_11, VAR_13)) != -1) {

  switch (VAR_15) {
  case 'v':
   VAR_7 = 1;
   continue;
  }

  VAR_12 = FUNC_5(VAR_8, VAR_15);
  if (VAR_12 == ((void*)0))
   FUNC_12();
  if (!FUNC_2(VAR_12) && FUNC_1(VAR_12)) {
   FUNC_13("Option '%c' specified twice.", VAR_12->go_char);
   FUNC_12();
  }
  FUNC_0(VAR_12);

  if (FUNC_3(VAR_12) == VAR_1)
   FUNC_8(VAR_9, VAR_12, "1");
  else
   FUNC_8(VAR_9, VAR_12, VAR_5);
 }
 *VAR_10 -= VAR_6;
 *VAR_11 += VAR_6;




 for (VAR_14 = 0; ; VAR_14++) {
  VAR_12 = &VAR_8->gc_options[VAR_14];
  if (VAR_12->go_name == ((void*)0))
   break;
  if (FUNC_1(VAR_12))
   continue;

  if (FUNC_3(VAR_12) == VAR_1) {
   FUNC_4(VAR_12->go_val == ((void*)0));
   FUNC_8(VAR_9, VAR_12, "0");
  } else {
   if (VAR_12->go_val == ((void*)0)) {
    FUNC_13("Option '%c' not specified.",
        VAR_12->go_char);
    FUNC_12();
   } else if (VAR_12->go_val == VAR_4) {

   } else {
    FUNC_8(VAR_9, VAR_12, VAR_12->go_val);
   }
  }
 }




 FUNC_6(VAR_9, "nargs", sizeof(int), VAR_10);
 for (VAR_14 = 0; VAR_14 < (unsigned)*VAR_10; VAR_14++) {
  char VAR_16[16];

  FUNC_9(VAR_16, sizeof(VAR_16), "arg%u", VAR_14);
  FUNC_6(VAR_9, VAR_16, -1, (*VAR_11)[VAR_14]);
 }
}
