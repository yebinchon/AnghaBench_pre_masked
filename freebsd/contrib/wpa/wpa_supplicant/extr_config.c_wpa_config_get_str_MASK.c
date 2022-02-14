
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_config {int dummy; } ;


 int FUNC_0 (char*,size_t,char*,char const*,...) ;
 scalar_t__ FUNC_1 (size_t,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, struct wpa_config *VAR_1,
         long VAR_2, char *VAR_3, size_t VAR_4,
         int VAR_5)
{
 char **VAR_6 = (char **) (((u8 *) VAR_1) + (long) VAR_2);
 int VAR_7;

 if (VAR_5)
  VAR_7 = FUNC_0(VAR_3, VAR_4, "%s=%s\n", VAR_0,
      *VAR_6 ? *VAR_6 : "null");
 else if (!*VAR_6)
  return -1;
 else
  VAR_7 = FUNC_0(VAR_3, VAR_4, "%s", *VAR_6);
 if (FUNC_1(VAR_4, VAR_7))
  VAR_7 = -1;

 return VAR_7;
}
