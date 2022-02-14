
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * caddr_t ;


 char* VAR_0 ;
 size_t VAR_1 ;
 void* FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;
 int * FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(void)
{
 caddr_t VAR_2;
 void *VAR_3;
 size_t VAR_4;

 VAR_2 = FUNC_2("pci_vendor_data");
 if (VAR_2 != ((void*)0)) {
  VAR_3 = FUNC_0(VAR_2);
  VAR_4 = FUNC_1(VAR_2);
  if (VAR_3 != ((void*)0) && VAR_4 != 0) {
   VAR_0 = VAR_3;
   VAR_1 = VAR_4;

   VAR_0[VAR_1] = '\n';
  }
 }
}
