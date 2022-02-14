
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct property {int dummy; } ;
struct node {char* name; int children; } ;
struct inbuf {int dummy; } ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct node*,struct node*) ;
 int FUNC_1 (struct node*,struct property*) ;
 struct node* FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,...) ;
 struct property* FUNC_4 (struct inbuf*,struct inbuf*,int) ;
 char* FUNC_5 (struct inbuf*) ;
 int FUNC_6 (struct inbuf*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char const*,char*) ;
 int VAR_2 ;

__attribute__((used)) static struct node *FUNC_10(struct inbuf *VAR_3,
       struct inbuf *VAR_4,
       const char *VAR_5, int VAR_6)
{
 struct node *VAR_7;
 char *VAR_8;
 uint32_t VAR_9;

 VAR_7 = FUNC_2(((void*)0), ((void*)0));

 VAR_8 = FUNC_5(VAR_3);

 if (VAR_6 & VAR_0)
  VAR_7->name = FUNC_9(VAR_5, VAR_8);
 else
  VAR_7->name = VAR_8;

 do {
  struct property *VAR_10;
  struct node *VAR_11;

  VAR_9 = FUNC_6(VAR_3);
  switch (VAR_9) {
  case 128:
   if (VAR_7->children)
    FUNC_7(VAR_2, "Warning: Flat tree input has "
     "subnodes preceding a property.\n");
   VAR_10 = FUNC_4(VAR_3, VAR_4, VAR_6);
   FUNC_1(VAR_7, VAR_10);
   break;

  case 132:
   VAR_11 = FUNC_10(VAR_3,VAR_4, VAR_8, VAR_6);
   FUNC_0(VAR_7, VAR_11);
   break;

  case 130:
   break;

  case 131:
   FUNC_3("Premature FDT_END in device tree blob\n");
   break;

  case 129:
   if (!(VAR_6 & VAR_1))
    FUNC_7(VAR_2, "Warning: NOP tag found in flat tree"
     " version <16\n");


   break;

  default:
   FUNC_3("Invalid opcode word %08x in device tree blob\n",
       VAR_9);
  }
 } while (VAR_9 != 130);

 if (VAR_7->name != VAR_8) {
  FUNC_8(VAR_8);
 }

 return VAR_7;
}
