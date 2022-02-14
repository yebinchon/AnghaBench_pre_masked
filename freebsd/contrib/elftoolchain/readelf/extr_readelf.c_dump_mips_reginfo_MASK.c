
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct section {char* name; int scn; } ;
struct readelf {int dummy; } ;
struct TYPE_3__ {scalar_t__ d_size; int d_buf; } ;
typedef TYPE_1__ Elf_Data ;


 int FUNC_0 (struct readelf*,int ,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int ,int *) ;
 int FUNC_4 (struct section*,int*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static void
FUNC_7(struct readelf *VAR_0, struct section *VAR_1)
{
 Elf_Data *VAR_2;
 int VAR_3, VAR_4;

 (void) FUNC_2();
 if ((VAR_2 = FUNC_3(VAR_1->scn, ((void*)0))) == ((void*)0)) {
  VAR_3 = FUNC_2();
  if (VAR_3 != 0)
   FUNC_6("elf_rawdata failed: %s",
       FUNC_1(VAR_3));
  return;
 }
 if (VAR_2->d_size <= 0)
  return;
 if (!FUNC_4(VAR_1, &VAR_4))
  return;

 FUNC_5("\nSection '%s' contains %d entries:\n", VAR_1->name, VAR_4);
 FUNC_0(VAR_0, VAR_2->d_buf, VAR_2->d_size);
}
