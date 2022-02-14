
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct dso {int dummy; } ;


 int VAR_0 ;
 struct dso* FUNC_0 (int ) ;
 int FUNC_1 (struct dso*,char*) ;
 int FUNC_2 (struct list_head*,struct dso*) ;
 struct dso* FUNC_3 (struct list_head*,int ) ;
 char* FUNC_4 () ;

struct dso *FUNC_5(struct list_head *VAR_1)
{
 struct dso *VAR_2 = FUNC_3(VAR_1, VAR_0);

 if (!VAR_2) {
  char *VAR_3;

  VAR_3 = FUNC_4();
  if (!VAR_3)
   return ((void*)0);

  VAR_2 = FUNC_0(VAR_0);
  if (VAR_2 != ((void*)0)) {
   FUNC_2(VAR_1, VAR_2);
   FUNC_1(VAR_2, VAR_3);
  }
 }

 return VAR_2;
}
