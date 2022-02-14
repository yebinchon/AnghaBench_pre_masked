
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* jmp_buf ;


 void* FUNC_0 (void*) ;
 unsigned char* FUNC_1 (unsigned char const*,size_t,unsigned char const*,size_t) ;
 int FUNC_2 (void*) ;

int
FUNC_3(const unsigned char *VAR_0, size_t VAR_1, const unsigned char *VAR_2, size_t VAR_3, const unsigned char **VAR_4)
{
 void *VAR_5;
 jmp_buf VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_6);
 VAR_7 = FUNC_2(VAR_6);
 if (VAR_7 == 0)
  *VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);

 (void)FUNC_0(VAR_5);
 return ((VAR_7 == 0) ? 1 : 0);
}
