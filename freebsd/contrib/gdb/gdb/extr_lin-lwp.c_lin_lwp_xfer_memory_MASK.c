
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_ops {int dummy; } ;
struct mem_attrib {int dummy; } ;
struct cleanup {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int,struct mem_attrib*,struct target_ops*) ;
 int FUNC_2 (struct cleanup*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int,int,struct mem_attrib*,struct target_ops*) ;
 int FUNC_5 (int ) ;
 struct cleanup* FUNC_6 () ;

__attribute__((used)) static int
FUNC_7 (CORE_ADDR VAR_1, char *VAR_2, int VAR_3, int VAR_4,
       struct mem_attrib *VAR_5, struct target_ops *VAR_6)
{
  struct cleanup *VAR_7 = FUNC_6 ();
  int VAR_8;

  if (FUNC_3 (VAR_0))
    VAR_0 = FUNC_5 (FUNC_0 (VAR_0));

  VAR_8 = FUNC_4 (VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
  if (VAR_8 == 0)
    VAR_8 = FUNC_1 (VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

  FUNC_2 (VAR_7);
  return VAR_8;
}
