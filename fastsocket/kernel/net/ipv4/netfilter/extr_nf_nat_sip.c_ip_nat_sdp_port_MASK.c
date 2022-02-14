
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct sk_buff {int dummy; } ;


 unsigned int FUNC_0 (struct sk_buff*,char const**,unsigned int*) ;
 int FUNC_1 (struct sk_buff*,char const**,unsigned int*,unsigned int,unsigned int,char*,unsigned int) ;
 unsigned int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static unsigned int FUNC_3(struct sk_buff *VAR_0,
        const char **VAR_1,
        unsigned int *VAR_2,
        unsigned int VAR_3,
        unsigned int VAR_4,
        u_int16_t VAR_5)
{
 char VAR_6[sizeof("nnnnn")];
 unsigned int VAR_7;

 VAR_7 = FUNC_2(VAR_6, "%u", VAR_5);
 if (!FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_6, VAR_7))
  return 0;

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
