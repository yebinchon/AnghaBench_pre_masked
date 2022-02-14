
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct section {scalar_t__ type; int scn; } ;
struct readelf {size_t shnum; int vs_sz; int vs; struct section* vs_s; int * ver; struct section* vn_s; struct section* vd_s; struct section* sl; } ;
struct TYPE_3__ {int d_size; int d_buf; } ;
typedef TYPE_1__ Elf_Data ;
typedef int Elf32_Half ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct readelf*,int ) ;
 int FUNC_1 (struct readelf*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 (int ,int *) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void
FUNC_6(struct readelf *VAR_3)
{
 struct section *VAR_4;
 Elf_Data *VAR_5;
 int VAR_6, VAR_7;

 for (VAR_7 = 0; (size_t) VAR_7 < VAR_3->shnum; VAR_7++) {
  VAR_4 = &VAR_3->sl[VAR_7];
  if (VAR_4->type == VAR_2)
   VAR_3->vs_s = VAR_4;
  if (VAR_4->type == VAR_1)
   VAR_3->vn_s = VAR_4;
  if (VAR_4->type == VAR_0)
   VAR_3->vd_s = VAR_4;
 }
 if (VAR_3->vd_s)
  FUNC_0(VAR_3, 0);
 if (VAR_3->vn_s)
  FUNC_1(VAR_3, 0);
 if (VAR_3->vs_s && VAR_3->ver != ((void*)0)) {
  (void) FUNC_3();
  if ((VAR_5 = FUNC_4(VAR_3->vs_s->scn, ((void*)0))) == ((void*)0)) {
   VAR_6 = FUNC_3();
   if (VAR_6 != 0)
    FUNC_5("elf_getdata failed: %s",
        FUNC_2(VAR_6));
   return;
  }
  if (VAR_5->d_size == 0)
   return;
  VAR_3->vs = VAR_5->d_buf;
  VAR_3->vs_sz = VAR_5->d_size / sizeof(Elf32_Half);
 }
}
