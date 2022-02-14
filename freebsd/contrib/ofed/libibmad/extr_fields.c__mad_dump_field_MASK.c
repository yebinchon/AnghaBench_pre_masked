
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; } ;
typedef TYPE_1__ ib_field_t ;


 int FUNC_0 (TYPE_1__ const*,char*,int,void*) ;
 int FUNC_1 (char*,char,int) ;
 int FUNC_2 (char*,int,char*,char const*,char*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static char *FUNC_4(const ib_field_t * VAR_0, const char *VAR_1, char *VAR_2,
        int VAR_3, void *VAR_4)
{
 char VAR_5[128];
 int VAR_6, VAR_7;

 if (VAR_3 <= 32)
  return ((void*)0);

 if (!VAR_1)
  VAR_1 = VAR_0->name;

 VAR_6 = FUNC_3(VAR_1);
 if (VAR_6 < 32) {
  FUNC_1(VAR_5, '.', 32 - VAR_6);
  VAR_5[32 - VAR_6] = 0;
 }

 VAR_7 = FUNC_2(VAR_2, VAR_3, "%s:%s", VAR_1, VAR_5);
 FUNC_0(VAR_0, VAR_2 + VAR_7, VAR_3 - VAR_7, VAR_4);
 VAR_2[VAR_3 - 1] = 0;

 return VAR_2;
}
