
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
typedef size_t uint32_t ;
struct section {scalar_t__ type; size_t link; int entsize; size_t sz; char* name; int info; int scn; } ;
struct readelf {size_t shnum; struct section* sl; } ;
struct TYPE_3__ {scalar_t__ d_size; size_t* d_buf; } ;
typedef TYPE_1__ Elf_Data ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ,int *) ;
 char* FUNC_3 (struct readelf*,size_t,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,size_t) ;

__attribute__((used)) static void
FUNC_6(struct readelf *VAR_2)
{
 struct section *VAR_3;
 const char *VAR_4;
 Elf_Data *VAR_5;
 uint32_t *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 size_t VAR_10;

 for (VAR_7 = 0; (size_t) VAR_7 < VAR_2->shnum; VAR_7++) {
  VAR_3 = &VAR_2->sl[VAR_7];
  if (VAR_3->type != VAR_1)
   continue;
  if (VAR_3->link >= VAR_2->shnum)
   continue;
  (void) FUNC_1();
  if ((VAR_5 = FUNC_2(VAR_3->scn, ((void*)0))) == ((void*)0)) {
   VAR_9 = FUNC_1();
   if (VAR_9 != 0)
    FUNC_5("elf_getdata failed: %s",
        FUNC_0(VAR_9));
   continue;
  }
  if (VAR_5->d_size <= 0)
   continue;

  VAR_6 = VAR_5->d_buf;





  if ((*VAR_6++ & 0x1) == 0)
   return;

  if (VAR_3->entsize == 0)
   VAR_3->entsize = 4;

  VAR_4 = FUNC_3(VAR_2, VAR_3->link, VAR_3->info);
  VAR_10 = VAR_3->sz / VAR_3->entsize;
  if (VAR_10-- < 1)
   return;

  FUNC_4("\nCOMDAT group section [%5d] `%s' [%s] contains %ju"
      " sections:\n", VAR_7, VAR_3->name, VAR_4, (uintmax_t)VAR_10);
  FUNC_4("   %-10.10s %s\n", "[Index]", "Name");
  for (VAR_8 = 0; (size_t) VAR_8 < VAR_10; VAR_8++, VAR_6++) {
   if (*VAR_6 >= VAR_2->shnum) {
    FUNC_5("invalid section index: %u", *VAR_6);
    continue;
   }
   FUNC_4("   [%5u]   %s\n", *VAR_6, VAR_2->sl[*VAR_6].name);
  }
 }
}
