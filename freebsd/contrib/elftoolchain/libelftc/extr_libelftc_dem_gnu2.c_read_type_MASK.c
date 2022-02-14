
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_data {unsigned char* p; int cnst; int ptr; int ref; int vec; } ;


 scalar_t__ FUNC_0 (float) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct demangle_data*) ;
 int FUNC_4 (struct demangle_data*) ;
 int FUNC_5 (struct demangle_data*) ;
 int FUNC_6 (struct demangle_data*) ;
 int FUNC_7 (struct demangle_data*) ;

__attribute__((used)) static bool
FUNC_8(struct demangle_data *VAR_0)
{

 if (VAR_0 == ((void*)0))
  return (0);

 FUNC_2(VAR_0->p != ((void*)0) && "d->p (org str) is NULL");

 while (*VAR_0->p == 'U' || *VAR_0->p == 'C' || *VAR_0->p == 'V' || *VAR_0->p == 'S' ||
        *VAR_0->p == 'P' || *VAR_0->p == 'R' || *VAR_0->p == 'A' || *VAR_0->p == 'F' ||
        *VAR_0->p == 'M') {
  switch (*VAR_0->p) {
  case 'U' :
   ++VAR_0->p;

   if (FUNC_1(&VAR_0->vec, "unsigned ") == 0)
    return (0);

   break;
  case 'C' :
   ++VAR_0->p;

   if (*VAR_0->p == 'P')
    VAR_0->cnst = 1;
   else {
    if (FUNC_1(&VAR_0->vec, "const ") ==
        0)
     return (0);
   }

   break;
  case 'V' :
   ++VAR_0->p;

   if (FUNC_1(&VAR_0->vec, "volatile ") == 0)
    return (0);

   break;
  case 'S' :
   ++VAR_0->p;

   if (FUNC_1(&VAR_0->vec, "signed ") == 0)
    return (0);

   break;
  case 'P' :
   ++VAR_0->p;

   if (*VAR_0->p == 'F')
    return (FUNC_5(VAR_0));
   else
    VAR_0->ptr = 1;

   break;
  case 'R' :
   ++VAR_0->p;

   VAR_0->ref = 1;

   break;
  case 'F' :
   break;
  case 'A' :
   ++VAR_0->p;

   if (FUNC_3(VAR_0) == 0)
    return (0);

   break;
  case 'M' :
   ++VAR_0->p;

   if (FUNC_6(VAR_0) == 0)
    return (0);

   break;
  default :
   break;
  }
 }

 if (FUNC_0(*VAR_0->p))
  return (FUNC_4(VAR_0));

 switch (*VAR_0->p) {
 case 'Q' :
  ++VAR_0->p;

  return (FUNC_7(VAR_0));
 case 'v' :
  ++VAR_0->p;

  return (FUNC_1(&VAR_0->vec, "void"));
 case 'b':
  ++VAR_0->p;

  return(FUNC_1(&VAR_0->vec, "bool"));
 case 'c' :
  ++VAR_0->p;

  return (FUNC_1(&VAR_0->vec, "char"));
 case 's' :
  ++VAR_0->p;

  return (FUNC_1(&VAR_0->vec, "short"));
 case 'i' :
  ++VAR_0->p;

  return (FUNC_1(&VAR_0->vec, "int"));
 case 'l' :
  ++VAR_0->p;

  return (FUNC_1(&VAR_0->vec, "long"));
 case 'f' :
  ++VAR_0->p;

  return (FUNC_1(&VAR_0->vec, "float"));
 case 'd':
  ++VAR_0->p;

  return (FUNC_1(&VAR_0->vec, "double"));
 case 'r':
  ++VAR_0->p;

  return (FUNC_1(&VAR_0->vec, "long double"));
 case 'e':
  ++VAR_0->p;

  return (FUNC_1(&VAR_0->vec, "..."));
 case 'w':
  ++VAR_0->p;

  return (FUNC_1(&VAR_0->vec, "wchar_t"));
 case 'x':
  ++VAR_0->p;

  return (FUNC_1(&VAR_0->vec, "long long"));
 default:
  return (0);
 };


 return (0);
}
