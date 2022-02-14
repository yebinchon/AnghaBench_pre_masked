
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,char const*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3 (int VAR_2, int VAR_3)
{
  const char *VAR_4;

  switch (*VAR_0)
    {
    case 0xf8:
      VAR_4 = "swapgs";
      break;
    case 0xf9:
      VAR_4 = "rdtscp";
      break;
    default:
      FUNC_0 (VAR_2, VAR_3);
      return;
    }

  FUNC_1 (VAR_1 + FUNC_2 (VAR_1) - 6, VAR_4);
  VAR_0++;
}
