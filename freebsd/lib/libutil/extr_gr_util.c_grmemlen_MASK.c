
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {char const* gr_name; char const* gr_passwd; char const** gr_mem; } ;


 scalar_t__ FUNC_0 (char const*) ;

__attribute__((used)) static size_t
FUNC_1(const struct group *VAR_0, const char *VAR_1, int *VAR_2)
{
 size_t VAR_3;
 int VAR_4;

 if (VAR_0 == ((void*)0))
  return (0);

 VAR_3 = sizeof(*VAR_0);
 if (VAR_0->gr_name != ((void*)0))
  VAR_3 += FUNC_0(VAR_0->gr_name) + 1;
 if (VAR_0->gr_passwd != ((void*)0))
  VAR_3 += FUNC_0(VAR_0->gr_passwd) + 1;
 VAR_4 = 0;
 if (VAR_0->gr_mem != ((void*)0)) {
  for (; VAR_0->gr_mem[VAR_4] != ((void*)0); VAR_4++) {
   VAR_3 += FUNC_0(VAR_0->gr_mem[VAR_4]) + 1;
   VAR_3 += sizeof(*VAR_0->gr_mem);
  }
 }
 if (VAR_1 != ((void*)0)) {
  VAR_4++;
  VAR_3 += FUNC_0(VAR_1) + 1;
  VAR_3 += sizeof(*VAR_0->gr_mem);
 }

 if (VAR_4 != 0)
  VAR_3 += sizeof(*VAR_0->gr_mem);
 *VAR_2 = VAR_4;
 return(VAR_3);
}
