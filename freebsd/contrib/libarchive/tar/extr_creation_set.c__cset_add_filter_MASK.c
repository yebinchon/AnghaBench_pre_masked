
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter_set {int program; char* filter_name; } ;
struct creation_set {int filter_count; struct filter_set* filters; } ;


 int FUNC_0 (int,int ,char*) ;
 scalar_t__ FUNC_1 (struct filter_set*,int) ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3(struct creation_set *VAR_0, int VAR_1, const char *VAR_2)
{
 struct filter_set *VAR_3;
 char *VAR_4;

 VAR_3 = (struct filter_set *)FUNC_1(VAR_0->filters,
     sizeof(*VAR_0->filters) * (VAR_0->filter_count + 1));
 if (VAR_3 == ((void*)0))
  FUNC_0(1, 0, "No memory");
 VAR_4 = FUNC_2(VAR_2);
 if (VAR_4 == ((void*)0))
  FUNC_0(1, 0, "No memory");
 VAR_0->filters = VAR_3;
 VAR_0->filters[VAR_0->filter_count].program = VAR_1;
 VAR_0->filters[VAR_0->filter_count].filter_name = VAR_4;
 VAR_0->filter_count++;
}
