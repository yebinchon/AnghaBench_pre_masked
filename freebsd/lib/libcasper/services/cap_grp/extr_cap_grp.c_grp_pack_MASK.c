
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct group {char* gr_name; char* gr_passwd; char** gr_mem; scalar_t__ gr_gid; } ;
typedef int ssize_t ;
typedef int nvlname ;
typedef int nvlist_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int const*,char*) ;
 int FUNC_2 (int const*,char*,scalar_t__) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (char*,int,char*,unsigned int) ;

__attribute__((used)) static bool
FUNC_6(const nvlist_t *VAR_0, const struct group *VAR_1, nvlist_t *VAR_2)
{
 char VAR_3[64];
 int VAR_4;

 if (VAR_1 == ((void*)0))
  return (1);




 if (!FUNC_2(VAR_0, VAR_1->gr_name, VAR_1->gr_gid))
  return (0);

 if (FUNC_1(VAR_0, "gr_name"))
  FUNC_4(VAR_2, "gr_name", VAR_1->gr_name);
 else
  FUNC_4(VAR_2, "gr_name", "");
 if (FUNC_1(VAR_0, "gr_passwd"))
  FUNC_4(VAR_2, "gr_passwd", VAR_1->gr_passwd);
 else
  FUNC_4(VAR_2, "gr_passwd", "");
 if (FUNC_1(VAR_0, "gr_gid"))
  FUNC_3(VAR_2, "gr_gid", (uint64_t)VAR_1->gr_gid);
 else
  FUNC_3(VAR_2, "gr_gid", (uint64_t)-1);
 if (FUNC_1(VAR_0, "gr_mem") && VAR_1->gr_mem[0] != ((void*)0)) {
  unsigned int VAR_5;

  for (VAR_5 = 0; VAR_1->gr_mem[VAR_5] != ((void*)0); VAR_5++) {
   VAR_4 = FUNC_5(VAR_3, sizeof(VAR_3), "gr_mem[%u]",
       VAR_5);
   FUNC_0(VAR_4 > 0 && VAR_4 < (ssize_t)sizeof(VAR_3));
   FUNC_4(VAR_2, VAR_3, VAR_1->gr_mem[VAR_5]);
  }
  FUNC_3(VAR_2, "gr_nmem", (uint64_t)VAR_5);
 }

 return (1);
}
