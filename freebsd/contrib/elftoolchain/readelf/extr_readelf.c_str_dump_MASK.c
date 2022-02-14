
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct section {char* name; int scn; } ;
struct readelf {size_t shnum; struct section* sl; } ;
struct TYPE_4__ {scalar_t__ d_size; int * d_buf; } ;
typedef TYPE_1__ Elf_Data ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ,int *) ;
 TYPE_1__* FUNC_3 (int ,int *) ;
 int * FUNC_4 (struct readelf*,size_t,char*,int ,int) ;
 scalar_t__ FUNC_5 (unsigned char) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static void
FUNC_9(struct readelf *VAR_1)
{
 struct section *VAR_2;
 Elf_Data *VAR_3;
 unsigned char *VAR_4, *VAR_5, *VAR_6;
 unsigned int VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;

 for (VAR_8 = 1; (size_t) VAR_8 < VAR_1->shnum; VAR_8++) {
  VAR_2 = &VAR_1->sl[VAR_8];
  if (FUNC_4(VAR_1, (size_t) VAR_8, VAR_2->name, VAR_0, -1) == ((void*)0))
   continue;
  (void) FUNC_1();
  if ((VAR_3 = FUNC_2(VAR_2->scn, ((void*)0))) == ((void*)0) &&
      (VAR_3 = FUNC_3(VAR_2->scn, ((void*)0))) == ((void*)0)) {
   VAR_10 = FUNC_1();
   if (VAR_10 != 0)
    FUNC_8("elf_getdata failed: %s",
        FUNC_0(VAR_10));
   continue;
  }
  (void) FUNC_1();
  if (VAR_3->d_size <= 0 || VAR_3->d_buf == ((void*)0)) {
   FUNC_6("\nSection '%s' has no data to dump.\n",
       VAR_2->name);
   continue;
  }
  VAR_6 = (unsigned char *) VAR_3->d_buf + VAR_3->d_size;
  VAR_4 = (unsigned char *) VAR_3->d_buf;
  VAR_11 = 0;
  FUNC_6("\nString dump of section '%s':\n", VAR_2->name);
  for (;;) {
   while (VAR_4 < VAR_6 && !FUNC_5(*VAR_4))
    VAR_4++;
   if (VAR_4 >= VAR_6)
    break;
   VAR_5 = VAR_4 + 1;
   while (VAR_5 < VAR_6 && FUNC_5(*VAR_5))
    VAR_5++;
   FUNC_6("  [%6lx]  ",
       (long) (VAR_4 - (unsigned char *) VAR_3->d_buf));
   VAR_7 = VAR_5 - VAR_4;
   for (VAR_9 = 0; (unsigned int) VAR_9 < VAR_7; VAR_9++)
    FUNC_7(VAR_4[VAR_9]);
   FUNC_7('\n');
   VAR_11 = 1;
   if (VAR_5 >= VAR_6)
    break;
   VAR_4 = VAR_5 + 1;
  }
  if (!VAR_11)
   FUNC_6("  No strings found in this section.");
  FUNC_7('\n');
 }
}
