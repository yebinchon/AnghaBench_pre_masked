
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int,void*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4 (int VAR_3, void *VAR_4, int VAR_5, const char *VAR_6)
{
  while (VAR_5 > 0) {
    int VAR_7 = FUNC_2 (VAR_3, VAR_4, VAR_5);
    if (VAR_7 < 0)
      {
 int VAR_8 = VAR_1;




 FUNC_0 ("%s: error writing file '%s': %s\n",
  VAR_2, FUNC_1 (((void*)0), VAR_6), FUNC_3 (VAR_8));
 return;
      }

    VAR_4 = (char *) VAR_4 + VAR_7;
    VAR_5 -= VAR_7;
  }
}
