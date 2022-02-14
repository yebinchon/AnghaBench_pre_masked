
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct core_fns {scalar_t__ (* core_sniffer ) (struct core_fns*,int *) ;struct core_fns* next; } ;
typedef int bfd ;


 int FUNC_0 (int *) ;
 struct core_fns* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct core_fns*,int *) ;
 int FUNC_3 (char*,int ,...) ;

__attribute__((used)) static struct core_fns *
FUNC_4 (bfd *VAR_2)
{
  struct core_fns *VAR_3;
  struct core_fns *VAR_4 = ((void*)0);
  int VAR_5 = 0;;


  if (VAR_1 && FUNC_1 (VAR_1))
    return ((void*)0);

  for (VAR_3 = VAR_0; VAR_3 != ((void*)0); VAR_3 = VAR_3->next)
    {
      if (VAR_3->core_sniffer (VAR_3, VAR_2))
 {
   VAR_4 = VAR_3;
   VAR_5++;
 }
    }
  if (VAR_5 > 1)
    {
      FUNC_3 ("\"%s\": ambiguous core format, %d handlers match",
        FUNC_0 (VAR_2), VAR_5);
    }
  else if (VAR_5 == 0)
    {
      FUNC_3 ("\"%s\": no core file handler recognizes format, using default",
        FUNC_0 (VAR_2));
    }
  if (VAR_4 == ((void*)0))
    {
      VAR_4 = VAR_0;
    }
  return (VAR_4);
}
