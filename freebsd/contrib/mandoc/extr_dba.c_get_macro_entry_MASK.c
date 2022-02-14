
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ohash {int dummy; } ;
struct macro_entry {int pages; int value; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct macro_entry* FUNC_1 (int) ;
 int FUNC_2 (int *,char const*,size_t) ;
 struct macro_entry* FUNC_3 (struct ohash*,unsigned int) ;
 int FUNC_4 (struct ohash*,unsigned int,struct macro_entry*) ;
 unsigned int FUNC_5 (struct ohash*,char const*) ;
 int FUNC_6 (char const*) ;

__attribute__((used)) static struct macro_entry *
FUNC_7(struct ohash *VAR_1, const char *VAR_2, int32_t VAR_3)
{
 struct macro_entry *VAR_4;
 size_t VAR_5;
 unsigned int VAR_6;

 VAR_6 = FUNC_5(VAR_1, VAR_2);
 if ((VAR_4 = FUNC_3(VAR_1, VAR_6)) == ((void*)0)) {
  VAR_5 = FUNC_6(VAR_2) + 1;
  VAR_4 = FUNC_1(sizeof(*VAR_4) + VAR_5);
  FUNC_2(&VAR_4->value, VAR_2, VAR_5);
  VAR_4->pages = FUNC_0(VAR_3, VAR_0);
  FUNC_4(VAR_1, VAR_6, VAR_4);
 }
 return VAR_4;
}
