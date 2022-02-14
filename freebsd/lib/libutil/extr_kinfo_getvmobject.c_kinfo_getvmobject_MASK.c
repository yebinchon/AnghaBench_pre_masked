
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_vmobject {int kvo_structsize; } ;


 scalar_t__ VAR_0 ;
 struct kinfo_vmobject* FUNC_0 (int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct kinfo_vmobject*,struct kinfo_vmobject*,int) ;
 char* FUNC_3 (char*,size_t) ;
 scalar_t__ FUNC_4 (char*,char*,size_t*,int *,int ) ;

struct kinfo_vmobject *
FUNC_5(int *VAR_2)
{
 char *VAR_3, *VAR_4, *VAR_5;
 struct kinfo_vmobject *VAR_6, *VAR_7, *VAR_8;
 size_t VAR_9;
 int VAR_10, VAR_11;

 VAR_3 = ((void*)0);
 for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {
  if (FUNC_4("vm.objects", ((void*)0), &VAR_9, ((void*)0), 0) < 0) {
   FUNC_1(VAR_3);
   return (((void*)0));
  }
  VAR_3 = FUNC_3(VAR_3, VAR_9);
  if (VAR_3 == ((void*)0))
   return (((void*)0));
  if (FUNC_4("vm.objects", VAR_3, &VAR_9, ((void*)0), 0) == 0)
   goto unpack;
  if (VAR_1 != VAR_0) {
   FUNC_1(VAR_3);
   return (((void*)0));
  }
 }
 FUNC_1(VAR_3);
 return (((void*)0));

unpack:

 VAR_10 = 0;
 VAR_4 = VAR_3;
 VAR_5 = VAR_3 + VAR_9;
 while (VAR_4 < VAR_5) {
  VAR_6 = (struct kinfo_vmobject *)(uintptr_t)VAR_4;
  VAR_4 += VAR_6->kvo_structsize;
  VAR_10++;
 }

 VAR_7 = FUNC_0(VAR_10, sizeof(*VAR_7));
 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_3);
  return (((void*)0));
 }


 VAR_4 = VAR_3;
 VAR_8 = VAR_7;
 while (VAR_4 < VAR_5) {
  VAR_6 = (struct kinfo_vmobject *)(uintptr_t)VAR_4;
  FUNC_2(VAR_8, VAR_6, VAR_6->kvo_structsize);
  VAR_4 += VAR_6->kvo_structsize;
  VAR_8->kvo_structsize = sizeof(*VAR_8);
  VAR_8++;
 }
 FUNC_1(VAR_3);
 *VAR_2 = VAR_10;
 return (VAR_7);
}
