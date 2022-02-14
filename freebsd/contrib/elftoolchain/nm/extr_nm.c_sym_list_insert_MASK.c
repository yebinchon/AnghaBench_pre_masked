
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sym_head {int dummy; } ;
struct sym_entry {TYPE_3__* sym; struct sym_entry* name; } ;
struct TYPE_6__ {int st_value; } ;
struct TYPE_5__ {scalar_t__ st_shndx; int st_size; } ;
typedef TYPE_1__ GElf_Sym ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sym_head*,struct sym_entry*,int ) ;
 int FUNC_1 (struct sym_entry*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,TYPE_1__ const*,int) ;
 struct sym_entry* FUNC_4 (char const*) ;
 int VAR_1 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(struct sym_head *VAR_2, const char *VAR_3, const GElf_Sym *VAR_4)
{
 struct sym_entry *VAR_5;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return (0);
 if ((VAR_5 = FUNC_2(sizeof(struct sym_entry))) == ((void*)0)) {
  FUNC_5("malloc");
  return (0);
 }
 if ((VAR_5->name = FUNC_4(VAR_3)) == ((void*)0)) {
  FUNC_5("strdup");
  FUNC_1(VAR_5);
  return (0);
 }
 if ((VAR_5->sym = FUNC_2(sizeof(GElf_Sym))) == ((void*)0)) {
  FUNC_5("malloc");
  FUNC_1(VAR_5->name);
  FUNC_1(VAR_5);
  return (0);
 }

 FUNC_3(VAR_5->sym, VAR_4, sizeof(GElf_Sym));


 if (VAR_4->st_shndx == VAR_0)
  VAR_5->sym->st_value = VAR_4->st_size;

 FUNC_0(VAR_2, VAR_5, VAR_1);

 return (1);
}
