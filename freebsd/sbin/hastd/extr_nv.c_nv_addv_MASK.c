
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct nv {int dummy; } ;
typedef int name ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nv*,unsigned char const*,size_t,int,char*) ;
 size_t FUNC_2 (char*,int,char const*,int ) ;

__attribute__((used)) static void
FUNC_3(struct nv *VAR_0, const unsigned char *VAR_1, size_t VAR_2, int VAR_3,
    const char *VAR_4, va_list VAR_5)
{
 char VAR_6[255];
 size_t VAR_7;

 VAR_7 = FUNC_2(VAR_6, sizeof(VAR_6), VAR_4, VAR_5);
 FUNC_0(VAR_7 > 0 && VAR_7 < sizeof(VAR_6));

 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_6);
}
