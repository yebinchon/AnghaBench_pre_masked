
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct am_ops {char* fs_type; } ;


 scalar_t__ FUNC_0 (char*) ;
 struct am_ops** VAR_0 ;
 int FUNC_1 (char*,char*,size_t) ;

void
FUNC_2(char *VAR_1, size_t VAR_2)
{
  struct am_ops **VAR_3;
  int VAR_4 = 0;

  VAR_1[0] = '\0';
  for (VAR_3 = VAR_0; *VAR_3; VAR_3++) {
    FUNC_1(VAR_1, (*VAR_3)->fs_type, VAR_2);
    if (VAR_3[1])
      FUNC_1(VAR_1, ", ", VAR_2);
    VAR_4 += FUNC_0((*VAR_3)->fs_type) + 2;
    if (VAR_4 > 62) {
      VAR_4 = 0;
      FUNC_1(VAR_1, "\n      ", VAR_2);
    }
  }
}
