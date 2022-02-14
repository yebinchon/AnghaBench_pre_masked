
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct fdt_property {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fdt_property* FUNC_0 (int ,int,char*,int *) ;
 int FUNC_1 (int ,int,char*,int **,int) ;
 int FUNC_2 (int ,int,char*,void*) ;
 int FUNC_3 (char const*,void*,int,int) ;
 int VAR_3 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(int VAR_4, char *VAR_5, void *VAR_6, char VAR_7)
{
 uint32_t VAR_8[100];
 const char *VAR_9;
 int VAR_10, VAR_11;
 const struct fdt_property *VAR_12;

 VAR_12 = FUNC_0(VAR_3, VAR_4, VAR_5, ((void*)0));

 if (VAR_12 != ((void*)0)) {
  if (VAR_7 == 1) {

   FUNC_4(VAR_2, "property already exists!");
   return (VAR_0);
  }
 } else if (VAR_7 == 0) {
  FUNC_4(VAR_2, "property does not exist!");
  return (VAR_0);
 }
 VAR_11 = 0;
 VAR_9 = VAR_6;

 switch (*VAR_9) {
 case '&':

  break;
 case '<':

  VAR_10 = FUNC_3(VAR_9, (void *)&VAR_8, 100,
      sizeof(uint32_t));

  VAR_11 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_8,
      VAR_10 * sizeof(uint32_t));
  break;
 case '[':

  VAR_10 = FUNC_3(VAR_9, (void *)&VAR_8, 100,
      sizeof(uint8_t));

  VAR_11 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_8,
      VAR_10 * sizeof(uint8_t));
  break;
 case '"':
 default:

  VAR_11 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
  break;
 }

 if (VAR_11 != 0) {
  if (VAR_11 == -VAR_1)
   FUNC_4(VAR_2,
       "Device tree blob is too small!\n");
  else
   FUNC_4(VAR_2,
       "Could not add/modify property!\n");
 }
 return (VAR_11);
}
