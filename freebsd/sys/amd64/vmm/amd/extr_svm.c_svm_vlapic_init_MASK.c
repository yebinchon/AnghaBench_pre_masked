
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlapic {int vcpuid; struct LAPIC* apic_page; int vm; } ;
struct svm_softc {int * apic_page; int vm; } ;
struct LAPIC {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vlapic* FUNC_0 (int,int ,int) ;
 int FUNC_1 (struct vlapic*) ;

__attribute__((used)) static struct vlapic *
FUNC_2(void *VAR_3, int VAR_4)
{
 struct svm_softc *VAR_5;
 struct vlapic *VAR_6;

 VAR_5 = VAR_3;
 VAR_6 = FUNC_0(sizeof(struct vlapic), VAR_0, VAR_1 | VAR_2);
 VAR_6->vm = VAR_5->vm;
 VAR_6->vcpuid = VAR_4;
 VAR_6->apic_page = (struct LAPIC *)&VAR_5->apic_page[VAR_4];

 FUNC_1(VAR_6);

 return (VAR_6);
}
