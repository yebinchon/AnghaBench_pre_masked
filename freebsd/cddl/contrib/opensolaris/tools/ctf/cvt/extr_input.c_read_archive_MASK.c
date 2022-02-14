
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int read_cb_f ;
struct TYPE_3__ {char* ar_name; } ;
typedef int Elf_Cmd ;
typedef TYPE_1__ Elf_Arhdr ;
typedef int Elf ;


 int VAR_0 ;


 int * FUNC_0 (int,int ,int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,char*,char*,int *,void*,int) ;
 int FUNC_8 (char*,size_t,char*,char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*,int) ;
 char* FUNC_11 (size_t) ;

__attribute__((used)) static int
FUNC_12(int VAR_1, Elf *VAR_2, char *VAR_3, char *VAR_4, read_cb_f *VAR_5,
    void *VAR_6, int VAR_7)
{
 Elf *VAR_8;
 Elf_Cmd VAR_9 = VAR_0;
 Elf_Arhdr *VAR_10;
 int VAR_11 = 1, VAR_12 = 0;

 while ((VAR_8 = FUNC_0(VAR_1, VAR_9, VAR_2)) != ((void*)0)) {
  int VAR_13 = 0;

  if ((VAR_10 = FUNC_2(VAR_8)) == ((void*)0)) {
   FUNC_5(VAR_3, "Can't get archive header for "
       "member %d", VAR_11);
  }


  if (*VAR_10->ar_name != '/') {
   size_t VAR_14 = FUNC_9(VAR_3) + 1 +
       FUNC_9(VAR_10->ar_name) + 1 + 1;
   char *VAR_15 = FUNC_11(VAR_14);

   FUNC_8(VAR_15, VAR_14, "%s(%s)", VAR_3, VAR_10->ar_name);

   switch (FUNC_3(VAR_8)) {
   case 129:
    VAR_13 = FUNC_12(VAR_1, VAR_8, VAR_15, VAR_4,
        VAR_5, VAR_6, VAR_7);
    break;
   case 128:
    VAR_13 = FUNC_7(VAR_8, VAR_15, VAR_4,
        VAR_5, VAR_6, VAR_7);
    break;
   default:
    FUNC_10("%s: Unknown elf kind %d\n",
        VAR_15, FUNC_3(VAR_8));
   }

   FUNC_6(VAR_15);
  }

  VAR_9 = FUNC_4(VAR_8);
  (void) FUNC_1(VAR_8);
  VAR_11++;

  if (VAR_13 < 0)
   return (VAR_13);
  else
   VAR_12 += VAR_13;
 }

 return (VAR_12);
}
