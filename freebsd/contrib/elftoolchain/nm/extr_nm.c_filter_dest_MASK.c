
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter_entry {int dummy; } ;


 int FUNC_0 (int *) ;
 struct filter_entry* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct filter_entry*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(void)
{
 struct filter_entry *VAR_2;

 while (!FUNC_0(&VAR_1)) {
  VAR_2 = FUNC_1(&VAR_1);
  FUNC_2(&VAR_1, VAR_0);
  FUNC_3(VAR_2);
 }
}
