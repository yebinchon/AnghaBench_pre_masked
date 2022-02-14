
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4 (int VAR_3)
{
  int VAR_4;

  VAR_4 = FUNC_3 (VAR_2, VAR_3);





  if (VAR_4 >= 0)
    return VAR_4 & 0x7f;

  if (VAR_4 == VAR_0)
    {
      if (VAR_3 == 0)
 return VAR_4;

      FUNC_0 ("Timeout reading from remote system.");
    }

  FUNC_1 ("remote-st2000");
}
