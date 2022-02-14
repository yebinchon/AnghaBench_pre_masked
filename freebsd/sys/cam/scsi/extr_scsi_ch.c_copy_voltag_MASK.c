
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct volume_tag {char* vif; int vsn; } ;
struct changer_voltag {char* cv_volid; int cv_serial; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct changer_voltag *VAR_1, struct volume_tag *VAR_2)
{
 int VAR_3;
 for (VAR_3=0; VAR_3<VAR_0; VAR_3++) {
  char VAR_4 = VAR_2->vif[VAR_3];
  if (VAR_4 && VAR_4 != ' ')
   VAR_1->cv_volid[VAR_3] = VAR_4;
         else
   break;
 }
 VAR_1->cv_serial = FUNC_0(VAR_2->vsn);
}
