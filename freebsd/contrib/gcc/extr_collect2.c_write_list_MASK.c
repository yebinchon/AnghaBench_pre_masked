
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct id {int sequence; struct id* next; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char const*,int) ;

__attribute__((used)) static void
FUNC_1 (FILE *VAR_0, const char *VAR_1, struct id *VAR_2)
{
  while (VAR_2)
    {
      FUNC_0 (VAR_0, "%sx%d,\n", VAR_1, VAR_2->sequence);
      VAR_2 = VAR_2->next;
    }
}
