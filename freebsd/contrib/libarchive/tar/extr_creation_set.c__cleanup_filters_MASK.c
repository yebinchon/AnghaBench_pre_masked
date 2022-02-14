
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter_set {struct filter_set* filter_name; } ;


 int FUNC_0 (struct filter_set*) ;

__attribute__((used)) static void
FUNC_1(struct filter_set *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_0(VAR_0[VAR_2].filter_name);
 FUNC_0(VAR_0);
}
