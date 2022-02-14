
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vector_type_qualifier {size_t size; scalar_t__* q_container; } ;
struct type_delimit {int paren; int firstp; } ;
struct read_cmd_item {struct vector_type_qualifier* data; } ;
struct TYPE_2__ {size_t size; char** container; } ;
struct cpp_demangle_data {float* cur; int is_functype; int ref_qualifier; int ref_qualifier_type; void* push_qualifier; int func_type; TYPE_1__ class_type; int cmd; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpp_demangle_data*,char*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;


 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct cpp_demangle_data*,char const*,size_t) ;
 int FUNC_2 (struct cpp_demangle_data*,struct vector_type_qualifier*,int *) ;
 int FUNC_3 (struct cpp_demangle_data*,struct type_delimit*) ;
 size_t FUNC_4 (char const*) ;
 struct read_cmd_item* FUNC_5 (int *,int ) ;
 int FUNC_6 (struct vector_type_qualifier*) ;
 int FUNC_7 (struct vector_type_qualifier*) ;

__attribute__((used)) static int
FUNC_8(struct cpp_demangle_data *VAR_8, int *VAR_9,
    struct vector_type_qualifier *VAR_10)
{
 struct type_delimit VAR_11;
 struct read_cmd_item *VAR_12;
 size_t VAR_13, VAR_14, VAR_15;
 const char *VAR_16;
 int VAR_17;
 bool VAR_18, VAR_19;

 if (VAR_8 == ((void*)0) || *VAR_8->cur != 'F' || VAR_10 == ((void*)0))
  return (0);

 ++VAR_8->cur;
 if (*VAR_8->cur == 'Y') {
  if (VAR_9 != ((void*)0))
   *VAR_9 = 1;
  ++VAR_8->cur;
 }


 if (!FUNC_3(VAR_8, ((void*)0)))
  return (0);

 if (*VAR_8->cur != 'E') {
  if (!FUNC_0(VAR_8, " "))
   return (0);

  VAR_19 = 0;
  if (VAR_10->size > 0) {
   for (VAR_17 = 0; (size_t) VAR_17 < VAR_10->size; VAR_17++) {
    if (VAR_10->q_container[VAR_17] != VAR_6 &&
        VAR_10->q_container[VAR_17] != VAR_7 &&
        VAR_10->q_container[VAR_17] != VAR_5) {
     VAR_19 = 1;
     break;
    }
   }
  }

  VAR_18 = 0;
  VAR_12 = FUNC_5(&VAR_8->cmd, VAR_4);
  if (VAR_19 || VAR_12 != ((void*)0)) {
   if (!FUNC_0(VAR_8, "("))
    return (0);
   VAR_18 = 1;
  }


  VAR_8->push_qualifier = VAR_3;
  if (!FUNC_2(VAR_8, VAR_10, ((void*)0)))
   return (0);

  if (VAR_12) {
   if (VAR_19 && !FUNC_0(VAR_8, " "))
    return (0);
   if ((VAR_13 = VAR_8->class_type.size) == 0)
    return (0);
   VAR_16 =
       VAR_8->class_type.container[VAR_13 - 1];
   if (VAR_16 == ((void*)0))
    return (0);
   if ((VAR_14 = FUNC_4(VAR_16)) == 0)
    return (0);
   if (!FUNC_1(VAR_8, VAR_16,
       VAR_14))
    return (0);
   if (!FUNC_0(VAR_8, "::*"))
    return (0);

   VAR_8->push_qualifier = VAR_1;
   if (!FUNC_2(VAR_8, VAR_12->data,
       ((void*)0)))
    return (0);
   ++VAR_8->func_type;
  }

  if (VAR_18) {
   if (!FUNC_0(VAR_8, ")"))
    return (0);
   VAR_18 = 0;
  }

  VAR_11.paren = 0;
  VAR_11.firstp = 1;
  VAR_15 = 0;
  VAR_8->is_functype = 1;
  for (;;) {
   if (!FUNC_3(VAR_8, &VAR_11))
    return (0);
   if (*VAR_8->cur == 'E')
    break;
   if (VAR_15++ > VAR_0)
    return (0);
  }
  VAR_8->is_functype = 0;
  if (VAR_11.paren) {
   if (!FUNC_0(VAR_8, ")"))
    return (0);
   VAR_11.paren = 0;
  }


  VAR_8->push_qualifier = VAR_2;
  if (!FUNC_2(VAR_8, VAR_10, ((void*)0)))
   return (0);

  VAR_8->push_qualifier = VAR_1;


  FUNC_6(VAR_10);
  if (!FUNC_7(VAR_10))
   return (0);


  if (VAR_8->ref_qualifier) {
   switch (VAR_8->ref_qualifier_type) {
   case 129:
    if (!FUNC_0(VAR_8, " &"))
     return (0);
    break;
   case 128:
    if (!FUNC_0(VAR_8, " &&"))
     return (0);
    break;
   default:
    return (0);
   }
   VAR_8->ref_qualifier = 0;
  }
 }

 ++VAR_8->cur;

 return (1);
}
