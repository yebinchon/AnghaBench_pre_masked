
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int statbuf ;
typedef int file_off ;
typedef int bfd_boolean ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (char*,int *) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int *,int ,int ,int ,char*) ;
 char* VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static bfd_boolean
FUNC_10 (char *VAR_9)
{
  statbuf VAR_10;

  if (FUNC_3 (VAR_9, &VAR_10) < 0)
    {
      if (VAR_6 == VAR_0)
 FUNC_5 (FUNC_0("'%s': No such file"), VAR_9);
      else
 FUNC_5 (FUNC_0("Warning: could not locate '%s'.  reason: %s"),
     VAR_9, FUNC_8 (VAR_6));
      return VAR_2;
    }





  if (!VAR_5 || !FUNC_9 (VAR_9))
    {
      FILE *VAR_11;

      VAR_11 = FUNC_2 (VAR_9, VAR_3);
      if (VAR_11 == ((void*)0))
 {
   FUNC_4 (VAR_8, "%s: ", VAR_7);
   FUNC_6 (VAR_9);
   return VAR_2;
 }

      FUNC_7 (VAR_9, VAR_11, (file_off) 0, 0, 0, (char *) 0);

      if (FUNC_1 (VAR_11) == VAR_1)
 {
   FUNC_4 (VAR_8, "%s: ", VAR_7);
   FUNC_6 (VAR_9);
   return VAR_2;
 }
    }

  return VAR_4;
}
