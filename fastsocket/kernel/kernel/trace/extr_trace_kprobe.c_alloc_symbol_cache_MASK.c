
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol_cache {long offset; int symbol; } ;


 int VAR_0 ;
 int FUNC_0 (struct symbol_cache*) ;
 int FUNC_1 (char const*,int ) ;
 struct symbol_cache* FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (struct symbol_cache*) ;

__attribute__((used)) static struct symbol_cache *FUNC_5(const char *VAR_1, long VAR_2)
{
 struct symbol_cache *VAR_3;

 if (!VAR_1 || FUNC_3(VAR_1) == 0)
  return ((void*)0);
 VAR_3 = FUNC_2(sizeof(struct symbol_cache), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->symbol = FUNC_1(VAR_1, VAR_0);
 if (!VAR_3->symbol) {
  FUNC_0(VAR_3);
  return ((void*)0);
 }
 VAR_3->offset = VAR_2;

 FUNC_4(VAR_3);
 return VAR_3;
}
