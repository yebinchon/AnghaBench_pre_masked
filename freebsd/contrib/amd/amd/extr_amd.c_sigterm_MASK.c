
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RETSIGTYPE ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int,int (*) (int)) ;

__attribute__((used)) static RETSIGTYPE
FUNC_3(int VAR_4)
{




  switch (VAR_4) {
  case 129:
    VAR_1 = 15;
    break;

  case 128:
    VAR_1 = -1;


  default:
    FUNC_1(VAR_0, "WARNING: automounter going down on signal %d", VAR_4);
    break;
  }
  if (VAR_3)
    FUNC_0(VAR_2, VAR_4);
}
