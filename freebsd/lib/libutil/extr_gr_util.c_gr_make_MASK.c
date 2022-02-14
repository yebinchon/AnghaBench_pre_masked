
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct group {char const** gr_mem; scalar_t__ gr_gid; int gr_passwd; int gr_name; } ;


 char* FUNC_0 (size_t) ;
 int FUNC_1 (int *,int ,char const*,int ,int ,int ) ;
 int FUNC_2 (char*,char const*,int ,int ,int ) ;
 char* FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;

char *
FUNC_5(const struct group *VAR_0)
{
 const char *VAR_1 = "%s:%s:%ju:";
 const char *VAR_2;
 char *VAR_3;
 char *VAR_4;
 size_t VAR_5;
 int VAR_6;


 VAR_5 = FUNC_1(((void*)0), 0, VAR_1, VAR_0->gr_name,
     VAR_0->gr_passwd, (uintmax_t)VAR_0->gr_gid) + 1;
 if (VAR_0->gr_mem != ((void*)0)) {
  for (VAR_6 = 0; VAR_0->gr_mem[VAR_6] != ((void*)0); VAR_6++)
   VAR_5 += FUNC_4(VAR_0->gr_mem[VAR_6]) + 1;
  if (VAR_6 > 0)
   VAR_5--;
 }


 if ((VAR_3 = VAR_4 = FUNC_0(VAR_5)) == ((void*)0))
  return (((void*)0));
 VAR_4 += FUNC_2(VAR_4, VAR_1, VAR_0->gr_name, VAR_0->gr_passwd,
     (uintmax_t)VAR_0->gr_gid);
 if (VAR_0->gr_mem != ((void*)0)) {
  VAR_2 = "";
  for (VAR_6 = 0; VAR_0->gr_mem[VAR_6] != ((void*)0); VAR_6++) {
   VAR_4 = FUNC_3(VAR_4, VAR_2);
   VAR_4 = FUNC_3(VAR_4, VAR_0->gr_mem[VAR_6]);
   VAR_2 = ",";
  }
 }

 return (VAR_3);
}
