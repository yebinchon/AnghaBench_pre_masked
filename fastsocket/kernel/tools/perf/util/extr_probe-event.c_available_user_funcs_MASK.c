
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map {int dso; } ;


 int FUNC_0 (struct map*) ;
 int FUNC_1 (int ) ;
 struct map* FUNC_2 (char const*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct map*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_0)
{
 struct map *VAR_1;
 int VAR_2;

 VAR_2 = FUNC_3();
 if (VAR_2 < 0)
  return VAR_2;

 VAR_1 = FUNC_2(VAR_0);
 VAR_2 = FUNC_0(VAR_1);
 FUNC_1(VAR_1->dso);
 FUNC_4(VAR_1);
 return VAR_2;
}
