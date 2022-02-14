
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_stream {int stream; } ;
struct ui_out {int dummy; } ;
struct disassemble_info {int dummy; } ;
struct cleanup {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,struct disassemble_info*) ;
 int FUNC_1 (scalar_t__,int ,char**,int*,char**,int*,int*) ;
 int FUNC_2 (struct cleanup*) ;
 struct cleanup* FUNC_3 (struct ui_out*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ui_out*,char*,scalar_t__) ;
 int FUNC_6 (struct ui_out*,char*,int) ;
 int FUNC_7 (struct ui_out*,char*,struct ui_stream*) ;
 int FUNC_8 (struct ui_out*,char*,char*) ;
 int FUNC_9 (struct ui_out*,char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int
FUNC_11 (struct ui_out *VAR_1, struct disassemble_info * VAR_2,
     CORE_ADDR VAR_3, CORE_ADDR VAR_4,
     int VAR_5, struct ui_stream *VAR_6)
{
  int VAR_7 = 0;
  CORE_ADDR VAR_8;


  int VAR_9;
  int VAR_10;
  int VAR_11;
  struct cleanup *VAR_12;

  for (VAR_8 = VAR_3; VAR_8 < VAR_4;)
    {
      char *VAR_13 = ((void*)0);
      char *VAR_14 = ((void*)0);

      VAR_0;
      if (VAR_5 >= 0)
 {
   if (VAR_7 >= VAR_5)
     break;
   else
     VAR_7++;
 }
      VAR_12 = FUNC_3 (VAR_1, ((void*)0));
      FUNC_5 (VAR_1, "address", VAR_8);

      if (!FUNC_1 (VAR_8, 0, &VAR_14, &VAR_10, &VAR_13,
       &VAR_11, &VAR_9))
 {


   FUNC_9 (VAR_1, " <");
   FUNC_8 (VAR_1, "func-name", VAR_14);
   FUNC_9 (VAR_1, "+");
   FUNC_6 (VAR_1, "offset", VAR_10);
   FUNC_9 (VAR_1, ">:\t");
 }
      else
 FUNC_9 (VAR_1, ":\t");

      if (VAR_13 != ((void*)0))
 FUNC_10 (VAR_13);
      if (VAR_14 != ((void*)0))
 FUNC_10 (VAR_14);

      FUNC_4 (VAR_6->stream);
      VAR_8 += FUNC_0 (VAR_8, VAR_2);
      FUNC_7 (VAR_1, "inst", VAR_6);
      FUNC_4 (VAR_6->stream);
      FUNC_2 (VAR_12);
      FUNC_9 (VAR_1, "\n");
    }
  return VAR_7;
}
