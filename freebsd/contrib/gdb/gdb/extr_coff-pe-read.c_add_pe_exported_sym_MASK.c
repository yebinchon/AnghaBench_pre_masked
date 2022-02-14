
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct read_pe_section_data {int ms_type; scalar_t__ vma_offset; } ;
struct objfile {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (char*,scalar_t__,int ,struct objfile*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6 (char *VAR_0,
       unsigned long VAR_1,
       const struct read_pe_section_data *VAR_2,
       const char *VAR_3, struct objfile *VAR_4)
{


  CORE_ADDR VAR_5 = VAR_1 + VAR_2->vma_offset;

  char *VAR_6 = 0;
  int VAR_7 = FUNC_2 (VAR_3);
  int VAR_8;





  VAR_6 = FUNC_5 (VAR_7 + FUNC_2 (VAR_0) + 2);

  FUNC_3 (VAR_6, VAR_3, VAR_7);
  VAR_6[VAR_7] = '!';
  FUNC_1 (VAR_6 + VAR_7 + 1, VAR_0);

  FUNC_0 (VAR_6,
         VAR_5, VAR_2->ms_type, VAR_4);

  FUNC_4 (VAR_6);


  FUNC_0 (VAR_0, VAR_5, VAR_2->ms_type, VAR_4);
}
