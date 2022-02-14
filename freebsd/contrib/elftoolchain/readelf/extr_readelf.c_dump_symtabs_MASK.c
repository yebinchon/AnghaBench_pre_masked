
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct section {scalar_t__ type; scalar_t__ addr; int scn; } ;
struct readelf {int options; size_t shnum; struct section* sl; } ;
struct TYPE_10__ {scalar_t__ d_size; } ;
struct TYPE_8__ {scalar_t__ d_val; } ;
struct TYPE_9__ {scalar_t__ d_tag; TYPE_1__ d_un; } ;
typedef TYPE_2__ GElf_Dyn ;
typedef TYPE_3__ Elf_Data ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct readelf*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 TYPE_3__* FUNC_3 (int ,int *) ;
 TYPE_2__* FUNC_4 (TYPE_3__*,int,TYPE_2__*) ;
 int FUNC_5 (struct section*,int*) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static void
FUNC_7(struct readelf *VAR_5)
{
 GElf_Dyn VAR_6;
 Elf_Data *VAR_7;
 struct section *VAR_8;
 uint64_t VAR_9;
 int VAR_10, VAR_11, VAR_12;





 VAR_9 = 0;
 if (VAR_5->options & VAR_1) {
  VAR_8 = ((void*)0);
  for (VAR_11 = 0; (size_t)VAR_11 < VAR_5->shnum; VAR_11++)
   if (VAR_5->sl[VAR_11].type == VAR_2) {
    VAR_8 = &VAR_5->sl[VAR_11];
    break;
   }
  if (VAR_8 == ((void*)0))
   return;
  (void) FUNC_2();
  if ((VAR_7 = FUNC_3(VAR_8->scn, ((void*)0))) == ((void*)0)) {
   VAR_10 = FUNC_2();
   if (VAR_10 != 0)
    FUNC_6("elf_getdata failed: %s", FUNC_1(-1));
   return;
  }
  if (VAR_7->d_size <= 0)
   return;
  if (!FUNC_5(VAR_8, &VAR_12))
   return;

  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
   if (FUNC_4(VAR_7, VAR_11, &VAR_6) != &VAR_6) {
    FUNC_6("gelf_getdyn failed: %s", FUNC_1(-1));
    continue;
   }
   if (VAR_6.d_tag == VAR_0) {
    VAR_9 = VAR_6.d_un.d_val;
    break;
   }
  }
 }


 for (VAR_11 = 0; (size_t)VAR_11 < VAR_5->shnum; VAR_11++) {
  VAR_8 = &VAR_5->sl[VAR_11];
  if (VAR_8->type == VAR_4 || VAR_8->type == VAR_3) {
   if (VAR_5->options & VAR_1) {
    if (VAR_9 == VAR_8->addr) {
     FUNC_0(VAR_5, VAR_11);
     break;
    }
   } else
    FUNC_0(VAR_5, VAR_11);
  }
 }
}
