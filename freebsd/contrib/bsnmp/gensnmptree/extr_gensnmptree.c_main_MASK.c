
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int dummy; } ;
typedef enum op { ____Placeholder_op } op ;
typedef enum gen_funcs { ____Placeholder_gen_funcs } gen_funcs ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;




 int VAR_5 ;
 int FUNC_0 (struct node*) ;
 int VAR_6 ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int ) ;
 char* VAR_7 ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (int ,struct node*,char*) ;
 int FUNC_7 (struct node*,int ) ;
 int FUNC_8 (int,char**,char*) ;
 int FUNC_9 () ;
 int FUNC_10 (int *,int *,char*) ;
 int VAR_8 ;
 int FUNC_11 (int,char**,int) ;
 int FUNC_12 (struct node*,int) ;
 int FUNC_13 (struct node**,struct node*) ;
 char* VAR_9 ;
 scalar_t__ VAR_10 ;
 struct node* FUNC_14 (int) ;
 int FUNC_15 (char*) ;
 int VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_16 (char*) ;
 char* VAR_14 ;

int
FUNC_17(int VAR_15, char *VAR_16[])
{
 enum op VAR_17 = 129;
 enum gen_funcs VAR_18 = VAR_3;

 char *VAR_19 = ((void*)0);

 int VAR_20;
 while ((VAR_20 = FUNC_8(VAR_15, VAR_16, "dEeFfhI:i:lp:t")) != VAR_0)
  switch (VAR_20) {

    case 'd':
   VAR_6 = 1;
   break;

    case 'E':
   if (VAR_17 != 129 && VAR_17 != 131)
    FUNC_2(1, "-E conflicts with earlier options");
   VAR_17 = 131;
   break;

    case 'e':
   if (VAR_17 != 129 && VAR_17 != 130)
    FUNC_2(1, "-e conflicts with earlier options");
   VAR_17 = 130;
   break;

    case 'F':
   if (VAR_18 != VAR_3 &&
       VAR_18 != VAR_1)
    FUNC_2(1, "-F conflicts with -f");
   VAR_18 = VAR_1;
   break;

    case 'f':
   if (VAR_18 != VAR_3 &&
       VAR_18 != VAR_2)
    FUNC_2(1, "-f conflicts with -F");
   VAR_18 = VAR_2;
   break;

    case 'h':
   FUNC_5(VAR_11, "%s", VAR_14);
   FUNC_3(0);

    case 'I':
   FUNC_15(VAR_9);
   break;

    case 'i':
   VAR_19 = VAR_9;
   break;

    case 'l':
   VAR_8 = 1;
   break;

    case 'p':
   VAR_7 = VAR_9;
   if (FUNC_16(VAR_7) + FUNC_16("tree.c") >
       VAR_4)
    FUNC_2(1, "prefix too long");
   break;

    case 't':
   if (VAR_17 != 129 && VAR_17 != 128)
    FUNC_2(1, "-t conflicts with earlier options");
   VAR_17 = 128;
   break;
  }

 VAR_15 -= VAR_10;
 VAR_16 += VAR_10;


 if (VAR_19 == ((void*)0)) {
  FUNC_10(VAR_12, ((void*)0), "<stdin>");
 } else {
  FILE *VAR_21;
  if ((VAR_21 = FUNC_4(VAR_19, "r")) == ((void*)0))
   FUNC_1(1, "%s", VAR_19);
  FUNC_10(VAR_21, ((void*)0), VAR_19);
 }


 struct node *VAR_22 = FUNC_14(FUNC_9());

 int VAR_23;
 while ((VAR_23 = FUNC_9()) != VAR_5)
  FUNC_13(&VAR_22, FUNC_14(VAR_23));

 if (VAR_22)
  FUNC_0(VAR_22);


 switch (VAR_17) {

   case 130:
  if (VAR_15 == 0)
   FUNC_2(1, "-e requires arguments");

  for (int VAR_24 = 0; VAR_24 < VAR_15; VAR_24++)
   if (FUNC_6(VAR_13, VAR_22, VAR_16[VAR_24]))
    FUNC_2(1, "object not found: %s", VAR_16[VAR_24]);
  return (0);

   case 131:
  FUNC_11(VAR_15, VAR_16, VAR_18);
  return (0);

   case 128:
  if (VAR_15 != 0)
   FUNC_2(1, "-t allows no arguments");
  FUNC_7(VAR_22, 0);
  return (0);

   case 129:
  if (VAR_15 != 0)
   FUNC_2(1, "tree generation allows no arguments");
  FUNC_12(VAR_22, VAR_18 == VAR_2);
  return (0);
 }
}
