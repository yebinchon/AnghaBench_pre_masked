
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_meta {scalar_t__ macroset; TYPE_1__* first; } ;
struct mparse {int dummy; } ;
struct TYPE_2__ {int child; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mparse*,int,char const*) ;
 struct roff_meta* FUNC_2 (struct mparse*) ;
 int FUNC_3 (int ,int*,int*,int) ;
 int FUNC_4 (int ,int*,int*,int) ;
 int FUNC_5 (char) ;

__attribute__((used)) static void
FUNC_6(struct mparse *VAR_1, int VAR_2, const char *VAR_3, int VAR_4)
{
 struct roff_meta *VAR_5;
 int VAR_6, VAR_7;

 FUNC_1(VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_2);
 VAR_5 = FUNC_2(VAR_1);
 VAR_6 = 1;
 VAR_7 = 0;

 if (VAR_5->macroset == VAR_0)
  FUNC_4(VAR_5->first->child, &VAR_6, &VAR_7, VAR_4);
 else
  FUNC_3(VAR_5->first->child, &VAR_6, &VAR_7, VAR_4);

 if ( ! VAR_4)
  FUNC_5('\n');
}
