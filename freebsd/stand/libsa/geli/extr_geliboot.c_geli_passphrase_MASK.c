
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int md_flags; } ;
struct geli_dev {char* name; TYPE_1__ md; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct geli_dev*,char*,int *) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int ,int) ;

int
FUNC_3(struct geli_dev *VAR_2, char *VAR_3)
{
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {

  if (VAR_4 == 0 && VAR_3[0] != '\0') {
   if (FUNC_0(VAR_2, VAR_3, ((void*)0)) == 0) {
    return (0);
   }
  }
  FUNC_1("GELI Passphrase for %s ", VAR_2->name);
  FUNC_2(VAR_3, VAR_0,
      (VAR_2->md.md_flags & VAR_1) == 0);
  FUNC_1("\n");
  if (FUNC_0(VAR_2, VAR_3, ((void*)0)) == 0) {
   return (0);
  }
 }

 return (1);
}
