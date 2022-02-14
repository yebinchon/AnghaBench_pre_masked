
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,int ,char const*) ;
 int FUNC_1 (int ,int ,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_2(const char *VAR_5)
{
 if (VAR_5[0] == '\0')
  return VAR_0;
 else if (VAR_5[1] == '\0')
  return FUNC_0(VAR_1, (&VAR_1)[1], VAR_5);
 else if (VAR_5[2] == '\0')
  return VAR_5[0] == '-' ? FUNC_0(VAR_3, (&VAR_3)[1], VAR_5 + 1) :
      FUNC_1(VAR_2, (&VAR_2)[1], VAR_5);
 else if (VAR_5[3] == '\0')
  return VAR_5[0] == '-' ? FUNC_1(VAR_4, (&VAR_4)[1], VAR_5 + 1) :
      VAR_0;
 else
  return VAR_0;
}
