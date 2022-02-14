
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efi_map_header {int dummy; } ;


 int FUNC_0 (struct efi_map_header*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,char*,char*,char*,char*) ;

__attribute__((used)) static void
FUNC_2(struct efi_map_header *VAR_1)
{

 FUNC_1("%23s %12s %12s %8s %4s\n",
     "Type", "Physical", "Virtual", "#Pages", "Attr");
 FUNC_0(VAR_1, VAR_0);
}
