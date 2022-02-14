
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
struct ucl_parser {int * last_comment; } ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (char const*,size_t,int ) ;

__attribute__((used)) static void
FUNC_2 (struct ucl_parser *VAR_0, const char *VAR_1, size_t VAR_2)
{
 ucl_object_t *VAR_3;

 if (VAR_2 > 0 && VAR_1 != ((void*)0)) {
  VAR_3 = FUNC_1 (VAR_1, VAR_2, 0);

  if (VAR_0->last_comment) {

   FUNC_0 (VAR_0->last_comment, VAR_3);
  }
  else {
   VAR_0->last_comment = VAR_3;
  }
 }
}
