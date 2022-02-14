
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_4__ {char* name; int flags; int value; int * section; } ;
typedef TYPE_1__ asymbol ;
typedef int asection ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 char* FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5 (bfd *VAR_2,
       const char *VAR_3,
       const char *VAR_4,
       const char *VAR_5,
       asection *VAR_6,
       int VAR_7,
       int VAR_8)
{
  asymbol *VAR_9;
  char *VAR_10 = FUNC_4 (FUNC_3 (VAR_3) + FUNC_3 (VAR_4) + FUNC_3 (VAR_5) + 1);

  FUNC_2 (VAR_10, VAR_3);
  FUNC_1 (VAR_10, VAR_4);
  FUNC_1 (VAR_10, VAR_5);
  VAR_9 = FUNC_0 (VAR_2);
  VAR_9->name = VAR_10;
  VAR_9->section = VAR_6;
  VAR_9->flags = VAR_7;
  VAR_9->value = VAR_8;
  VAR_1[VAR_0++] = VAR_9;
}
