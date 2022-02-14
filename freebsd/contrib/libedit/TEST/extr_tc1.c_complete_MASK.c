
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dirent {int * d_name; } ;
struct TYPE_3__ {char* cursor; char const* buffer; } ;
typedef TYPE_1__ LineInfo ;
typedef int EditLine ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (unsigned char) ;
 int * FUNC_4 (char*) ;
 struct dirent* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,char const*,int) ;

__attribute__((used)) static unsigned char
FUNC_8(EditLine *VAR_2, int VAR_3)
{
 DIR *VAR_4 = FUNC_4(".");
 struct dirent *VAR_5;
 const char* VAR_6;
 const LineInfo *VAR_7 = FUNC_2(VAR_2);
 int VAR_8;
 int VAR_9 = VAR_0;




 for (VAR_6 = VAR_7->cursor - 1;
     !FUNC_3((unsigned char)*VAR_6) && VAR_6 > VAR_7->buffer; VAR_6--)
  continue;
 VAR_8 = VAR_7->cursor - ++VAR_6;

 for (VAR_5 = FUNC_5(VAR_4); VAR_5 != ((void*)0); VAR_5 = FUNC_5(VAR_4)) {
  if (VAR_8 > FUNC_6(VAR_5->d_name))
   continue;
  if (FUNC_7(VAR_5->d_name, VAR_6, VAR_8) == 0) {
   if (FUNC_1(VAR_2, &VAR_5->d_name[VAR_8]) == -1)
    VAR_9 = VAR_0;
   else
    VAR_9 = VAR_1;
   break;
  }
 }

 FUNC_0(VAR_4);
 return VAR_9;
}
