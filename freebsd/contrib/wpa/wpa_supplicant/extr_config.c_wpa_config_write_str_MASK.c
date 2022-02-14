
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_ssid {int dummy; } ;
struct parse_data {scalar_t__ param2; scalar_t__ param1; } ;


 size_t FUNC_0 (char*) ;
 char* FUNC_1 (int const*,size_t) ;

__attribute__((used)) static char * FUNC_2(const struct parse_data *VAR_0,
       struct wpa_ssid *VAR_1)
{
 size_t VAR_2;
 char **VAR_3;

 VAR_3 = (char **) (((u8 *) VAR_1) + (long) VAR_0->param1);
 if (*VAR_3 == ((void*)0))
  return ((void*)0);

 if (VAR_0->param2)
  VAR_2 = *((size_t *) (((u8 *) VAR_1) + (long) VAR_0->param2));
 else
  VAR_2 = FUNC_0(*VAR_3);

 return FUNC_1((const u8 *) *VAR_3, VAR_2);
}
