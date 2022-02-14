
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmmdev_softc {int vm; } ;
struct vm_memseg {int segid; int len; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct vm_memseg*) ;
 int FUNC_1 (int ,char*,int,int *) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (char*,int ) ;
 char* FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct vmmdev_softc *VAR_2, struct vm_memseg *VAR_3)
{
 char *VAR_4;
 int VAR_5;
 bool VAR_6;

 VAR_5 = 0;
 VAR_4 = ((void*)0);
 VAR_6 = 1;





 if (FUNC_0(VAR_3)) {
  VAR_6 = 0;
  VAR_4 = FUNC_4(sizeof(VAR_3->name), VAR_0, VAR_1);
  VAR_5 = FUNC_1(VAR_3->name, VAR_4, sizeof(VAR_3->name), ((void*)0));
  if (VAR_5)
   goto done;
 }

 VAR_5 = FUNC_5(VAR_2->vm, VAR_3->segid, VAR_3->len, VAR_6);
 if (VAR_5)
  goto done;

 if (FUNC_0(VAR_3)) {
  VAR_5 = FUNC_2(FUNC_7(VAR_2->vm), VAR_3->segid, VAR_4);
  if (VAR_5)
   FUNC_6(VAR_2->vm, VAR_3->segid);
  else
   VAR_4 = ((void*)0);
 }
done:
 FUNC_3(VAR_4, VAR_0);
 return (VAR_5);
}
