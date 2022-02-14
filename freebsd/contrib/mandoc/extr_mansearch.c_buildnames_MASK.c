
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dbm_page {int * arch; int * sect; int * name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,size_t*,int *,char*) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (size_t) ;

__attribute__((used)) static char *
FUNC_4(const struct dbm_page *VAR_0)
{
 char *VAR_1;
 size_t VAR_2, VAR_3;

 VAR_3 = FUNC_2(VAR_0->name, 2) + 1 + FUNC_2(VAR_0->sect, 2) +
     (VAR_0->arch == ((void*)0) ? 0 : 1 + FUNC_2(VAR_0->arch, 2)) + 2;
 VAR_1 = FUNC_3(VAR_3);
 VAR_2 = 0;
 FUNC_1(VAR_1, &VAR_2, VAR_0->name, ", ");
 VAR_1[VAR_2++] = '(';
 FUNC_1(VAR_1, &VAR_2, VAR_0->sect, ", ");
 if (VAR_0->arch != ((void*)0)) {
  VAR_1[VAR_2++] = '/';
  FUNC_1(VAR_1, &VAR_2, VAR_0->arch, ", ");
 }
 VAR_1[VAR_2++] = ')';
 VAR_1[VAR_2++] = '\0';
 FUNC_0(VAR_2 == VAR_3);
 return VAR_1;
}
