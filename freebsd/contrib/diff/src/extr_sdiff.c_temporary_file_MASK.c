
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigset_t ;


 char const* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (char*,char*,char const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 char* VAR_6 ;
 char* FUNC_7 (scalar_t__) ;

__attribute__((used)) static int
FUNC_8 (void)
{
  char const *VAR_7 = FUNC_0 (VAR_4);
  char const *VAR_8 = VAR_7 ? VAR_7 : VAR_0;
  char *VAR_9 = FUNC_7 (FUNC_6 (VAR_8) + 1 + 5 + 6 + 1);
  int VAR_10;
  int VAR_11;
  sigset_t VAR_12;
  sigset_t VAR_13;
  FUNC_5 (VAR_9, "%s/sdiffXXXXXX", VAR_8);
  FUNC_3 (&VAR_13);
  FUNC_2 (&VAR_13, VAR_1);
  FUNC_4 (VAR_2, &VAR_13, &VAR_12);
  VAR_10 = FUNC_1 (VAR_9);
  VAR_11 = VAR_5;
  if (0 <= VAR_10)
    VAR_6 = VAR_9;
  FUNC_4 (VAR_3, &VAR_12, 0);
  VAR_5 = VAR_11;
  return VAR_10;
}
