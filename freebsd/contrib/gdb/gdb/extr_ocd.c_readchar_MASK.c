
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3 (int VAR_1)
{
  int VAR_2;

  VAR_2 = FUNC_2 (VAR_0, VAR_1);

  switch (VAR_2)
    {
    case 130:
      FUNC_0 ("Remote connection closed");
    case 129:
      FUNC_1 ("Remote communication error");
    case 128:
    default:
      return VAR_2;
    }
}
