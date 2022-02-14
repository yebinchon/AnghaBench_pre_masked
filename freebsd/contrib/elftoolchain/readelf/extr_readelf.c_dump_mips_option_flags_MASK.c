
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mips_option {char* desc; int flag; } ;


 int FUNC_0 (char*,char const*,char*) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_0, struct mips_option *VAR_1, uint64_t VAR_2)
{
 int VAR_3;

 VAR_3 = 1;
 for (; VAR_1->desc != ((void*)0); VAR_1++) {
  if (VAR_2 & VAR_1->flag) {
   FUNC_0(" %-10.10s %s\n", VAR_3 ? VAR_0 : "",
       VAR_1->desc);
   VAR_3 = 0;
  }
 }
}
