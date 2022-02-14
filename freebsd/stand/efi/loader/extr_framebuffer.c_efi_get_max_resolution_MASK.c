
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct named_resolution {int width; int height; } ;


 scalar_t__ FUNC_0 (struct named_resolution*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (struct named_resolution*) ;
 struct named_resolution* VAR_0 ;
 char* FUNC_4 (char*,char) ;
 char* FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,int *,int ) ;

__attribute__((used)) static void
FUNC_7(int *VAR_1, int *VAR_2)
{
 struct named_resolution *VAR_3;
 char *VAR_4;
 char *VAR_5, *VAR_6;
 int VAR_7;

 *VAR_1 = *VAR_2 = 0;
 VAR_4 = FUNC_2("efi_max_resolution");

 if (VAR_4 == ((void*)0))
  return;

 for (VAR_7 = 0; VAR_7 < FUNC_3(VAR_0); ++VAR_7) {
  VAR_3 = &VAR_0[VAR_7];
  if (FUNC_0(VAR_3, VAR_4)) {
   *VAR_1 = VAR_3->width;
   *VAR_2 = VAR_3->height;
   return;
  }
 }

 VAR_4 = FUNC_5(VAR_4);
 if (VAR_4 == ((void*)0))
  return;
 VAR_5 = FUNC_4(VAR_4, 'x');
 if (VAR_5 == ((void*)0)) {
  FUNC_1(VAR_4);
  return;
 }
 VAR_6 = VAR_4;
 *VAR_5++ = 0;

 *VAR_1 = (int)FUNC_6(VAR_6, ((void*)0), 0);
 *VAR_2 = (int)FUNC_6(VAR_5, ((void*)0), 0);
 FUNC_1(VAR_4);
}
