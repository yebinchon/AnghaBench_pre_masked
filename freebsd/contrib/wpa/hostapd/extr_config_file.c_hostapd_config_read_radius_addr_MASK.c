
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_radius_server {int port; int index; int addr; } ;


 int FUNC_0 (char const*,int *) ;
 int FUNC_1 (struct hostapd_radius_server*,int ,int) ;
 struct hostapd_radius_server* FUNC_2 (struct hostapd_radius_server*,int,int) ;

__attribute__((used)) static int
FUNC_3(struct hostapd_radius_server **VAR_0,
    int *VAR_1, const char *VAR_2, int VAR_3,
    struct hostapd_radius_server **VAR_4)
{
 struct hostapd_radius_server *VAR_5;
 int VAR_6;
 static int VAR_7 = 1;

 VAR_5 = FUNC_2(*VAR_0, *VAR_1 + 1, sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return -1;

 *VAR_0 = VAR_5;
 VAR_5 = &VAR_5[*VAR_1];
 (*VAR_1)++;
 (*VAR_4) = VAR_5;

 FUNC_1(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->port = VAR_3;
 VAR_6 = FUNC_0(VAR_2, &VAR_5->addr);
 VAR_5->index = VAR_7++;

 return VAR_6;
}
