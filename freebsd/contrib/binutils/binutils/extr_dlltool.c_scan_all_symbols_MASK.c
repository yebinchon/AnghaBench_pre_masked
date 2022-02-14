
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 long FUNC_5 (int *,int ,void**,unsigned int*) ;
 long FUNC_6 (int *,void*,long,unsigned int) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,void*,long,unsigned int) ;

__attribute__((used)) static void
FUNC_10 (bfd *VAR_2)
{
  long VAR_3;
  void *VAR_4;
  unsigned int VAR_5;




  if (FUNC_4 (VAR_2, ".idata$4"))
    return;

  if (! (FUNC_2 (VAR_2) & VAR_1))
    {

      FUNC_8 (FUNC_0("%s: no symbols"), FUNC_3 (VAR_2));
      return;
    }

  VAR_3 = FUNC_5 (VAR_2, VAR_0, &VAR_4, &VAR_5);
  if (VAR_3 < 0)
    FUNC_1 (FUNC_3 (VAR_2));

  if (VAR_3 == 0)
    {

      FUNC_8 (FUNC_0("%s: no symbols"), FUNC_3 (VAR_2));
      return;
    }




  VAR_3 = FUNC_6 (VAR_2, VAR_4, VAR_3, VAR_5);
  FUNC_9 (VAR_2, VAR_4, VAR_3, VAR_5);

  FUNC_7 (VAR_4);
}
