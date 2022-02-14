
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usage_args ;
struct TYPE_2__ {char* trap_name; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,char**,int *,char*,int *,int *,char*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int*,int) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (char*,int,char*,char*) ;
 int FUNC_10 (char*,char*) ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;

int FUNC_11(int VAR_9, char **VAR_10)
{
 char VAR_11[1024];
 int VAR_12[2] = { VAR_0, VAR_1 };
 char *VAR_13 = ((void*)0);
 int VAR_14, VAR_15, VAR_16;

 VAR_15 = FUNC_10(VAR_11, "[<trap_name>] [<error_port>]\n"
      "\nArgument <trap_name> can be one of the following:\n");
 for (VAR_14 = 0; VAR_8[VAR_14].trap_name; VAR_14++) {
  VAR_15 += FUNC_9(VAR_11 + VAR_15, sizeof(VAR_11) - VAR_15,
         "  %s\n", VAR_8[VAR_14].trap_name);
  if (VAR_15 >= sizeof(VAR_11))
   FUNC_2(-1);
 }
 FUNC_9(VAR_11 + VAR_15, sizeof(VAR_11) - VAR_15,
   "\n  default behavior is to send \"%s\"", VAR_8[0].trap_name);

 FUNC_3(VAR_9, VAR_10, ((void*)0), "DGKL", ((void*)0), ((void*)0),
       VAR_11, ((void*)0));

 VAR_9 -= VAR_6;
 VAR_10 += VAR_6;

 VAR_13 = VAR_10[0] ? VAR_10[0] : VAR_8[0].trap_name;

 if (VAR_9 > 1)
  VAR_2 = FUNC_1(VAR_10[1]);

 FUNC_6(1);

 VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_12, 2);
 if (!VAR_7)
  FUNC_0("Failed to open '%s' port '%d'", VAR_3, VAR_4);

 FUNC_8(VAR_7, VAR_5);

 VAR_16 = FUNC_7(VAR_13);
 FUNC_4(VAR_7);
 return VAR_16;
}
