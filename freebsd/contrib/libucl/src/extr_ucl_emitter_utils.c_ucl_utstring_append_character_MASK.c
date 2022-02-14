
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* d; size_t i; } ;
typedef TYPE_1__ UT_string ;


 int FUNC_0 (char*,unsigned char,size_t) ;
 int FUNC_1 (TYPE_1__*,unsigned char) ;
 int FUNC_2 (TYPE_1__*,size_t) ;

__attribute__((used)) static int
FUNC_3 (unsigned char VAR_0, size_t VAR_1, void *VAR_2)
{
 UT_string *VAR_3 = VAR_2;

 if (VAR_1 == 1) {
  FUNC_1 (VAR_3, VAR_0);
 }
 else {
  FUNC_2 (VAR_3, VAR_1 + 1);
  FUNC_0 (&VAR_3->d[VAR_3->i], VAR_0, VAR_1);
  VAR_3->i += VAR_1;
  VAR_3->d[VAR_3->i] = '\0';
 }

 return 0;
}
