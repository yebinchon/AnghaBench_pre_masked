
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; char* ln_name; scalar_t__ type; int ln_nlen; int nlen; } ;
typedef TYPE_1__ ARCHD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int *,int) ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int *,int) ;
 int FUNC_5 (TYPE_1__*) ;

int
FUNC_6(ARCHD *VAR_6)
{
 int VAR_7 = 0;





 if (VAR_5 && VAR_6->name[0] == '/') {
  if (VAR_6->name[1] == '\0') {
   VAR_6->name[0] = '.';
  } else {
   (void)FUNC_0(VAR_6->name, &VAR_6->name[1],
       FUNC_3(VAR_6->name));
   VAR_6->nlen--;
  }
  if (VAR_5 < 2) {
   VAR_5 = 2;
   FUNC_1(0, "Removing leading / from absolute path names in the archive");
  }
 }
 if (VAR_5 && VAR_6->ln_name[0] == '/' &&
     (VAR_6->type == VAR_0 || VAR_6->type == VAR_1)) {
  if (VAR_6->ln_name[1] == '\0') {
   VAR_6->ln_name[0] = '.';
  } else {
   (void)FUNC_0(VAR_6->ln_name, &VAR_6->ln_name[1],
       FUNC_3(VAR_6->ln_name));
   VAR_6->ln_nlen--;
  }
  if (VAR_5 < 2) {
   VAR_5 = 2;
   FUNC_1(0, "Removing leading / from absolute path names in the archive");
  }
 }
 if (VAR_4 != ((void*)0)) {




  if ((VAR_7 = FUNC_2(VAR_6->name, &(VAR_6->nlen), 1)) != 0)
   return(VAR_7);

  if (((VAR_6->type == VAR_2) || (VAR_6->type == VAR_0) ||
      (VAR_6->type == VAR_1)) &&
      ((VAR_7 = FUNC_2(VAR_6->ln_name, &(VAR_6->ln_nlen), 0)) != 0))
   return(VAR_7);
 }

 if (VAR_3) {



  if ((VAR_7 = FUNC_5(VAR_6)) != 0)
   return(VAR_7);
  if ((VAR_6->type == VAR_2) || (VAR_6->type == VAR_0) ||
      (VAR_6->type == VAR_1))
   FUNC_4(VAR_6->ln_name, &(VAR_6->ln_nlen), sizeof(VAR_6->ln_name));
 }
 return(VAR_7);
}
