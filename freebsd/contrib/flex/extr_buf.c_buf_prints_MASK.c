
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Buf {int dummy; } ;


 int FUNC_0 (char*) ;
 struct Buf* FUNC_1 (struct Buf*,char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,size_t,char const*,char const*) ;
 int FUNC_6 (char const*) ;

struct Buf *FUNC_7 (struct Buf *VAR_0, const char *VAR_1, const char *VAR_2)
{
 char *VAR_3;
        size_t VAR_4;

 VAR_3 = FUNC_2 (VAR_4 = FUNC_6 (VAR_1) + FUNC_6 (VAR_2) + 1);
 if (!VAR_3)
     FUNC_4 (FUNC_0("Allocation of buffer to print string failed"));
 FUNC_5 (VAR_3, VAR_4, VAR_1, VAR_2);
 VAR_0 = FUNC_1 (VAR_0, VAR_3);
 FUNC_3 (VAR_3);
 return VAR_0;
}
