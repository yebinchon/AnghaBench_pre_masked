
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint64_t ;
struct vmcb {int dummy; } ;
struct svm_softc {int vm; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char*,int) ;
 struct vmcb* FUNC_4 (struct svm_softc*,int) ;
 int FUNC_5 (struct svm_softc*,int,int) ;

__attribute__((used)) static int
FUNC_6(struct svm_softc *VAR_1, int VAR_2, int VAR_3, int VAR_4,
 uint64_t *VAR_5)
{
 struct vmcb *VAR_6;
 int VAR_7, VAR_8;
 char *VAR_9;

 VAR_6 = FUNC_4(VAR_1, VAR_2);
 VAR_7 = FUNC_2(VAR_4);
 VAR_8 = FUNC_1(VAR_4);

 if ((VAR_7 + VAR_8) >= sizeof (struct vmcb))
  return (VAR_0);

 VAR_9 = (char *)VAR_6;

 if (!VAR_3)
  *VAR_5 = 0;

 switch (VAR_8) {
 case 8:
 case 4:
 case 2:
  if (VAR_3)
   FUNC_3(VAR_9 + VAR_7, VAR_5, VAR_8);
  else
   FUNC_3(VAR_5, VAR_9 + VAR_7, VAR_8);
  break;
 default:
  FUNC_0(VAR_1->vm, VAR_2,
      "Invalid size %d for VMCB access: %d", VAR_8);
  return (VAR_0);
 }


 if (VAR_3)
  FUNC_5(VAR_1, VAR_2, 0xffffffff);

 return (0);
}
