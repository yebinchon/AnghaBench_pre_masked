
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 double VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,double,double,...) ;
 int VAR_2 ;
 double FUNC_1 (int ) ;

void FUNC_2(u64 VAR_3, int VAR_4, int VAR_5)
{
 double VAR_6;

 if (!VAR_2)
  return;


 if (VAR_4 < VAR_5)
  FUNC_0(VAR_2, "<line x1=\"%4.8f\" y1=\"%4.2f\" x2=\"%4.8f\" y2=\"%4.2d\" style=\"stroke:rgb(32,255,32);stroke-width:0.009\"/>\n",
   FUNC_1(VAR_3), VAR_4 * VAR_1 + VAR_0, FUNC_1(VAR_3), VAR_5 * VAR_1);
 else
  FUNC_0(VAR_2, "<line x1=\"%4.8f\" y1=\"%4.2f\" x2=\"%4.8f\" y2=\"%4.2d\" style=\"stroke:rgb(32,255,32);stroke-width:0.009\"/>\n",
   FUNC_1(VAR_3), VAR_5 * VAR_1 + VAR_0, FUNC_1(VAR_3), VAR_4 * VAR_1);

 VAR_6 = VAR_4 * VAR_1;
 if (VAR_5 > VAR_4)
  VAR_6 += VAR_0;
 FUNC_0(VAR_2, "<circle  cx=\"%4.8f\" cy=\"%4.2f\" r = \"0.01\"  style=\"fill:rgb(32,255,32)\"/>\n",
   FUNC_1(VAR_3), VAR_6);
}
