
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_6__ {size_t _cnt; int _file; void* _ptr; int _flag; } ;
typedef TYPE_1__ FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,char*) ;
 int FUNC_2 (char,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char const*,int ) ;
 int FUNC_4 (char*,char const*,int ) ;

int
FUNC_5(char *VAR_2, size_t VAR_3, const char *VAR_4, va_list VAR_5)
{
 static FILE *VAR_6;
 int VAR_7 = 0;

 if (!VAR_6)
  VAR_6 = FUNC_1("/dev/null", "w");
 if (VAR_6) {
  VAR_7 = FUNC_3(VAR_6, VAR_4, VAR_5);
  if (VAR_7 < VAR_3)
   (void)FUNC_4(VAR_2, VAR_4, VAR_5);
 }
 return VAR_7;

}
