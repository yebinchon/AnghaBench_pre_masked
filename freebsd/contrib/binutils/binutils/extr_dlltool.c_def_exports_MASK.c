
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct export {char const* name; char const* internal_name; char const* import_name; int ordinal; int constant; int noname; int private; int data; scalar_t__ forward; struct export* next; } ;


 struct export* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (char const*,char) ;
 scalar_t__ FUNC_1 (int) ;

void
FUNC_2 (const char *VAR_3, const char *VAR_4, int VAR_5,
      int VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
  struct export *VAR_10 = (struct export *) FUNC_1 (sizeof (*VAR_10));

  VAR_10->name = VAR_3;
  VAR_10->internal_name = VAR_4 ? VAR_4 : VAR_3;
  VAR_10->import_name = VAR_3;
  VAR_10->ordinal = VAR_5;
  VAR_10->constant = VAR_7;
  VAR_10->noname = VAR_6;
  VAR_10->private = VAR_9;
  VAR_10->data = VAR_8;
  VAR_10->next = VAR_0;
  VAR_0 = VAR_10;
  VAR_2++;

  if ((VAR_4 != ((void*)0))
      && (FUNC_0 (VAR_4, '.') != ((void*)0)))
    VAR_10->forward = ++VAR_1;
  else
    VAR_10->forward = 0;
}
