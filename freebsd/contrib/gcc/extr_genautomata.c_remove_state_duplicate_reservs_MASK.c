
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int ,size_t) ;
 size_t FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,size_t,int ) ;
 int FUNC_3 (int ,int ,size_t) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5 (void)
{
  size_t VAR_2, VAR_3;

  for (VAR_2 = 1, VAR_3 = 0; VAR_2 < FUNC_1 (VAR_0, VAR_1); VAR_2++)
    if (FUNC_4 (FUNC_0 (VAR_0, VAR_1, VAR_3),
    FUNC_0 (VAR_0, VAR_1, VAR_2)))
      {
 VAR_3++;
 FUNC_2 (VAR_0, VAR_1, VAR_3,
       FUNC_0 (VAR_0, VAR_1, VAR_2));
      }
  FUNC_3 (VAR_0, VAR_1, VAR_3 + 1);
}
