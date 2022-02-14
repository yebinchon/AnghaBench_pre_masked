
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct std_metadata {int md_version; int md_magic; } ;


 int FUNC_0 (unsigned char const*,int ,int) ;
 int FUNC_1 (unsigned char const*) ;

__attribute__((used)) static void
FUNC_2(const unsigned char *VAR_0, struct std_metadata *VAR_1)
{

        FUNC_0(VAR_0, VAR_1->md_magic, sizeof(VAR_1->md_magic));
        VAR_1->md_version = FUNC_1(VAR_0 + 16);
}
