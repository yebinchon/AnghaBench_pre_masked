
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm_sec {char* name; int nameaddr; } ;
struct lm_info {int nsecs; struct lm_sec* secs; } ;


 int VAR_0 ;
 int FUNC_0 (struct lm_info*) ;
 int FUNC_1 (int ,char**,int ,int*) ;
 int FUNC_2 (char*,int ) ;
 char* FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (struct lm_info *VAR_1)
{

  int VAR_2, VAR_3;
  struct lm_sec *VAR_4;
  char *VAR_5;

  for (VAR_2 = 0; VAR_2 < VAR_1->nsecs; VAR_2++)
    {
      VAR_4 = VAR_1->secs + VAR_2;
      FUNC_1 (VAR_4->nameaddr, &VAR_5, VAR_0, &VAR_3);
      if (VAR_3 != 0)
 {
   FUNC_2 ("unable to read shared sec name at 0x%lx", VAR_4->nameaddr);
   VAR_5 = FUNC_3 ("");
 }
      VAR_4->name = VAR_5;
    }
  FUNC_0 (VAR_1);

}
