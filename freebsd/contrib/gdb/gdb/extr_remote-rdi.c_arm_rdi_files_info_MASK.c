
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,unsigned long*,unsigned long*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3 (struct target_ops *VAR_4)
{
  char *VAR_5 = "nothing";
  int VAR_6;
  unsigned long VAR_7, VAR_8;

  VAR_6 = FUNC_0 (VAR_3, &VAR_7, &VAR_8);
  if (VAR_6 != VAR_0)
    {
      FUNC_1 ("RDI_info: %s\n", FUNC_2 (VAR_6));
    }
  if (VAR_7 & (1 << 15))
    FUNC_1 ("Target supports Thumb code.\n");
  if (VAR_7 & (1 << 14))
    FUNC_1 ("Target can do profiling.\n");
  if (VAR_7 & (1 << 4))
    FUNC_1 ("Target is real hardware.\n");

  VAR_6 = FUNC_0 (VAR_2, &VAR_7, &VAR_8);
  if (VAR_6 != VAR_0)
    {
      FUNC_1 ("RDI_info: %s\n", FUNC_2 (VAR_6));
    }
  FUNC_1 ("Target can%s single-step.\n", (VAR_7 & 0x4 ? "" : "not"));

  VAR_6 = FUNC_0 (VAR_1, &VAR_7, &VAR_8);
  if (VAR_6 != VAR_0)
    {
      FUNC_1 ("RDI_info: %s\n", FUNC_2 (VAR_6));
    }
  else
    FUNC_1 ("Target includes an EmbeddedICE.\n");
}
