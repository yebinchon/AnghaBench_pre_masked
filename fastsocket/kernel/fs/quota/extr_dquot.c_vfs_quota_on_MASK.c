
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct path {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,struct path*) ;
 int FUNC_1 (struct path*) ;
 int FUNC_2 (struct super_block*,int,int,struct path*) ;
 int FUNC_3 (struct super_block*,int) ;

int FUNC_4(struct super_block *VAR_1, int VAR_2, int VAR_3, char *VAR_4,
   int VAR_5)
{
 struct path VAR_6;
 int VAR_7;

 if (VAR_5)
  return FUNC_3(VAR_1, VAR_2);

 VAR_7 = FUNC_0(VAR_4, VAR_0, &VAR_6);
 if (!VAR_7) {
  VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3, &VAR_6);
  FUNC_1(&VAR_6);
 }
 return VAR_7;
}
