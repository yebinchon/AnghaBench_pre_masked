
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct probe_finder {int lno; int addr; int fname; } ;
typedef int Dwarf_Die ;
typedef int Dwarf_Addr ;


 int VAR_0 ;
 int FUNC_0 (int *,struct probe_finder*) ;
 int * FUNC_1 (struct probe_finder*,int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,int ) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, int VAR_2,
       Dwarf_Addr VAR_3, void *VAR_4)
{
 struct probe_finder *VAR_5 = VAR_4;
 Dwarf_Die *VAR_6, VAR_7;
 int VAR_8;

 if (VAR_2 != VAR_5->lno || FUNC_3(VAR_1, VAR_5->fname) != 0)
  return 0;

 VAR_5->addr = VAR_3;
 VAR_6 = FUNC_1(VAR_5, &VAR_7);
 if (!VAR_6) {
  FUNC_2("Failed to find scope of probe point.\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_0(VAR_6, VAR_5);


 return VAR_8 < 0 ? VAR_8 : 0;
}
