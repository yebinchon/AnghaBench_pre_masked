
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
struct ucl_parser {int flags; int err; } ;
struct ucl_chunk {unsigned char const* pos; int column; int remain; int end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned char const*,int ,char const**,int,int,int) ;
 int FUNC_1 (struct ucl_parser*,int ,char*,int *) ;

__attribute__((used)) static bool
FUNC_2 (struct ucl_parser *VAR_3,
  struct ucl_chunk *VAR_4, ucl_object_t *VAR_5)
{
 const unsigned char *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0 (VAR_5, VAR_4->pos, VAR_4->end, (const char **)&VAR_6,
   1, 0, ((VAR_3->flags & VAR_2) == 0));

 if (VAR_7 == 0) {
  VAR_4->remain -= VAR_6 - VAR_4->pos;
  VAR_4->column += VAR_6 - VAR_4->pos;
  VAR_4->pos = VAR_6;
  return 1;
 }
 else if (VAR_7 == VAR_0) {
  FUNC_1 (VAR_3, VAR_1, "numeric value out of range",
    &VAR_3->err);
 }

 return 0;
}
