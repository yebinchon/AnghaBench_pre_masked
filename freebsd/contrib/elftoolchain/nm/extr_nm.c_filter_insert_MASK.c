
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter_entry {int * fn; } ;
typedef int * fn_filter ;


 int FUNC_0 (int *,struct filter_entry*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 struct filter_entry* FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(fn_filter VAR_2)
{
 struct filter_entry *VAR_3;

 FUNC_1(VAR_2 != ((void*)0));

 if ((VAR_3 = FUNC_2(sizeof(struct filter_entry))) == ((void*)0)) {
  FUNC_3("malloc");
  return (0);
 }
 VAR_3->fn = VAR_2;
 FUNC_0(&VAR_1, VAR_3, VAR_0);

 return (1);
}
