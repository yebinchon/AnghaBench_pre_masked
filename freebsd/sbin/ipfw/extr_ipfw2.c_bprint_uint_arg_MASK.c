
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const* uint32_t ;
struct buf_pr {int dummy; } ;


 char const* VAR_0 ;
 int FUNC_0 (struct buf_pr*,char*,...) ;

void
FUNC_1(struct buf_pr *VAR_1, const char *VAR_2, uint32_t VAR_3)
{

 if (VAR_2 != ((void*)0))
  FUNC_0(VAR_1, "%s", VAR_2);
 if (VAR_3 == VAR_0)
  FUNC_0(VAR_1, "tablearg");
 else
  FUNC_0(VAR_1, "%u", VAR_3);
}
