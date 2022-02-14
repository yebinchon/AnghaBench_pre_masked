
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const wchar_t ;
struct dirent {int * d_name; } ;
typedef int dir ;
struct TYPE_3__ {int const* cursor; int const* buffer; } ;
typedef TYPE_1__ LineInfoW ;
typedef int EditLine ;
typedef int DIR ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int const*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int const) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (int const*,int *,int) ;
 int * FUNC_8 (char*) ;
 struct dirent* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,char*,int) ;
 int FUNC_12 (char*,int const) ;

__attribute__((used)) static unsigned char
FUNC_13(EditLine *VAR_3, int VAR_4)
{
 DIR *VAR_5 = FUNC_8(".");
 struct dirent *VAR_6;
 const wchar_t *VAR_7;
 char *VAR_8, *VAR_9;
 const LineInfoW *VAR_10 = FUNC_2(VAR_3);
 int VAR_11, VAR_12, VAR_13;
 unsigned char VAR_14 = 0;
 wchar_t VAR_15[1024];


 for (VAR_7 = VAR_10->cursor -1; !FUNC_5(*VAR_7) && VAR_7 > VAR_10->buffer; --VAR_7)
  continue;
 VAR_11 = VAR_10->cursor - ++VAR_7;


 FUNC_12(((void*)0), 0);
 VAR_12 = VAR_2 * VAR_11 + 1;
 VAR_8 = VAR_9 = FUNC_6(VAR_12);
 if (VAR_8 == ((void*)0))
  FUNC_3(1, "malloc");
 for (VAR_13 = 0; VAR_13 < VAR_11; ++VAR_13) {

  VAR_9 += FUNC_12(VAR_9, VAR_7[VAR_13]);
 }
 *VAR_9 = 0;
 VAR_12 = VAR_9 - VAR_8;


 for (VAR_6 = FUNC_9(VAR_5); VAR_6 != ((void*)0); VAR_6 = FUNC_9(VAR_5)) {
  if (VAR_12 > FUNC_10(VAR_6->d_name))
   continue;
  if (FUNC_11(VAR_6->d_name, VAR_8, VAR_12) == 0) {
   FUNC_7(VAR_15, &VAR_6->d_name[VAR_12],
       sizeof(VAR_15) / sizeof(*VAR_15));
   if (FUNC_1(VAR_3, VAR_15) == -1)
    VAR_14 = VAR_0;
   else
    VAR_14 = VAR_1;
   break;
  }
 }

 FUNC_0(VAR_5);
 FUNC_4(VAR_8);
 return VAR_14;
}
