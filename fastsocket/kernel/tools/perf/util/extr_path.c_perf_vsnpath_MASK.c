
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 () ;
 int FUNC_2 (char const) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (char*,int ,size_t) ;
 size_t FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char*,size_t,char const*,int ) ;

__attribute__((used)) static char *FUNC_7(char *VAR_1, size_t VAR_2, const char *VAR_3, va_list VAR_4)
{
 const char *VAR_5 = FUNC_1();
 size_t VAR_6;

 VAR_6 = FUNC_5(VAR_5);
 if (VAR_2 < VAR_6 + 1)
  goto bad;
 FUNC_3(VAR_1, VAR_5, VAR_6);
 if (VAR_6 && !FUNC_2(VAR_5[VAR_6-1]))
  VAR_1[VAR_6++] = '/';
 VAR_6 += FUNC_6(VAR_1 + VAR_6, VAR_2 - VAR_6, VAR_3, VAR_4);
 if (VAR_6 >= VAR_2)
  goto bad;
 return FUNC_0(VAR_1);
bad:
 FUNC_4(VAR_1, VAR_0, VAR_2);
 return VAR_1;
}
