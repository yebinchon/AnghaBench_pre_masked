
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _ddebug {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static char *FUNC_1(struct _ddebug *VAR_1, char *VAR_2,
        size_t VAR_3)
{
 char *VAR_4 = VAR_2;

 FUNC_0(VAR_3 < 4);
 if (VAR_1->flags & VAR_0)
  *VAR_4++ = 'p';
 if (VAR_4 == VAR_2)
  *VAR_4++ = '-';
 *VAR_4 = '\0';

 return VAR_2;
}
