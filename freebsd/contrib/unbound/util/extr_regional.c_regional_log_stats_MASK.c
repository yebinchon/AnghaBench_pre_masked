
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regional {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regional*) ;
 scalar_t__ FUNC_1 (struct regional*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,unsigned int,unsigned int) ;

void
FUNC_4(struct regional *VAR_3)
{

 FUNC_2(VAR_0 >= sizeof(char*));
 FUNC_2(VAR_1 > VAR_0);
 FUNC_2(VAR_1-VAR_0 > VAR_2);
 FUNC_2(VAR_1 >= sizeof(struct regional));

 FUNC_3("regional %u chunks, %u large",
  (unsigned)FUNC_0(VAR_3), (unsigned)FUNC_1(VAR_3));
}
