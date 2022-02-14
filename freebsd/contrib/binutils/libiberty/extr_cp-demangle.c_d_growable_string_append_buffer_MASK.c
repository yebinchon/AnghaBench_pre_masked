
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d_growable_string {size_t len; size_t alc; char* buf; scalar_t__ allocation_failure; } ;


 int FUNC_0 (struct d_growable_string*,size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;

__attribute__((used)) static inline void
FUNC_2 (struct d_growable_string *VAR_0,
                                 const char *VAR_1, size_t VAR_2)
{
  size_t VAR_3;

  VAR_3 = VAR_0->len + VAR_2 + 1;
  if (VAR_3 > VAR_0->alc)
    FUNC_0 (VAR_0, VAR_3);

  if (VAR_0->allocation_failure)
    return;

  FUNC_1 (VAR_0->buf + VAR_0->len, VAR_1, VAR_2);
  VAR_0->buf[VAR_0->len + VAR_2] = '\0';
  VAR_0->len += VAR_2;
}
