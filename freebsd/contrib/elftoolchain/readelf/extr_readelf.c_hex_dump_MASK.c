
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct section {char* name; scalar_t__ addr; int scn; } ;
struct readelf {size_t shnum; struct section* sl; } ;
struct TYPE_4__ {size_t d_size; int* d_buf; } ;
typedef TYPE_1__ Elf_Data ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ,int *) ;
 TYPE_1__* FUNC_3 (int ,int *) ;
 int * FUNC_4 (struct readelf*,size_t,char*,int ,int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static void
FUNC_8(struct readelf *VAR_1)
{
 struct section *VAR_2;
 Elf_Data *VAR_3;
 uint8_t *VAR_4;
 size_t VAR_5, VAR_6;
 uint64_t VAR_7;
 int VAR_8, VAR_9, VAR_10;

 for (VAR_9 = 1; (size_t) VAR_9 < VAR_1->shnum; VAR_9++) {
  VAR_2 = &VAR_1->sl[VAR_9];
  if (FUNC_4(VAR_1, (size_t) VAR_9, VAR_2->name, VAR_0, -1) == ((void*)0))
   continue;
  (void) FUNC_1();
  if ((VAR_3 = FUNC_2(VAR_2->scn, ((void*)0))) == ((void*)0) &&
      (VAR_3 = FUNC_3(VAR_2->scn, ((void*)0))) == ((void*)0)) {
   VAR_8 = FUNC_1();
   if (VAR_8 != 0)
    FUNC_7("elf_getdata failed: %s",
        FUNC_0(VAR_8));
   continue;
  }
  (void) FUNC_1();
  if (VAR_3->d_size <= 0 || VAR_3->d_buf == ((void*)0)) {
   FUNC_6("\nSection '%s' has no data to dump.\n",
       VAR_2->name);
   continue;
  }
  VAR_4 = VAR_3->d_buf;
  VAR_5 = VAR_3->d_size;
  VAR_7 = VAR_2->addr;
  FUNC_6("\nHex dump of section '%s':\n", VAR_2->name);
  while (VAR_5 > 0) {
   FUNC_6("  0x%8.8jx ", (uintmax_t)VAR_7);
   VAR_6 = VAR_5 > 16? 16 : VAR_5;
   for (VAR_10 = 0; VAR_10 < 16; VAR_10++) {
    if ((size_t)VAR_10 < VAR_6)
     FUNC_6("%2.2x", VAR_4[VAR_10]);
    else
     FUNC_6("  ");
    if ((VAR_10 & 3) == 3)
     FUNC_6(" ");
   }
   for (VAR_10 = 0; (size_t)VAR_10 < VAR_6; VAR_10++) {
    if (FUNC_5(VAR_4[VAR_10]))
     FUNC_6("%c", VAR_4[VAR_10]);
    else
     FUNC_6(".");
   }
   FUNC_6("\n");
   VAR_4 += VAR_6;
   VAR_7 += VAR_6;
   VAR_5 -= VAR_6;
  }
 }
}
