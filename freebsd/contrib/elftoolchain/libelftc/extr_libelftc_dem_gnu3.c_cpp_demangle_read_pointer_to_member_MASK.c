
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vector_type_qualifier {int dummy; } ;
struct TYPE_4__ {size_t size; } ;
struct cpp_demangle_data {char* cur; int func_type; int cmd; TYPE_1__ class_type; TYPE_1__ output; } ;


 int FUNC_0 (struct cpp_demangle_data*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct cpp_demangle_data*,char*,size_t) ;
 int FUNC_2 (struct cpp_demangle_data*,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,struct vector_type_qualifier*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,char*,size_t) ;
 char* FUNC_8 (TYPE_1__*,size_t,int,size_t*) ;
 int FUNC_9 (struct vector_type_qualifier*) ;
 int FUNC_10 (struct vector_type_qualifier*) ;

__attribute__((used)) static int
FUNC_11(struct cpp_demangle_data *VAR_1,
    struct vector_type_qualifier *VAR_2)
{
 size_t VAR_3, VAR_4, VAR_5, VAR_6;
 int VAR_7, VAR_8;
 char *VAR_9;

 if (VAR_1 == ((void*)0) || *VAR_1->cur != 'M' || *(++VAR_1->cur) == '\0')
  return (0);

 VAR_6 = VAR_1->output.size;
 if (!FUNC_2(VAR_1, ((void*)0)))
  return (0);

 if ((VAR_9 = FUNC_8(&VAR_1->output, VAR_6,
     VAR_1->output.size - 1, &VAR_3)) == ((void*)0))
  return (0);

 VAR_8 = 0;
 VAR_5 = VAR_1->output.size;
 for (VAR_4 = VAR_6; VAR_4 < VAR_5; ++VAR_4)
  if (!FUNC_6(&VAR_1->output))
   goto clean1;

 if (!FUNC_5(&VAR_1->cmd, VAR_0, VAR_2))
  goto clean1;

 if (!FUNC_7(&VAR_1->class_type, VAR_9, VAR_3))
  goto clean2;

 VAR_7 = VAR_1->func_type;
 if (!FUNC_2(VAR_1, ((void*)0)))
  goto clean3;

 if (VAR_7 == VAR_1->func_type) {
  if (!FUNC_0(VAR_1, " "))
   goto clean3;
  if (!FUNC_1(VAR_1, VAR_9, VAR_3))
   goto clean3;
  if (!FUNC_0(VAR_1, "::*"))
   goto clean3;
 }

 VAR_8 = 1;
clean3:
 if (!FUNC_6(&VAR_1->class_type))
  VAR_8 = 0;
clean2:
 if (!FUNC_4(&VAR_1->cmd))
  VAR_8 = 0;
clean1:
 FUNC_3(VAR_9);

 FUNC_9(VAR_2);
 if (!FUNC_10(VAR_2))
  return (0);

 return (VAR_8);
}
