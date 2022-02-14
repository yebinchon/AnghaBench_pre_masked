
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldfile {int bss_addr; int data_addr; int txt_addr; int name; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2 (char *VAR_0)
{
  struct ldfile *VAR_1 = (struct ldfile *) VAR_0;

  FUNC_0 ("\t%s: ", VAR_1->name);
  FUNC_1 (VAR_1->name, 0, VAR_1->txt_addr,
    VAR_1->data_addr, VAR_1->bss_addr);
  FUNC_0 ("ok\n");
  return 1;
}
