
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_config {int dummy; } ;


 int FUNC_0 (char*,size_t,char*,...) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, struct wpa_config *VAR_1,
         long VAR_2, char *VAR_3, size_t VAR_4,
         int VAR_5)
{
 int *VAR_6 = (int *) (((u8 *) VAR_1) + (long) VAR_2);

 if (VAR_5)
  return FUNC_0(VAR_3, VAR_4, "%s=%d\n", VAR_0, *VAR_6);
 return FUNC_0(VAR_3, VAR_4, "%d", *VAR_6);
}
