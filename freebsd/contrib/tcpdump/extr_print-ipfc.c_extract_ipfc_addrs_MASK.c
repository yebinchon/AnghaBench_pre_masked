
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipfc_header {int * ipfc_shost; int * ipfc_dhost; } ;


 int FUNC_0 (char*,char const*,int) ;

__attribute__((used)) static inline void
FUNC_1(const struct ipfc_header *VAR_0, char *VAR_1,
    char *VAR_2)
{




 FUNC_0(VAR_2, (const char *)&VAR_0->ipfc_dhost[2], 6);
 FUNC_0(VAR_1, (const char *)&VAR_0->ipfc_shost[2], 6);
}
