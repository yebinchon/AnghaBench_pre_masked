
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct collection_list {int dummy; } ;
typedef void* bfd_signed_vma ;


 unsigned long FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct symbol*) ;
 unsigned int FUNC_2 (struct symbol*) ;
 int FUNC_3 (struct symbol*) ;
 int FUNC_4 (struct symbol*) ;
 void* FUNC_5 (struct symbol*) ;
 void* FUNC_6 (struct symbol*) ;
 int FUNC_7 (int ) ;
 int VAR_0 ;
 unsigned long FUNC_8 (int ) ;
 int FUNC_9 (struct collection_list*,unsigned int,void*,unsigned long) ;
 int FUNC_10 (struct collection_list*,unsigned int) ;
 int FUNC_11 (int ) ;
 int VAR_1 ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (char*,void*) ;

__attribute__((used)) static void
FUNC_15 (struct collection_list *VAR_2, struct symbol *VAR_3,
  long VAR_4, long VAR_5)
{
  unsigned long VAR_6;
  unsigned int VAR_7;
  bfd_signed_vma VAR_8;

  VAR_6 = FUNC_8 (FUNC_11 (FUNC_4 (VAR_3)));
  switch (FUNC_3 (VAR_3))
    {
    default:
      FUNC_12 ("%s: don't know symbol class %d\n",
         FUNC_1 (VAR_3), FUNC_3 (VAR_3));
      break;
    case 137:
      FUNC_12 ("constant %s (value %ld) will not be collected.\n",
         FUNC_1 (VAR_3), FUNC_5 (VAR_3));
      break;
    case 129:
      VAR_8 = FUNC_6 (VAR_3);
      if (VAR_1)
 {
   char VAR_9[40];

   FUNC_14 (VAR_9, VAR_8);
   FUNC_12 ("LOC_STATIC %s: collect %ld bytes at %s.\n",
      FUNC_1 (VAR_3), VAR_6, VAR_9 );
 }
      FUNC_9 (VAR_2, -1, VAR_8, VAR_6);
      break;
    case 132:
    case 131:
      VAR_7 = FUNC_5 (VAR_3);
      if (VAR_1)
 FUNC_12 ("LOC_REG[parm] %s: ", FUNC_1 (VAR_3));
      FUNC_10 (VAR_2, VAR_7);


      if (FUNC_7 (FUNC_4 (VAR_3)) == VAR_0 &&
   VAR_6 > FUNC_0 (VAR_7))
 FUNC_10 (VAR_2, VAR_7 + 1);
      break;
    case 133:
      FUNC_12 ("Sorry, don't know how to do LOC_REF_ARG yet.\n");
      FUNC_12 ("       (will not collect %s)\n",
         FUNC_1 (VAR_3));
      break;
    case 140:
      VAR_7 = VAR_4;
      VAR_8 = VAR_5 + FUNC_5 (VAR_3);
      if (VAR_1)
 {
   FUNC_12 ("LOC_LOCAL %s: Collect %ld bytes at offset ",
      FUNC_1 (VAR_3), VAR_6);
   FUNC_13 (VAR_8);
   FUNC_12 (" from frame ptr reg %d\n", VAR_7);
 }
      FUNC_9 (VAR_2, VAR_7, VAR_8, VAR_6);
      break;
    case 130:
      VAR_7 = FUNC_5 (VAR_3);
      VAR_8 = 0;
      if (VAR_1)
 {
   FUNC_12 ("LOC_REGPARM_ADDR %s: Collect %ld bytes at offset ",
      FUNC_1 (VAR_3), VAR_6);
   FUNC_13 (VAR_8);
   FUNC_12 (" from reg %d\n", VAR_7);
 }
      FUNC_9 (VAR_2, VAR_7, VAR_8, VAR_6);
      break;
    case 136:
    case 135:
      VAR_7 = VAR_4;
      VAR_8 = VAR_5 + FUNC_5 (VAR_3);
      if (VAR_1)
 {
   FUNC_12 ("LOC_LOCAL %s: Collect %ld bytes at offset ",
      FUNC_1 (VAR_3), VAR_6);
   FUNC_13 (VAR_8);
   FUNC_12 (" from frame ptr reg %d\n", VAR_7);
 }
      FUNC_9 (VAR_2, VAR_7, VAR_8, VAR_6);
      break;
    case 139:
    case 138:
      VAR_7 = FUNC_2 (VAR_3);
      VAR_8 = FUNC_5 (VAR_3);
      if (VAR_1)
 {
   FUNC_12 ("LOC_BASEREG %s: collect %ld bytes at offset ",
      FUNC_1 (VAR_3), VAR_6);
   FUNC_13 (VAR_8);
   FUNC_12 (" from basereg %d\n", VAR_7);
 }
      FUNC_9 (VAR_2, VAR_7, VAR_8, VAR_6);
      break;
    case 128:
      FUNC_12 ("Don't know LOC_UNRESOLVED %s\n", FUNC_1 (VAR_3));
      break;
    case 134:
      FUNC_12 ("%s has been optimized out of existence.\n",
         FUNC_1 (VAR_3));
      break;
    }
}
