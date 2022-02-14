
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct part_conf {int p_log; scalar_t__ p_prtn; } ;


 int FUNC_0 (int ,int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (char*,char*,int,struct part_conf*) ;
 int FUNC_3 (char*,char**,char**) ;
 int FUNC_4 (int,struct part_conf*,char*,char*) ;
 scalar_t__ FUNC_5 (int,struct part_conf*,char*,char*) ;
 scalar_t__ FUNC_6 (int,struct part_conf*,char*,char*,char*,char*) ;
 int VAR_1 ;
 char* FUNC_7 (char*,char) ;
 scalar_t__ FUNC_8 (char*,char*) ;

__attribute__((used)) static int FUNC_9(struct part_conf *VAR_2, char *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = 0;
 char *VAR_7, *VAR_8, *VAR_9, *VAR_10;
 char *VAR_11, *VAR_12;

 VAR_12 = VAR_3;
 if (*VAR_12 == '\t' || *VAR_12 == '\0' || *VAR_12 == '\n')
  VAR_12++;

 VAR_6 += (int)(VAR_12 - VAR_3);
 VAR_3 = VAR_12;

 if (VAR_2->p_prtn)
  goto skip_header;

 VAR_11 = FUNC_7(VAR_12, ':');
 if (!VAR_11) {
  FUNC_0(VAR_2->p_log, VAR_0, "PARSE ERROR: line %d: "
   "no partition definition found\n", VAR_4);
  FUNC_1(VAR_1, "\nPARSE ERROR: line %d: "
   "no partition definition found\n", VAR_4);
  return -1;
 }

 *VAR_11++ = '\0';
 VAR_3 = VAR_11;

 VAR_7 = VAR_8 = VAR_9 = VAR_10 = ((void*)0);

 VAR_11 = FUNC_7(VAR_12, ',');
 if (VAR_11)
  *VAR_11 = '\0';

 VAR_5 = FUNC_3(VAR_12, &VAR_7, &VAR_8);
 VAR_12 += VAR_5;
 VAR_6 += VAR_5;

 while (VAR_11) {
  VAR_9 = VAR_10 = ((void*)0);
  VAR_11 = FUNC_7(VAR_12, ',');
  if (VAR_11)
   *VAR_11++ = '\0';
  VAR_5 = FUNC_3(VAR_12, &VAR_9, &VAR_10);
  if (!VAR_9) {
   FUNC_0(VAR_2->p_log, VAR_0,
    "PARSE ERROR: line %d: "
    "bad partition flags\n", VAR_4);
   FUNC_1(VAR_1, "\nPARSE ERROR: line %d: "
    "bad partition flags\n", VAR_4);
   return -1;
  }
  VAR_12 += VAR_5;
  VAR_6 += VAR_5;
  FUNC_4(VAR_4, VAR_2, VAR_9, VAR_10);
 }

 if (VAR_12 != VAR_3 || (FUNC_6(VAR_4, VAR_2,
       VAR_7, VAR_8, VAR_9, VAR_10) < 0)) {
  FUNC_0(VAR_2->p_log, VAR_0, "PARSE ERROR: line %d: "
   "bad partition definition\n", VAR_4);
  FUNC_1(VAR_1, "\nPARSE ERROR: line %d: "
   "bad partition definition\n", VAR_4);
  return -1;
 }

skip_header:
 do {
  VAR_7 = VAR_9 = ((void*)0);
  VAR_11 = FUNC_7(VAR_12, ',');
  if (VAR_11)
   *VAR_11++ = '\0';
  VAR_5 = FUNC_3(VAR_12, &VAR_7, &VAR_9);
  VAR_6 += VAR_5;

  if (FUNC_8(VAR_7, "mgid") == 0) {

   VAR_6 += FUNC_2(VAR_12+VAR_5, VAR_9, VAR_4, VAR_2);
   goto done;
  }
  if (FUNC_5(VAR_4, VAR_2, VAR_7, VAR_9) < 0) {
   FUNC_0(VAR_2->p_log, VAR_0,
    "PARSE ERROR: line %d: "
    "bad PortGUID\n", VAR_4);
   FUNC_1(VAR_1, "PARSE ERROR: line %d: "
    "bad PortGUID\n", VAR_4);
   return -1;
  }
  VAR_12 += VAR_5;
 } while (VAR_11);

done:
 return VAR_6;
}
