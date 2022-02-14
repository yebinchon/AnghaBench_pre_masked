
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_clonereq {int ifcr_total; int ifcr_count; char* ifcr_buffer; } ;
typedef int ifcr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,int ,struct if_clonereq*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (struct if_clonereq*,int ,int) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_9(void)
{
 struct if_clonereq VAR_4;
 char *VAR_5, *VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_8(VAR_0, VAR_3, 0);
 if (VAR_8 == -1)
  FUNC_1(1, "socket(AF_LOCAL,SOCK_DGRAM)");

 FUNC_5(&VAR_4, 0, sizeof(VAR_4));

 if (FUNC_3(VAR_8, VAR_2, &VAR_4) < 0)
  FUNC_1(1, "SIOCIFGCLONERS for count");

 VAR_6 = FUNC_4(VAR_4.ifcr_total * VAR_1);
 if (VAR_6 == ((void*)0))
  FUNC_1(1, "unable to allocate cloner name buffer");

 VAR_4.ifcr_count = VAR_4.ifcr_total;
 VAR_4.ifcr_buffer = VAR_6;

 if (FUNC_3(VAR_8, VAR_2, &VAR_4) < 0)
  FUNC_1(1, "SIOCIFGCLONERS for names");




 if (VAR_4.ifcr_count > VAR_4.ifcr_total)
  VAR_4.ifcr_count = VAR_4.ifcr_total;

 for (VAR_5 = VAR_6, VAR_7 = 0; VAR_7 < VAR_4.ifcr_count; VAR_7++, VAR_5 += VAR_1) {
  if (VAR_7 > 0)
   FUNC_7(' ');
  FUNC_6("%s", VAR_5);
 }

 FUNC_7('\n');
 FUNC_2(VAR_6);
 FUNC_0(VAR_8);
}
