
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_key_t ;
struct minimal_symbol {int dummy; } ;


 char* FUNC_0 (struct minimal_symbol*) ;
 int VAR_0 ;
 int FUNC_1 (void (*) (void*),int ) ;
 struct minimal_symbol* FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,void (*) (void*),char*) ;

__attribute__((used)) static int
FUNC_4 (thread_key_t VAR_1, void (*VAR_2)(void *), void *VAR_3)
{
  struct minimal_symbol *VAR_4;
  char *VAR_5;

  VAR_4 = FUNC_2 (
 FUNC_1(VAR_2, VAR_0));
  if (!VAR_4)
    VAR_5 = "???";
  else
    VAR_5 = FUNC_0 (VAR_4);

  FUNC_3 ("Key %d, destructor %p <%s>\n", VAR_1, VAR_2, VAR_5);
  return 0;
}
