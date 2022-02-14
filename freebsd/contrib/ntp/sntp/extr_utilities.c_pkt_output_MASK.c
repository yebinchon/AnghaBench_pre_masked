
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pkt {int dummy; } ;
typedef int FILE ;


 char* VAR_0 ;
 int FUNC_0 (int *,char*,...) ;

void
FUNC_1 (
  struct pkt *VAR_1,
  int VAR_2,
  FILE *VAR_3
    )
{
 register int VAR_4;
 u_char *VAR_5;

 VAR_5 = (u_char *)VAR_1;

 FUNC_0(VAR_3, VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (VAR_4 > 0 && VAR_4 % 8 == 0)
   FUNC_0(VAR_3, "\n");

  FUNC_0(VAR_3, "%3d: %02x  ", VAR_4, VAR_5[VAR_4]);
 }

 FUNC_0(VAR_3, "\n");
 FUNC_0(VAR_3, VAR_0);
}
