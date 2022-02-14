
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mod_version {int mv_version; } ;
struct mod_metadata {scalar_t__ md_type; char* md_cval; scalar_t__ md_data; } ;
typedef int linker_file_t ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (char const*,int) ;
 int FUNC_1 (char const*,int,int ) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static void
FUNC_3(linker_file_t VAR_1, struct mod_metadata **VAR_2,
    struct mod_metadata **VAR_3, int VAR_4)
{
 struct mod_metadata *VAR_5, **VAR_6;
 const char *VAR_7;
 int VAR_8;

 for (VAR_6 = VAR_2; VAR_6 < VAR_3; VAR_6++) {
  VAR_5 = *VAR_6;
  if (VAR_5->md_type != VAR_0)
   continue;
  VAR_7 = VAR_5->md_cval;
  VAR_8 = ((const struct mod_version *)VAR_5->md_data)->mv_version;
  if (FUNC_0(VAR_7, VAR_8) != ((void*)0)) {
   FUNC_2("module %s already present!\n", VAR_7);

   continue;
  }
  FUNC_1(VAR_7, VAR_8, VAR_1);
 }
}
