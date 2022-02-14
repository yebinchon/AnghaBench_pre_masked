
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_channel_data {int flag; } ;
typedef int info ;



 int VAR_0 ;



 int FUNC_0 (char*,int,char*,char*) ;

__attribute__((used)) static char * FUNC_1(struct hostapd_channel_data *VAR_1)
{
 static char VAR_2[256];
 char *VAR_3;

 switch (VAR_1->flag & VAR_0) {
 case 129:
  VAR_3 = "unknown";
  break;
 case 128:
  VAR_3 = "usable";
  break;
 case 130:
  VAR_3 = "unavailable";
  break;
 case 131:
  VAR_3 = "available";
  break;
 default:
  return "";
 }
 FUNC_0(VAR_2, sizeof(VAR_2), " (DFS state = %s)", VAR_3);
 VAR_2[sizeof(VAR_2) - 1] = '\0';

 return VAR_2;
}
