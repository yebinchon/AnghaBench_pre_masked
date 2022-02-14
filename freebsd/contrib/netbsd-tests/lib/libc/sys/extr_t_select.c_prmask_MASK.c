
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int * __bits; } ;
typedef TYPE_1__ sigset_t ;
typedef int p ;


 int FUNC_0 (int ,size_t) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 char FUNC_3 (int ) ;

__attribute__((used)) static const char *
FUNC_4(const sigset_t *VAR_0, char *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = 2;
 FUNC_2(VAR_2 >= 3 + sizeof(*VAR_0));
 VAR_1[0] = '0';
 VAR_1[1] = 'x';

 for (size_t VAR_4 = FUNC_1(VAR_0->__bits); VAR_4 > 0; VAR_4--) {
  uint32_t VAR_5 = VAR_0->__bits[VAR_4 - 1];
  for (size_t VAR_6 = sizeof(VAR_5); VAR_6 > 0; VAR_6--)
   VAR_1[VAR_3++] = FUNC_3((((VAR_5) >> ((VAR_6 - 1) * 4)) & 0xf));
 }
 VAR_1[VAR_3] = '\0';
 return VAR_1;
}
