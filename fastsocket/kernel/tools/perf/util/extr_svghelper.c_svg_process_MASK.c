
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 double FUNC_2 (double) ;
 int VAR_3 ;
 double FUNC_3 (int ) ;

void FUNC_4(int VAR_4, u64 VAR_5, u64 VAR_6, const char *VAR_7, const char *VAR_8)
{
 double VAR_9;

 if (!VAR_3)
  return;


 FUNC_1(VAR_3, "<g transform=\"translate(%4.8f,%4.8f)\">\n", FUNC_3(VAR_5), FUNC_0(VAR_4));
 FUNC_1(VAR_3, "<rect x=\"0\" width=\"%4.8f\" y=\"0\" height=\"%4.1f\" class=\"%s\"/>\n",
  FUNC_3(VAR_6)-FUNC_3(VAR_5), VAR_2+VAR_1, VAR_7);
 VAR_9 = FUNC_3(VAR_6)-FUNC_3(VAR_5);
 if (VAR_9 > 6)
  VAR_9 = 6;

 VAR_9 = FUNC_2(VAR_9);

 if (VAR_9 > VAR_0)
  FUNC_1(VAR_3, "<text transform=\"rotate(90)\" font-size=\"%3.8fpt\">%s</text>\n",
   VAR_9, VAR_8);

 FUNC_1(VAR_3, "</g>\n");
}
