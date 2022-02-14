
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameidata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nameidata*) ;
 struct nameidata* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int ,struct nameidata*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(char *VAR_3, struct nameidata **VAR_4, struct nameidata **VAR_5)
{
 struct nameidata *VAR_6, *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
 if (FUNC_3(!VAR_6))
  return -VAR_0;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);
 if (FUNC_3(!VAR_7)) {
  FUNC_0(VAR_6);
  return -VAR_0;
 }

 VAR_8 = FUNC_2(VAR_3, VAR_2, VAR_6);
 if (VAR_8) {
  FUNC_0(VAR_6);
  FUNC_0(VAR_7);
  return VAR_8;
 }

 VAR_8 = FUNC_2(VAR_3, 0, VAR_7);
 if (VAR_8) {
  FUNC_0(VAR_7);
  VAR_7 = ((void*)0);
 }

 *VAR_4 = VAR_6;
 *VAR_5 = VAR_7;

 return 0;
}
