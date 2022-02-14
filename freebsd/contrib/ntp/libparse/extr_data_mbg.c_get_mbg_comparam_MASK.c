
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int handshake; int * framing; int baud_rate; } ;
typedef TYPE_1__ COM_PARM ;


 int FUNC_0 (unsigned char**) ;
 int FUNC_1 (unsigned char**) ;

__attribute__((used)) static void
FUNC_2(
 unsigned char **VAR_0,
 COM_PARM *VAR_1
 )
{
  size_t VAR_2;

  VAR_1->baud_rate = FUNC_1(VAR_0);
  for (VAR_2 = 0; VAR_2 < sizeof(VAR_1->framing); VAR_2++)
    {
      VAR_1->framing[VAR_2] = *(*VAR_0)++;
    }
  VAR_1->handshake = FUNC_0(VAR_0);
}
