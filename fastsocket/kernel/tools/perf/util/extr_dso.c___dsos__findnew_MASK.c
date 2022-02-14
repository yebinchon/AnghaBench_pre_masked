
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct dso {int dummy; } ;


 struct dso* FUNC_0 (char const*) ;
 int FUNC_1 (struct dso*) ;
 int FUNC_2 (struct list_head*,struct dso*) ;
 struct dso* FUNC_3 (struct list_head*,char const*) ;

struct dso *FUNC_4(struct list_head *VAR_0, const char *VAR_1)
{
 struct dso *VAR_2 = FUNC_3(VAR_0, VAR_1);

 if (!VAR_2) {
  VAR_2 = FUNC_0(VAR_1);
  if (VAR_2 != ((void*)0)) {
   FUNC_2(VAR_0, VAR_2);
   FUNC_1(VAR_2);
  }
 }

 return VAR_2;
}
