
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_ssid {int dummy; } ;
struct parse_data {scalar_t__ param1; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int,char*,int) ;
 scalar_t__ FUNC_3 (int,int) ;

__attribute__((used)) static char * FUNC_4(const struct parse_data *VAR_0,
       struct wpa_ssid *VAR_1)
{
 int *VAR_2, VAR_3;
 char *VAR_4;

 VAR_2 = (int *) (((u8 *) VAR_1) + (long) VAR_0->param1);

 VAR_4 = FUNC_1(20);
 if (VAR_4 == ((void*)0))
  return ((void*)0);
 VAR_3 = FUNC_2(VAR_4, 20, "%d", *VAR_2);
 if (FUNC_3(20, VAR_3)) {
  FUNC_0(VAR_4);
  return ((void*)0);
 }
 VAR_4[20 - 1] = '\0';
 return VAR_4;
}
