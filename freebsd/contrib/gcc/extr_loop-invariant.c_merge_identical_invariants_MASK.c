
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct invariant {int dummy; } ;
typedef int htab_t ;


 scalar_t__ FUNC_0 (int ,int ,unsigned int,struct invariant*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct invariant*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_5 (void)
{
  unsigned VAR_5;
  struct invariant *VAR_6;
  htab_t VAR_7 = FUNC_3 (FUNC_1 (VAR_3, VAR_4),
      VAR_2, VAR_0, VAR_1);

  for (VAR_5 = 0; FUNC_0 (VAR_3, VAR_4, VAR_5, VAR_6); VAR_5++)
    FUNC_2 (VAR_7, VAR_6);

  FUNC_4 (VAR_7);
}
