
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t size; } ;
struct cpp_demangle_data {char* cur; int func_type; int cmd; TYPE_1__ class_type; TYPE_1__ output; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpp_demangle_data*,char*,int) ;
 int FUNC_1 (struct cpp_demangle_data*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char*,size_t) ;
 char* FUNC_7 (TYPE_1__*,size_t,int,size_t*) ;

__attribute__((used)) static int
FUNC_8(struct cpp_demangle_data *VAR_1)
{
 size_t VAR_2, VAR_3, VAR_4, VAR_5;
 int VAR_6, VAR_7;
 char *VAR_8;

 if (VAR_1 == ((void*)0) || *VAR_1->cur != 'M' || *(++VAR_1->cur) == '\0')
  return (0);

 VAR_5 = VAR_1->output.size;
 if (!FUNC_1(VAR_1, 0))
  return (0);

 if ((VAR_8 = FUNC_7(&VAR_1->output, VAR_5,
     VAR_1->output.size - 1, &VAR_2)) == ((void*)0))
  return (0);

 VAR_7 = 0;
 VAR_4 = VAR_1->output.size;
 for (VAR_3 = VAR_5; VAR_3 < VAR_4; ++VAR_3)
  if (!FUNC_5(&VAR_1->output))
   goto clean1;

 if (!FUNC_4(&VAR_1->cmd, VAR_0))
  goto clean1;

 if (!FUNC_6(&VAR_1->class_type, VAR_8, VAR_2))
  goto clean2;

 VAR_6 = VAR_1->func_type;
 if (!FUNC_1(VAR_1, 0))
  goto clean3;

 if (VAR_6 == VAR_1->func_type) {
  if (!FUNC_0(VAR_1, " ", 1))
   goto clean3;
  if (!FUNC_0(VAR_1, VAR_8, VAR_2))
   goto clean3;
  if (!FUNC_0(VAR_1, "::*", 3))
   goto clean3;
 }

 VAR_7 = 1;
clean3:
 if (!FUNC_5(&VAR_1->class_type))
  VAR_7 = 0;
clean2:
 if (!FUNC_3(&VAR_1->cmd))
  VAR_7 = 0;
clean1:
 FUNC_2(VAR_8);

 return (VAR_7);
}
