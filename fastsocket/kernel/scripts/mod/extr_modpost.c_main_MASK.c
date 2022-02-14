
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {char* name; scalar_t__ skip; struct module* next; } ;
struct ext_sym_list {char* file; struct ext_sym_list* next; } ;
struct buffer {scalar_t__ pos; } ;


 struct ext_sym_list* FUNC_0 (int ) ;
 int FUNC_1 (struct buffer*,struct module*,struct module*) ;
 int FUNC_2 (struct buffer*,struct module*) ;
 int FUNC_3 (struct buffer*,struct module*) ;
 int FUNC_4 (struct buffer*,struct module*) ;
 int FUNC_5 (struct buffer*,struct module*) ;
 int FUNC_6 (struct buffer*,char*) ;
 int FUNC_7 (struct buffer*,struct module*) ;
 int VAR_0 ;
 int FUNC_8 (struct module*) ;
 int VAR_1 ;
 int FUNC_9 (int) ;
 int VAR_2 ;
 int FUNC_10 (struct ext_sym_list*) ;
 int FUNC_11 (int,char**,char*) ;
 int FUNC_12 (int) ;
 struct module* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_16 (char*,char*,char*) ;
 int FUNC_17 (char*) ;
 int VAR_9 ;
 int FUNC_18 (char*,scalar_t__) ;
 int VAR_10 ;
 int FUNC_19 (char*) ;
 int FUNC_20 (struct buffer*,char*) ;
 int FUNC_21 (char*) ;

int FUNC_22(int VAR_11, char **VAR_12)
{
 struct module *VAR_13;
 struct buffer VAR_14 = { };
 char *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
 char *VAR_17 = ((void*)0);
 char *VAR_18 = ((void*)0);
 char *VAR_19 = ((void*)0);
 int VAR_20;
 int VAR_21;
 struct ext_sym_list *VAR_22;
 struct ext_sym_list *VAR_23 = ((void*)0);

 while ((VAR_20 = FUNC_11(VAR_11, VAR_12, "i:I:e:cmsSo:awM:K:")) != -1) {
  switch (VAR_20) {
  case 'i':
   VAR_15 = VAR_5;
   break;
  case 'I':
   VAR_16 = VAR_5;
   VAR_2 = 1;
   break;
  case 'c':
   VAR_1 = 1;
   break;
  case 'e':
   VAR_2 = 1;
   VAR_22 =
      FUNC_0(FUNC_12(sizeof(*VAR_22)));
   VAR_22->next = VAR_23;
   VAR_22->file = VAR_5;
   VAR_23 = VAR_22;
   break;
  case 'm':
   VAR_4 = 1;
   break;
  case 'o':
   VAR_17 = VAR_5;
   break;
  case 'a':
   VAR_0 = 1;
   break;
  case 's':
   VAR_9 = 0;
   break;
  case 'S':
   VAR_8 = 0;
   break;
  case 'w':
   VAR_10 = 1;
   break;
   case 'M':
    VAR_19 = VAR_5;
    break;
   case 'K':
    VAR_18 = VAR_5;
    break;
  default:
   FUNC_9(1);
  }
 }

 if (VAR_15)
  FUNC_13(VAR_15, 1);
 if (VAR_16)
  FUNC_13(VAR_16, 0);
 while (VAR_23) {
  FUNC_13(VAR_23->file, 0);
  VAR_22 = VAR_23->next;
  FUNC_10(VAR_23);
  VAR_23 = VAR_22;
 }

 while (VAR_6 < VAR_11)
  FUNC_15(VAR_12[VAR_6++]);

 for (VAR_13 = VAR_3; VAR_13; VAR_13 = VAR_13->next) {
  if (VAR_13->skip)
   continue;
  FUNC_8(VAR_13);
 }

 VAR_21 = 0;

 for (VAR_13 = VAR_3; VAR_13; VAR_13 = VAR_13->next) {
  char VAR_24[FUNC_17(VAR_13->name) + 10];

  if (VAR_13->skip)
   continue;

  VAR_14.pos = 0;

  FUNC_2(&VAR_14, VAR_13);
  FUNC_6(&VAR_14, VAR_13->name);
  VAR_21 |= FUNC_7(&VAR_14, VAR_13);
  FUNC_1(&VAR_14, VAR_13, VAR_3);
  FUNC_3(&VAR_14, VAR_13);
  FUNC_5(&VAR_14, VAR_13);
  FUNC_4(&VAR_14, VAR_13);

  FUNC_16(VAR_24, "%s.mod.c", VAR_13->name);
  FUNC_20(&VAR_14, VAR_24);
 }

 if (VAR_17)
  FUNC_19(VAR_17);
 if (VAR_7 && !VAR_8)
  FUNC_18("modpost: Found %d section mismatch(es).\n"
       "To see full details build your kernel with:\n"
       "'make CONFIG_DEBUG_SECTION_MISMATCH=y'\n",
       VAR_7);

 if (VAR_18)
  FUNC_14(VAR_18);

 if (VAR_19)
  FUNC_21(VAR_19);

 return VAR_21;
}
