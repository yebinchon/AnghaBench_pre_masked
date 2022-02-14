
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t size; } ;
struct TYPE_8__ {char* buf; size_t size; } ;
struct demangle_data {char const* p; int type; int class_name; int ptr; int ref; int cnst; int array; int cnst_fn; TYPE_1__ vec; TYPE_1__ arg; TYPE_5__ array_str; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (struct demangle_data*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct demangle_data*) ;
 int FUNC_5 (char*,int,TYPE_1__*) ;
 int FUNC_6 (struct demangle_data*) ;
 int FUNC_7 (struct demangle_data*) ;
 int FUNC_8 (struct demangle_data*) ;
 int FUNC_9 (struct demangle_data*) ;
 char* FUNC_10 (TYPE_1__*,int *) ;
 int FUNC_11 (TYPE_1__*,char*,size_t) ;
 char* FUNC_12 (TYPE_1__*,size_t,int,size_t*) ;

char *
FUNC_13(const char *VAR_1)
{
 struct demangle_data VAR_2;
 size_t VAR_3, VAR_4;
 unsigned int VAR_5;
 char *VAR_6, *VAR_7;

 if (VAR_1 == ((void*)0))
  return (((void*)0));

 if (FUNC_4(&VAR_2) == 0)
  return (((void*)0));

 VAR_5 = 0;
 VAR_6 = ((void*)0);

 VAR_2.p = VAR_1;
 if (FUNC_6(&VAR_2) == 0)
  goto clean;

 switch (VAR_2.type) {
 case 135 :
 case 134 :
  break;

 case 133 :
  if (FUNC_5("::", 2, &VAR_2.vec) == 0)
   goto clean;

                break;
 case 132 :
  if (FUNC_5("::~", 3, &VAR_2.vec) == 0)
   goto clean;

  if (FUNC_0(&VAR_2.vec, "(void)") == 0)
   goto clean;

  goto flat;
 case 129 :
 case 131 :
 case 130 :
 case 128 :
  goto flat;
 }

 if (*VAR_2.p == 'F')
  ++VAR_2.p;
 else if (*VAR_2.p == '\0') {
  if (VAR_2.class_name == 1) {
   if (FUNC_0(&VAR_2.vec, "(void)") == 0)
    goto clean;

   goto flat;
  } else
   goto clean;
 }


 if (FUNC_0(&VAR_2.vec, "(") == 0)
  goto clean;

 for (;;) {
  if (*VAR_2.p == 'T') {
   const int VAR_8 = FUNC_7(&VAR_2);

   if (VAR_8 == -1)
    goto clean;
   else if (VAR_8 == 1)
    break;

   continue;
  }

  if (*VAR_2.p == 'N') {
   const int VAR_9 = FUNC_8(&VAR_2);

   if (VAR_9 == -1)
    goto clean;
   else if(VAR_9 == 1)
    break;

   continue;
  }

  VAR_3 = VAR_2.vec.size;

  if (FUNC_9(&VAR_2) == 0)
   goto clean;

  if (VAR_2.ptr == 1) {
   if (FUNC_0(&VAR_2.vec, "*") == 0)
    goto clean;

   VAR_2.ptr = 0;
  }

  if (VAR_2.ref == 1) {
   if (FUNC_0(&VAR_2.vec, "&") == 0)
    goto clean;

   VAR_2.ref = 0;
  }

  if (VAR_2.cnst == 1) {
   if (FUNC_0(&VAR_2.vec, " const") == 0)
    goto clean;

   VAR_2.cnst = 0;
  }

  if (VAR_2.array == 1) {
   if (FUNC_11(&VAR_2.vec, VAR_2.array_str.buf,
    VAR_2.array_str.size) == 0)
    goto clean;

   FUNC_1(&VAR_2.array_str);
   VAR_2.array = 0;
  }

  if (*VAR_2.p == '\0')
   break;

  if ((VAR_7 = FUNC_12(&VAR_2.vec, VAR_3, VAR_2.vec.size - 1,
       &VAR_4)) == ((void*)0))
   goto clean;

  if (FUNC_11(&VAR_2.arg, VAR_7, VAR_4) == 0)
   goto clean;

  FUNC_3(VAR_7);

  if (FUNC_0(&VAR_2.vec, ", ") == 0)
   goto clean;

  if (++VAR_5 > VAR_0)
   goto clean;
 }


 if (FUNC_0(&VAR_2.vec, ")") == 0)
  goto clean;
flat:
 if (VAR_2.cnst_fn == 1 && FUNC_0(&VAR_2.vec, " const") == 0)
  goto clean;

 VAR_6 = FUNC_10(&VAR_2.vec, ((void*)0));
clean:
 FUNC_2(&VAR_2);

 return (VAR_6);
}
