
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint_t ;
typedef int syment_t ;
struct TYPE_10__ {scalar_t__ d_buf; } ;
struct TYPE_9__ {scalar_t__ addr; char* name; int size; } ;
struct TYPE_8__ {scalar_t__ sh_type; int sh_size; int sh_entsize; int sh_link; } ;
struct TYPE_7__ {scalar_t__ st_size; int st_name; scalar_t__ st_value; int st_info; } ;
typedef TYPE_1__ Sym ;
typedef TYPE_2__ Shdr ;
typedef int Elf_Scn ;
typedef int Elf ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 uintptr_t VAR_6 ;
 int FUNC_1 (char*,uintptr_t,int) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int,int ,int *) ;
 TYPE_6__* FUNC_4 (int *,int *) ;
 TYPE_2__* FUNC_5 (int *) ;
 int * FUNC_6 (int *,int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 char* VAR_8 ;
 int FUNC_10 (char*) ;
 int VAR_9 ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (TYPE_3__*,int,int,int ) ;
 int FUNC_13 (char*,char*,uintptr_t) ;
 TYPE_3__* VAR_10 ;
 int VAR_11 ;

int
FUNC_14(void)
{
 Elf *VAR_12;
 Elf_Scn *VAR_13 = ((void*)0);
 Sym *VAR_14, *VAR_15, *VAR_16;
 char *VAR_17;
 uint_t VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21 = -1;


 if ((VAR_19 = FUNC_11("/dev/ksyms", VAR_3)) == -1) {
  if (VAR_7 == VAR_1 && FUNC_10("ksyms") == -1) {
   FUNC_9("ksyms");
   VAR_19 = FUNC_11("/dev/ksyms", VAR_3);
  }
  if (VAR_19 == -1)
   return (-1);
 }





 (void) FUNC_7(VAR_2);

 VAR_12 = FUNC_3(VAR_19, VAR_0, ((void*)0));

 for (VAR_18 = 1; (VAR_13 = FUNC_6(VAR_12, VAR_13)) != ((void*)0); VAR_18++) {
  Shdr *VAR_22 = FUNC_5(VAR_13);
  if (VAR_22->sh_type == VAR_4) {
   VAR_14 = (Sym *)FUNC_4(VAR_13, ((void*)0))->d_buf;
   VAR_9 = VAR_22->sh_size / VAR_22->sh_entsize;
   VAR_21 = VAR_22->sh_link;
  }
 }

 for (VAR_18 = 1; (VAR_13 = FUNC_6(VAR_12, VAR_13)) != ((void*)0); VAR_18++) {
  if (VAR_18 == VAR_21)
   VAR_17 = (char *)FUNC_4(VAR_13, ((void*)0))->d_buf;
 }

 VAR_16 = VAR_14 + VAR_9;
 VAR_9 = 0;
 for (VAR_15 = VAR_14; VAR_15 < VAR_16; VAR_15++)
  if ((uint_t)FUNC_0(VAR_15->st_info) <= VAR_5 &&
      VAR_15->st_size != 0)
   FUNC_1(VAR_15->st_name + VAR_17,
       (uintptr_t)VAR_15->st_value, (size_t)VAR_15->st_size);

 FUNC_8();
 (void) FUNC_13(VAR_8, "0x%lx", VAR_6);
 FUNC_1(VAR_8, VAR_6, 1);

 FUNC_12(VAR_10, VAR_9, sizeof (syment_t), VAR_11);




 for (VAR_20 = 0; VAR_20 < VAR_9 - 1; VAR_20++)
  if (VAR_10[VAR_20].addr == VAR_10[VAR_20 + 1].addr)
   VAR_10[VAR_20].addr = 0;

 FUNC_12(VAR_10, VAR_9, sizeof (syment_t), VAR_11);

 while (VAR_10[1].addr == 0) {
  VAR_10++;
  VAR_9--;
 }
 VAR_10[0].name = "(usermode)";
 VAR_10[0].addr = 0;
 VAR_10[0].size = 1;

 FUNC_2(VAR_19);
 return (0);
}
