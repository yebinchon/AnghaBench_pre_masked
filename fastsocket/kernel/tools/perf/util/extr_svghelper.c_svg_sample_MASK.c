
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 double VAR_0 ;
 double VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,double,int,double,int) ;
 double FUNC_1 (double) ;
 int VAR_3 ;
 double FUNC_2 (int ) ;

void FUNC_3(int VAR_4, int VAR_5, u64 VAR_6, u64 VAR_7)
{
 double VAR_8;
 if (!VAR_3)
  return;

 FUNC_0(VAR_3, "<rect x=\"%4.8f\" width=\"%4.8d\" y=\"%4.1f\" height=\"%4.1d\" class=\"sample\"/>\n",
  FUNC_2(VAR_6), FUNC_2(VAR_7)-FUNC_2(VAR_6), VAR_4 * VAR_2, VAR_1);

 VAR_8 = (FUNC_2(VAR_7)-FUNC_2(VAR_6));
 if (VAR_5 > 9)
  VAR_8 = VAR_8/2;
 if (VAR_8 > 1.25)
  VAR_8 = 1.25;
 VAR_8 = FUNC_1(VAR_8);

 if (VAR_8 > VAR_0)
  FUNC_0(VAR_3, "<text x=\"%1.8f\" y=\"%1.8d\" font-size=\"%1.8fpt\">%i</text>\n",
   FUNC_2(VAR_6), VAR_4 * VAR_2 + VAR_1 - 1, VAR_8, VAR_5 + 1);

}
