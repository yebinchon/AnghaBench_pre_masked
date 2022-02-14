
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 long FUNC_3 (int *,int ,void*,unsigned int*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4 (bfd *VAR_4)
{
  long VAR_5;
  unsigned int VAR_6;

  if ((FUNC_1 (VAR_4) & VAR_1) == 0)
    return;

  VAR_5 = FUNC_3 (VAR_4, VAR_0, (void *) &VAR_3, &VAR_6);
  if (VAR_5 == 0)
    VAR_5 = FUNC_3 (VAR_4, VAR_2 , (void *) &VAR_3, &VAR_6);

  if (VAR_5 < 0)
    FUNC_0 (FUNC_2 (VAR_4));
}
