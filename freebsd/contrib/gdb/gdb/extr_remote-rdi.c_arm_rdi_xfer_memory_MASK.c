
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;
struct mem_attrib {int dummy; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int*) ;
 int FUNC_1 (char*,int ,int*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4 (CORE_ADDR VAR_1, char *VAR_2, int VAR_3,
       int VAR_4, struct mem_attrib *VAR_5,
       struct target_ops *VAR_6)
{
  int VAR_7, VAR_8;

  if (VAR_4)
    {
      VAR_7 = FUNC_1 (VAR_2, VAR_1, &VAR_3);
      if (VAR_7 != VAR_0)
 {
   FUNC_2 ("RDI_write: %s\n", FUNC_3 (VAR_7));
 }
    }
  else
    {
      VAR_7 = FUNC_0 (VAR_1, VAR_2, &VAR_3);
      if (VAR_7 != VAR_0)
 {
   FUNC_2 ("RDI_read: %s\n", FUNC_3 (VAR_7));
   VAR_3 = 0;
 }
    }
  return VAR_3;
}
