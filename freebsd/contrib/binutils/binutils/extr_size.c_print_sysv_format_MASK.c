
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bfd_size_type ;
typedef int bfd ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,scalar_t__) ;
 void* FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_6 (bfd *VAR_7)
{

  VAR_3 = 0;
  VAR_0 = 0;
  VAR_1 = 0;
  FUNC_1 (VAR_7, VAR_6, ((void*)0));
  VAR_4 = FUNC_5 ((bfd_size_type)VAR_0);

  if ((size_t) VAR_4 < sizeof ("addr") - 1)
    VAR_4 = sizeof ("addr")-1;

  VAR_2 = FUNC_5 (VAR_3);
  if ((size_t) VAR_2 < sizeof ("size") - 1)
    VAR_2 = sizeof ("size")-1;

  VAR_3 = 0;
  FUNC_3 ("%s  ", FUNC_0 (VAR_7));

  if (FUNC_2 (VAR_7))
    FUNC_3 (" (ex %s)", FUNC_0 (FUNC_2 (VAR_7)));

  FUNC_3 (":\n%-*s   %*s   %*s\n", VAR_1, "section",
   VAR_2, "size", VAR_4, "addr");

  FUNC_1 (VAR_7, VAR_5, ((void*)0));

  FUNC_3 ("%-*s   ", VAR_1, "Total");
  FUNC_4 (VAR_2, VAR_3);
  FUNC_3 ("\n\n");
}
