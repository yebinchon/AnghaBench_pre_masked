
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct map {int dummy; } ;
struct dso {int dummy; } ;


 int VAR_0 ;
 struct dso* FUNC_0 (char const*) ;
 struct map* FUNC_1 (int ,struct dso*,int ) ;

struct map *FUNC_2(const char *VAR_1)
{
 struct map *VAR_2 = ((void*)0);
 struct dso *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3)
  VAR_2 = FUNC_1(0, VAR_3, VAR_0);

 return VAR_2;
}
