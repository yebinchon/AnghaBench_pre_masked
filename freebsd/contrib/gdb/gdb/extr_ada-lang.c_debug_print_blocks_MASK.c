
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blockvector {int dummy; } ;


 int FUNC_0 (struct blockvector*,int) ;
 int FUNC_1 (struct blockvector*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4 (struct blockvector *VAR_1)
{
  int VAR_2;

  if (VAR_1 == ((void*)0))
    return;
  for (VAR_2 = 0; VAR_2 < FUNC_1 (VAR_1); VAR_2 += 1)
    {
      FUNC_3 (VAR_0, "%6d. ", VAR_2);
      FUNC_2 (FUNC_0 (VAR_1, VAR_2));
    }
}
