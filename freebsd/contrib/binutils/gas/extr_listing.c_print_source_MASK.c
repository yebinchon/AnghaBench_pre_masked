
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ hll_line; } ;
typedef TYPE_1__ list_info_type ;
struct TYPE_8__ {scalar_t__ linenum; char* filename; int at_end; } ;
typedef TYPE_2__ file_info_type ;


 char* FUNC_0 (TYPE_2__*,char*,unsigned int) ;
 int FUNC_1 (int ,char*,scalar_t__,char*,char*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3 (file_info_type *VAR_2, list_info_type *VAR_3,
       char *VAR_4, unsigned int VAR_5)
{
  if (!VAR_2->at_end)
    {
      while (VAR_2->linenum < VAR_3->hll_line
      && !VAR_2->at_end)
 {
   char *VAR_6 = FUNC_0 (VAR_2, VAR_4, VAR_5);

   FUNC_1 (VAR_0, "%4ld:%-13s **** %s\n", VAR_2->linenum,
     VAR_2->filename, VAR_6);
   VAR_1++;
   FUNC_2 (VAR_3);
 }
    }
}
