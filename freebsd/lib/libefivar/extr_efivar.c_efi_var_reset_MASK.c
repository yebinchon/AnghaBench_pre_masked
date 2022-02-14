
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efi_var_ioc {scalar_t__ datasize; int * data; scalar_t__ attrib; int vendor; scalar_t__ namesize; int * name; } ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct efi_var_ioc *VAR_0)
{
 VAR_0->name = ((void*)0);
 VAR_0->namesize = 0;
 FUNC_0(&VAR_0->vendor, 0, sizeof(VAR_0->vendor));
 VAR_0->attrib = 0;
 VAR_0->data = ((void*)0);
 VAR_0->datasize = 0;
}
