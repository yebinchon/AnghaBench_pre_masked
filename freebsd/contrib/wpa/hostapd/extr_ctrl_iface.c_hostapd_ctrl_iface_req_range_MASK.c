
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hostapd_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct hostapd_data*,int *,int,int,int *,unsigned int) ;
 scalar_t__ FUNC_2 (char*,int *) ;
 char* FUNC_3 (char*,char*,char**) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct hostapd_data *VAR_4, char *VAR_5)
{
 u8 VAR_6[VAR_0];
 char *VAR_7, *VAR_8 = ((void*)0);
 int VAR_9, VAR_10;
 u8 VAR_11[VAR_0 * VAR_2];
 unsigned int VAR_12;

 VAR_7 = FUNC_3(VAR_5, " ", &VAR_8);
 if (!VAR_7 || FUNC_2(VAR_7, VAR_6)) {
  FUNC_4(VAR_1,
      "CTRL: REQ_RANGE - Bad destination address");
  return -1;
 }

 VAR_7 = FUNC_3(VAR_5, " ", &VAR_8);
 if (!VAR_7)
  return -1;

 VAR_9 = FUNC_0(VAR_7);
 if (VAR_9 < 0 || VAR_9 > 0xffff)
  return -1;

 VAR_7 = FUNC_3(VAR_5, " ", &VAR_8);
 if (!VAR_7)
  return -1;

 VAR_10 = FUNC_0(VAR_7);
 if (VAR_10 <= 0 || VAR_10 > VAR_3)
  return -1;

 VAR_12 = 0;
 while ((VAR_7 = FUNC_3(VAR_5, " ", &VAR_8))) {
  if (VAR_12 == VAR_2) {
   FUNC_4(VAR_1,
       "CTRL: REQ_RANGE: Too many responders");
   return -1;
  }

  if (FUNC_2(VAR_7, VAR_11 + VAR_12 * VAR_0)) {
   FUNC_4(VAR_1,
       "CTRL: REQ_RANGE: Bad responder address");
   return -1;
  }

  VAR_12++;
 }

 if (!VAR_12) {
  FUNC_4(VAR_1,
      "CTRL: REQ_RANGE - No FTM responder address");
  return -1;
 }

 return FUNC_1(VAR_4, VAR_6, VAR_9, VAR_10,
          VAR_11, VAR_12);
}
