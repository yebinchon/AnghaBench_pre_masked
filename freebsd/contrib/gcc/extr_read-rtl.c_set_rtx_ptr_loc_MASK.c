
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ptr_loc {char const* filename; int lineno; void const* ptr; } ;


 int VAR_0 ;
 struct ptr_loc** FUNC_0 (int ,struct ptr_loc*,int ) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2 (const void *VAR_3, const char *VAR_4, int VAR_5)
{
  struct ptr_loc *VAR_6;

  VAR_6 = (struct ptr_loc *) FUNC_1 (&VAR_1,
       sizeof (struct ptr_loc));
  VAR_6->ptr = VAR_3;
  VAR_6->filename = VAR_4;
  VAR_6->lineno = VAR_5;
  *FUNC_0 (VAR_2, VAR_6, VAR_0) = VAR_6;
}
