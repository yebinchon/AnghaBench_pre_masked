
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct image_params {char* interpreter_name; TYPE_1__* args; int proc; scalar_t__ image_header; } ;
struct TYPE_2__ {char* fname_buf; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 short const VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct image_params*) ;
 int FUNC_2 (int ,char*,int ,char**,int ,int ) ;

int
FUNC_3(struct image_params *VAR_3)
{
 const char *VAR_4 = (const char *)VAR_3->image_header;
 char *VAR_5;
 int VAR_6 = -1;






 if (((const short *)VAR_4)[0] == VAR_1) {





  if ((VAR_6 = FUNC_1(VAR_3)) == 0) {
   FUNC_2(FUNC_0(VAR_3->proc),
       VAR_3->interpreter_name, VAR_2, &VAR_5, 0,
       VAR_0);
   if (VAR_5 != ((void*)0))
    VAR_3->args->fname_buf =
        VAR_3->interpreter_name = VAR_5;
  }
 }
 return (VAR_6);
}
