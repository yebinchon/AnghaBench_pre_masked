
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct charset {int name; int valid_host_charset; } ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void
FUNC_1 (struct charset *VAR_0)
{
  if (! VAR_0->valid_host_charset)
    FUNC_0 ("GDB can't use `%s' as its host character set.", VAR_0->name);
}
