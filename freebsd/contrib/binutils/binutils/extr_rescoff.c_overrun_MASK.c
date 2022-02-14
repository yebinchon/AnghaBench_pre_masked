
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coff_file_info {int filename; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,char const*) ;

__attribute__((used)) static void
FUNC_2 (const struct coff_file_info *VAR_0, const char *VAR_1)
{
  FUNC_1 (FUNC_0("%s: %s: address out of bounds"), VAR_0->filename, VAR_1);
}
