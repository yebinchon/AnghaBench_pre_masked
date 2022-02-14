
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (char**,size_t*,int *,size_t) ;
 scalar_t__ FUNC_1 (char**,size_t*,char*,char const*) ;

__attribute__((used)) static int FUNC_2(const char* VAR_0, uint8_t** VAR_1, size_t* VAR_2,
 char** VAR_3, size_t* VAR_4)
{
 int VAR_5 = 0;
 VAR_5 += FUNC_1(VAR_3, VAR_4, "%s", VAR_0);
 VAR_5 += FUNC_0(VAR_3, VAR_4, *VAR_1, *VAR_2);
 *VAR_1 += *VAR_2;
 *VAR_2 = 0;
 return VAR_5;
}
