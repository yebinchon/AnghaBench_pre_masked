
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct section_offsets {void** offsets; } ;
struct objfile {int obfd; int num_sections; int section_offsets; } ;
struct find_sect_args {void* text_start; void* data_start; void* bss_start; } ;
typedef void* CORE_ADDR ;


 size_t FUNC_0 (struct objfile*) ;
 size_t FUNC_1 (struct objfile*) ;
 size_t FUNC_2 (struct objfile*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,struct find_sect_args*) ;
 int VAR_0 ;
 int FUNC_6 (struct section_offsets*,int ,int ) ;
 int FUNC_7 (struct objfile*,struct section_offsets*) ;
 int FUNC_8 (struct objfile*) ;
 struct objfile* FUNC_9 (char*,int,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_10 (char *VAR_1, int VAR_2, CORE_ADDR VAR_3,
  CORE_ADDR VAR_4, CORE_ADDR VAR_5)
{
  struct section_offsets *VAR_6;
  struct objfile *VAR_7;
  struct find_sect_args VAR_8;



  VAR_7 = FUNC_9 (VAR_1, VAR_2, ((void*)0), 0, 0);




  FUNC_8 (VAR_7);

  VAR_6 =
    (struct section_offsets *)
    FUNC_4 (FUNC_3 (VAR_7->num_sections));
  FUNC_6 (VAR_6, VAR_7->section_offsets,
          FUNC_3 (VAR_7->num_sections));

  VAR_8.text_start = 0;
  VAR_8.data_start = 0;
  VAR_8.bss_start = 0;
  FUNC_5 (VAR_7->obfd, VAR_0, &VAR_8);


  VAR_6->offsets[FUNC_2 (VAR_7)] = VAR_3 - VAR_8.text_start;
  VAR_6->offsets[FUNC_1 (VAR_7)] = VAR_4 - VAR_8.data_start;
  VAR_6->offsets[FUNC_0 (VAR_7)] = VAR_5 - VAR_8.bss_start;
  FUNC_7 (VAR_7, VAR_6);
}
