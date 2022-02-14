
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int,int) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4 (int VAR_3)
{
  int VAR_4;

  VAR_4 = FUNC_3 (VAR_2, VAR_3);

  if (VAR_1 > 1 && VAR_4 >= 0)
    FUNC_1 (VAR_0, "%c(%x)", VAR_4, VAR_4);

  switch (VAR_4)
    {
    case 130:
      FUNC_0 ("Remote connection closed");
    case 129:
      FUNC_2 ("Remote communication error");
    case 128:
      return VAR_4;
    default:
      return VAR_4 & 0x7f;
    }
}
