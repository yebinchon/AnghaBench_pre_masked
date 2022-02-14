
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int (* to_xfer_memory ) (int ,char*,int,int,struct mem_attrib*,struct target_ops*) ;} ;
struct mem_attrib {int dummy; } ;
typedef int CORE_ADDR ;


 struct target_ops* FUNC_0 (struct target_ops*) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int ,char*,int) ;
 int FUNC_2 (int *,int ,char*,int) ;
 int FUNC_3 (int ,char*,int,int,struct mem_attrib*,struct target_ops*) ;

__attribute__((used)) static int
FUNC_4(CORE_ADDR VAR_1, char *VAR_2, int VAR_3, int VAR_4,
    struct mem_attrib *VAR_5, struct target_ops *VAR_6)
{
 struct target_ops *VAR_7;

 if (VAR_0 != ((void*)0)) {
  if (VAR_3 == 0)
   return (0);
  if (!VAR_4)
   return (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3));
  else
   return (FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3));
 }
 VAR_7 = FUNC_0(VAR_6);
 return (VAR_7->to_xfer_memory(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_7));
}
