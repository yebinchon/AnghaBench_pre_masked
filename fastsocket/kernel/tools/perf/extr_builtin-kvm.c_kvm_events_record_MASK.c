
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_kvm_stat {char* file_name; } ;


 unsigned int FUNC_0 (char**) ;
 int VAR_0 ;
 char* FUNC_1 (char*) ;
 char** FUNC_2 (unsigned int,int) ;
 int FUNC_3 (unsigned int,char const**,int *) ;
 char** VAR_1 ;

__attribute__((used)) static int
FUNC_4(struct perf_kvm_stat *VAR_2, int VAR_3, const char **VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7;
 const char **VAR_8;

 VAR_5 = FUNC_0(VAR_1) + VAR_3 + 2;
 VAR_8 = FUNC_2(VAR_5 + 1, sizeof(char *));

 if (VAR_8 == ((void*)0))
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++)
  VAR_8[VAR_6] = FUNC_1(VAR_1[VAR_6]);

 VAR_8[VAR_6++] = FUNC_1("-o");
 VAR_8[VAR_6++] = FUNC_1(VAR_2->file_name);

 for (VAR_7 = 1; VAR_7 < (unsigned int)VAR_3; VAR_7++, VAR_6++)
  VAR_8[VAR_6] = VAR_4[VAR_7];

 return FUNC_3(VAR_6, VAR_8, ((void*)0));
}
