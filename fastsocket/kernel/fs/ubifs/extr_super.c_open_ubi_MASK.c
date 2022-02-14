
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_volume_desc {int dummy; } ;


 int VAR_0 ;
 struct ubi_volume_desc* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char const*,char**,int ) ;
 struct ubi_volume_desc* FUNC_3 (int,int,int) ;
 struct ubi_volume_desc* FUNC_4 (int,char const*,int) ;

__attribute__((used)) static struct ubi_volume_desc *FUNC_5(const char *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 char *VAR_5;

 if (VAR_1[0] != 'u' || VAR_1[1] != 'b' || VAR_1[2] != 'i')
  return FUNC_0(-VAR_0);


 if ((VAR_1[3] == ':' || VAR_1[3] == '!') && VAR_1[4] != '\0')
  return FUNC_4(0, VAR_1 + 4, VAR_2);

 if (!FUNC_1(VAR_1[3]))
  return FUNC_0(-VAR_0);

 VAR_3 = FUNC_2(VAR_1 + 3, &VAR_5, 0);


 if (*VAR_5 == '\0')
  return FUNC_3(0, VAR_3, VAR_2);


 if (*VAR_5 == '_' && FUNC_1(VAR_5[1])) {
  VAR_4 = FUNC_2(VAR_5 + 1, &VAR_5, 0);
  if (*VAR_5 != '\0')
   return FUNC_0(-VAR_0);
  return FUNC_3(VAR_3, VAR_4, VAR_2);
 }


 if ((*VAR_5 == ':' || *VAR_5 == '!') && VAR_5[1] != '\0')
  return FUNC_4(VAR_3, ++VAR_5, VAR_2);

 return FUNC_0(-VAR_0);
}
