
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mb_cur_max; } ;
typedef TYPE_1__ _GBK2KEncodingInfo ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (void*,int ,int) ;

__attribute__((used)) static int

FUNC_3(_GBK2KEncodingInfo * __restrict VAR_0,
    const void * __restrict VAR_1, size_t VAR_2)
{
 const char *VAR_3;

 VAR_3 = VAR_1;
 FUNC_2((void *)VAR_0, 0, sizeof(*VAR_0));
 VAR_0->mb_cur_max = 4;
 while (VAR_2 > 0) {
  switch (FUNC_1(*VAR_3)) {
  case '2':
   FUNC_0("2byte", VAR_0->mb_cur_max = 2);
   break;
  }
  VAR_3++;
  VAR_2--;
 }

 return (0);
}
