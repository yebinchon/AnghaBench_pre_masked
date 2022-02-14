
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct section {int scn; int * name; } ;
struct readelf {size_t shnum; struct section* sl; } ;
struct TYPE_3__ {size_t d_size; unsigned char* d_buf; } ;
typedef TYPE_1__ Elf_Data ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static void
FUNC_8(struct readelf *VAR_0)
{
 struct section *VAR_1;
 Elf_Data *VAR_2;
 unsigned char *VAR_3;
 int VAR_4, VAR_5, VAR_6, VAR_7;

 FUNC_4("\nContents of section .debug_str:\n");

 VAR_1 = ((void*)0);
 for (VAR_6 = 0; (size_t) VAR_6 < VAR_0->shnum; VAR_6++) {
  VAR_1 = &VAR_0->sl[VAR_6];
  if (VAR_1->name != ((void*)0) && !FUNC_6(VAR_1->name, ".debug_str"))
   break;
 }
 if ((size_t) VAR_6 >= VAR_0->shnum)
  return;

 (void) FUNC_1();
 if ((VAR_2 = FUNC_2(VAR_1->scn, ((void*)0))) == ((void*)0)) {
  VAR_4 = FUNC_1();
  if (VAR_4 != 0)
   FUNC_7("elf_getdata failed: %s", FUNC_0(-1));
  return;
 }
 if (VAR_2->d_size <= 0)
  return;

 for (VAR_6 = 0, VAR_3 = VAR_2->d_buf; (size_t) VAR_6 < VAR_2->d_size; VAR_6 += 16) {
  FUNC_4("  0x%08x", (unsigned int) VAR_6);
  if ((size_t) VAR_6 + 16 > VAR_2->d_size)
   VAR_5 = VAR_2->d_size;
  else
   VAR_5 = VAR_6 + 16;
  for (VAR_7 = VAR_6; VAR_7 < VAR_6 + 16; VAR_7++) {
   if ((VAR_7 - VAR_6) % 4 == 0)
    FUNC_5(' ');
   if (VAR_7 >= VAR_5) {
    FUNC_4("  ");
    continue;
   }
   FUNC_4("%02x", (uint8_t) VAR_3[VAR_7]);
  }
  FUNC_5(' ');
  for (VAR_7 = VAR_6; VAR_7 < VAR_5; VAR_7++) {
   if (FUNC_3(VAR_3[VAR_7]))
    FUNC_5(VAR_3[VAR_7]);
   else if (VAR_3[VAR_7] == 0)
    FUNC_5('.');
   else
    FUNC_5(' ');
  }
  FUNC_5('\n');
 }
}
