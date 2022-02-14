
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct ustar_header {char* uh_sum; } ;


 int FUNC_0 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_1(struct ustar_header *VAR_0)
{
 u_int VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < sizeof(VAR_0->uh_sum); VAR_2++)
  VAR_0->uh_sum[VAR_2] = ' ';
 VAR_1 = 0;
 for (VAR_2 = 0; VAR_2 < sizeof(*VAR_0); VAR_2++)
  VAR_1 += ((u_char *)VAR_0)[VAR_2];
 FUNC_0(VAR_0->uh_sum, sizeof(VAR_0->uh_sum), "%6o", VAR_1);
}
