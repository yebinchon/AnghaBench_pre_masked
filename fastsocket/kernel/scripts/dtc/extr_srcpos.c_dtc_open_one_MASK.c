
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtc_file {char* name; int file; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char const*) ;
 char* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 char* FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct dtc_file *VAR_0,
                        const char *VAR_1,
                        const char *VAR_2)
{
 char *VAR_3;

 if (VAR_1) {
  VAR_3 = FUNC_6(FUNC_5(VAR_1) + FUNC_5(VAR_2) + 2);

  FUNC_3(VAR_3, VAR_1);
  FUNC_2(VAR_3, "/");
  FUNC_2(VAR_3, VAR_2);
 } else {
  VAR_3 = FUNC_4(VAR_2);
 }

 VAR_0->file = FUNC_0(VAR_3, "r");
 if (!VAR_0->file) {
  FUNC_1(VAR_3);
  return 0;
 }

 VAR_0->name = VAR_3;
 return 1;
}
