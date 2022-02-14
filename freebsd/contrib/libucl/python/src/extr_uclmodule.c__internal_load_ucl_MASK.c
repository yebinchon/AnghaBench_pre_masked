
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
struct ucl_parser {int dummy; } ;
typedef int PyObject ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ucl_parser*,char*,int ) ;
 int FUNC_4 (struct ucl_parser*) ;
 scalar_t__ FUNC_5 (struct ucl_parser*) ;
 int * FUNC_6 (struct ucl_parser*) ;
 struct ucl_parser* FUNC_7 (int ) ;

__attribute__((used)) static PyObject *
FUNC_8 (char *VAR_2)
{
 PyObject *VAR_3;
 struct ucl_parser *VAR_4 = FUNC_7 (VAR_1);
 bool VAR_5 = FUNC_3(VAR_4, VAR_2, 0);

 if (VAR_5) {
  if (FUNC_5 (VAR_4)) {
   FUNC_0(VAR_0, FUNC_5(VAR_4));
   FUNC_4(VAR_4);
   VAR_3 = ((void*)0);
   goto return_with_parser;
  } else {
   ucl_object_t *VAR_6 = FUNC_6(VAR_4);
   VAR_3 = FUNC_1(VAR_6);
   FUNC_2(VAR_6);
   goto return_with_parser;
  }
 }
 else {
  FUNC_0(VAR_0, FUNC_5 (VAR_4));
  VAR_3 = ((void*)0);
  goto return_with_parser;
 }

return_with_parser:
 FUNC_4(VAR_4);
 return VAR_3;
}
