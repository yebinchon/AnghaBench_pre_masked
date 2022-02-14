
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input {int lno; void* path; void* fname; int * fp; } ;
typedef int FILE ;


 int FUNC_0 (int *,struct input*,int ) ;
 struct input* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (char const*) ;
 struct input* FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(FILE *VAR_3, const char *VAR_4, const char *VAR_5)
{
 struct input *VAR_6;

 VAR_6 = FUNC_2(sizeof(*VAR_6));
 VAR_6->fp = VAR_3;
 VAR_6->lno = 1;
 VAR_6->fname = FUNC_1(VAR_5);
 VAR_6->path = FUNC_1(VAR_4);
 FUNC_0(&VAR_1, VAR_6, VAR_2);

 VAR_0 = VAR_6;
}
