
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_config {int detect; int support; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0 (struct packet_config *VAR_3)
{
  switch (VAR_3->detect)
    {
    case 128:
      VAR_3->support = VAR_1;
      break;
    case 129:
      VAR_3->support = VAR_0;
      break;
    case 130:
      VAR_3->support = VAR_2;
      break;
    }
}
