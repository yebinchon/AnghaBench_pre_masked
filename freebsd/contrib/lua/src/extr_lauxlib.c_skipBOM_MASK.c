
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* buff; int f; scalar_t__ n; } ;
typedef TYPE_1__ LoadF ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1 (LoadF *VAR_1) {
  const char *VAR_2 = "\xEF\xBB\xBF";
  int VAR_3;
  VAR_1->n = 0;
  do {
    VAR_3 = FUNC_0(VAR_1->f);
    if (VAR_3 == VAR_0 || VAR_3 != *(const unsigned char *)VAR_2++) return VAR_3;
    VAR_1->buff[VAR_1->n++] = VAR_3;
  } while (*VAR_2 != '\0');
  VAR_1->n = 0;
  return FUNC_0(VAR_1->f);
}
