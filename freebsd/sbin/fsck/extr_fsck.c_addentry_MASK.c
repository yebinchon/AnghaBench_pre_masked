
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fstypelist {int dummy; } ;
struct entry {void* options; void* type; } ;


 int FUNC_0 (struct fstypelist*,struct entry*,int ) ;
 struct entry* FUNC_1 (int) ;
 int VAR_0 ;
 void* FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3(struct fstypelist *VAR_1, const char *VAR_2, const char *VAR_3)
{
 struct entry *VAR_4;

 VAR_4 = FUNC_1(sizeof(struct entry));
 VAR_4->type = FUNC_2(VAR_2);
 VAR_4->options = FUNC_2(VAR_3);
 FUNC_0(VAR_1, VAR_4, VAR_0);
}
