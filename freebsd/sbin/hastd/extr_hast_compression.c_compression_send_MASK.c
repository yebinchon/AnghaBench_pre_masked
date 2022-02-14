
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv {int dummy; } ;
struct hast_resource {int hr_compression; } ;





 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (void*) ;
 unsigned char* FUNC_3 (void*,size_t*) ;
 unsigned char* FUNC_4 (void*,size_t*) ;
 int FUNC_5 (struct nv*,int ,char*) ;
 scalar_t__ FUNC_6 (struct nv*) ;

int
FUNC_7(const struct hast_resource *VAR_1, struct nv *VAR_2, void **VAR_3,
    size_t *VAR_4, bool *VAR_5)
{
 unsigned char *VAR_6;
 int VAR_7;
 size_t VAR_8;

 VAR_8 = *VAR_4;
 VAR_7 = VAR_1->hr_compression;

 switch (VAR_7) {
 case 128:
  return (0);
 case 130:
  VAR_6 = FUNC_3(*VAR_3, &VAR_8);
  break;
 case 129:

  VAR_6 = FUNC_3(*VAR_3, &VAR_8);
  if (VAR_6 != ((void*)0))
   VAR_7 = 130;
  else
   VAR_6 = FUNC_4(*VAR_3, &VAR_8);
  break;
 default:
  FUNC_0("Invalid compression: %d.", VAR_1->hr_compression);
 }

 if (VAR_6 == ((void*)0)) {

  return (0);
 }
 FUNC_5(VAR_2, FUNC_1(VAR_7), "compression");
 if (FUNC_6(VAR_2) != 0) {
  FUNC_2(VAR_6);
  VAR_0 = FUNC_6(VAR_2);
  return (-1);
 }
 if (*VAR_5)
  FUNC_2(*VAR_3);
 *VAR_5 = 1;
 *VAR_3 = VAR_6;
 *VAR_4 = VAR_8;

 return (0);
}
