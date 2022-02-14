
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delay_desc {int lineno; struct delay_desc* next; scalar_t__ num; int def; } ;
typedef int rtx ;


 scalar_t__ FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int) ;
 struct delay_desc* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_4 ;
 struct delay_desc* FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4 (rtx VAR_5, int VAR_6)
{
  struct delay_desc *VAR_7;
  int VAR_8;

  if (FUNC_1 (VAR_5, 1) % 3 != 0)
    {
      FUNC_2 (VAR_6,
    "number of elements in DEFINE_DELAY must be multiple of three");
      VAR_3 = 1;
      return;
    }

  for (VAR_8 = 0; VAR_8 < FUNC_1 (VAR_5, 1); VAR_8 += 3)
    {
      if (FUNC_0 (VAR_5, 1, VAR_8 + 1))
 VAR_2 = 1;
      if (FUNC_0 (VAR_5, 1, VAR_8 + 2))
 VAR_1 = 1;
    }

  VAR_7 = FUNC_3 (sizeof (struct delay_desc));
  VAR_7->def = VAR_5;
  VAR_7->num = ++VAR_4;
  VAR_7->next = VAR_0;
  VAR_7->lineno = VAR_6;
  VAR_0 = VAR_7;
}
