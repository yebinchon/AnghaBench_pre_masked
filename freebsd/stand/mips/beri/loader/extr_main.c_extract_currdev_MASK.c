
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bootinfo {int bi_boot_dev_type; } ;





 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,char const*,int *,int ) ;

__attribute__((used)) static void
FUNC_1(struct bootinfo *VAR_3)
{
 const char *VAR_4;






 switch(VAR_3->bi_boot_dev_type) {
 case 129:
  VAR_4 = "dram0";
  break;

 case 130:
  VAR_4 = "cfi0";
  break;

 case 128:
  VAR_4 = "sdcard0";
  break;

 default:
  VAR_4 = ((void*)0);
 }

 if (VAR_4 != ((void*)0)) {
  FUNC_0("currdev", VAR_0, VAR_4, ((void*)0), VAR_2);
  FUNC_0("loaddev", VAR_0, VAR_4, VAR_1,
      VAR_2);
 }
}
