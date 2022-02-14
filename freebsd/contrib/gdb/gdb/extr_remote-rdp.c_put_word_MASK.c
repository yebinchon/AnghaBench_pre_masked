
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,unsigned char*,int) ;

__attribute__((used)) static void
FUNC_2 (int VAR_3)
{

  unsigned char VAR_4[4];
  VAR_4[0] = VAR_3;
  VAR_4[1] = VAR_3 >> 8;
  VAR_4[2] = VAR_3 >> 16;
  VAR_4[3] = VAR_3 >> 24;

  if (VAR_2)
    FUNC_0 (VAR_0, "(%04x)", VAR_3);

  FUNC_1 (VAR_1, VAR_4, 4);
}
