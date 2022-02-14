
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 size_t FUNC_2 (char*,int,size_t,int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 long FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (size_t) ;

char * FUNC_7(const char *VAR_2, size_t *VAR_3)
{
 FILE *VAR_4;
 char *VAR_5;
 long VAR_6;

 VAR_4 = FUNC_1(VAR_2, "rb");
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 if (FUNC_3(VAR_4, 0, VAR_0) < 0 || (VAR_6 = FUNC_4(VAR_4)) < 0) {
  FUNC_0(VAR_4);
  return ((void*)0);
 }
 *VAR_3 = VAR_6;
 if (FUNC_3(VAR_4, 0, VAR_1) < 0) {
  FUNC_0(VAR_4);
  return ((void*)0);
 }

 VAR_5 = FUNC_6(*VAR_3);
 if (VAR_5 == ((void*)0)) {
  FUNC_0(VAR_4);
  return ((void*)0);
 }

 if (FUNC_2(VAR_5, 1, *VAR_3, VAR_4) != *VAR_3) {
  FUNC_0(VAR_4);
  FUNC_5(VAR_5);
  return ((void*)0);
 }

 FUNC_0(VAR_4);

 return VAR_5;
}
