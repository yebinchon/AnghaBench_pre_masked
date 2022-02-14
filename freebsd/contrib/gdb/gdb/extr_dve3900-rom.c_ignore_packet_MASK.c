
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  int VAR_1 = -1;
  int VAR_2;



  for (VAR_2 = 0; VAR_2 < 256; VAR_2++)
    {
      VAR_1 = FUNC_0 (0);
      if (VAR_1 == VAR_0)
 break;
    }
  if (VAR_2 == 8)
    FUNC_1 ("Packet header byte not found; %02x seen instead.", VAR_1);


  VAR_1 = FUNC_0 (1);

  VAR_1 = FUNC_0 (1);
  VAR_2 = VAR_1 & 0xff;

  VAR_1 = FUNC_0 (1);
  VAR_2 += (VAR_1 & 0xff) << 8;


  while (VAR_2-- > 0)
    VAR_1 = FUNC_0 (1);
}
