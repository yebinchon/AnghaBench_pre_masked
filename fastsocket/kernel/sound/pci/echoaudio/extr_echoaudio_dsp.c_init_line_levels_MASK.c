
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct echoaudio {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct echoaudio*) ;
 int FUNC_2 (struct echoaudio*) ;
 int FUNC_3 (struct echoaudio*) ;
 int FUNC_4 (struct echoaudio*,int,int ) ;
 int FUNC_5 (struct echoaudio*,int,int,int ) ;
 int FUNC_6 (struct echoaudio*,int,int ) ;
 int FUNC_7 (struct echoaudio*,int,int,int ) ;
 int FUNC_8 (struct echoaudio*) ;
 int FUNC_9 (struct echoaudio*) ;
 int FUNC_10 (struct echoaudio*) ;

__attribute__((used)) static int FUNC_11(struct echoaudio *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 FUNC_0(("init_line_levels\n"));


 for (VAR_3 = 0; VAR_3 < FUNC_2(VAR_1); VAR_3++)
  if ((VAR_2 = FUNC_6(VAR_1, VAR_3, VAR_0)))
   return VAR_2;
 if ((VAR_2 = FUNC_9(VAR_1)))
  return VAR_2;
 return 0;
}
