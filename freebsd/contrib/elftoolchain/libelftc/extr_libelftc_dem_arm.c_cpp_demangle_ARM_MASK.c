
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t size; } ;
struct TYPE_8__ {char* buf; size_t size; } ;
struct demangle_data {char const* p; scalar_t__ type; int ptr; int ref; int cnst; int array; TYPE_1__ vec; TYPE_1__ arg; TYPE_5__ array_str; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
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
FUNC_13(const char *VAR_4)
{
 struct demangle_data VAR_5;
 size_t VAR_6, VAR_7;
 unsigned int VAR_8;
 char *VAR_9, *VAR_10;

 if (VAR_4 == ((void*)0))
  return (((void*)0));

 if (FUNC_4(&VAR_5) == 0)
  return (((void*)0));

 VAR_8 = 0;
 VAR_9 = ((void*)0);

 VAR_5.p = VAR_4;
 if (FUNC_6(&VAR_5) == 0)
  goto clean;

 if (VAR_5.type == VAR_1) {
  if (FUNC_5("::", 2, &VAR_5.vec) == 0)
   goto clean;

  goto flat;
 }

 if (VAR_5.type == VAR_2) {
  if (FUNC_5("::~", 3, &VAR_5.vec) == 0)
   goto clean;

  goto flat;
 }

 if (VAR_5.type == VAR_3)
  goto flat;


 if (*VAR_5.p != 'F')
  goto clean;
 ++VAR_5.p;


 if (FUNC_0(&VAR_5.vec, "(") == 0)
  goto clean;

 for (;;) {
  if (*VAR_5.p == 'T') {
   const int VAR_11 = FUNC_7(&VAR_5);

   if (VAR_11 == -1)
    goto clean;
   else if (VAR_11 == 1)
    break;

   continue;
  }

  if (*VAR_5.p == 'N') {
   const int VAR_12 = FUNC_8(&VAR_5);

   if (VAR_12 == -1)
    goto clean;
   else if(VAR_12 == 1)
    break;

   continue;
  }

  VAR_6 = VAR_5.vec.size;

  if (FUNC_9(&VAR_5) == 0)
   goto clean;

  if (VAR_5.ptr == 1) {
   if (FUNC_0(&VAR_5.vec, "*") == 0)
    goto clean;

   VAR_5.ptr = 0;
  }

  if (VAR_5.ref == 1) {
   if (FUNC_0(&VAR_5.vec, "&") == 0)
    goto clean;

   VAR_5.ref = 0;
  }

  if (VAR_5.cnst == 1) {
   if (FUNC_0(&VAR_5.vec, " const") == 0)
    goto clean;

   VAR_5.cnst = 0;
  }

  if (VAR_5.array == 1) {
   if (FUNC_11(&VAR_5.vec, VAR_5.array_str.buf,
    VAR_5.array_str.size) == 0)
    goto clean;

   FUNC_1(&VAR_5.array_str);
   VAR_5.array = 0;
  }

  if (*VAR_5.p == '\0')
   break;

  if ((VAR_10 = FUNC_12(&VAR_5.vec, VAR_6, VAR_5.vec.size - 1,
       &VAR_7)) == ((void*)0))
   goto clean;

  if (FUNC_11(&VAR_5.arg, VAR_10, VAR_7) == 0)
   goto clean;

  FUNC_3(VAR_10);

  if (FUNC_0(&VAR_5.vec, ", ") == 0)
   goto clean;

  if (++VAR_8 > VAR_0)
   goto clean;
 }


 if (FUNC_0(&VAR_5.vec, ")") == 0)
  goto clean;

flat:
 VAR_9 = FUNC_10(&VAR_5.vec, ((void*)0));
clean:
 FUNC_2(&VAR_5);

 return (VAR_9);
}
