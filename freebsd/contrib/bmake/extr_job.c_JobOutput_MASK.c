
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int noPLen; scalar_t__ noPrint; } ;
struct TYPE_4__ {scalar_t__ node; } ;
typedef TYPE_1__ Job ;


 int FUNC_0 (int ,scalar_t__) ;
 char* FUNC_1 (char*,scalar_t__) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static char *
FUNC_4(Job *VAR_4, char *VAR_5, char *VAR_6, int VAR_7)
{
    char *VAR_8;

    if (VAR_1->noPrint) {
 VAR_8 = FUNC_1(VAR_5, VAR_1->noPrint);
 while (VAR_8 != ((void*)0)) {
     if (VAR_5 != VAR_8) {
  *VAR_8 = '\0';
  if (!VAR_0 && VAR_7 && VAR_4->node != VAR_2) {
      FUNC_0(VAR_3, VAR_4->node);
      VAR_2 = VAR_4->node;
  }






  (void)FUNC_3(VAR_3, "%s", VAR_5);
  (void)FUNC_2(VAR_3);
     }
     VAR_5 = VAR_8 + VAR_1->noPLen;
     if (VAR_5 != VAR_6) {





  VAR_5++;
  while (*VAR_5 == ' ' || *VAR_5 == '\t' || *VAR_5 == '\n') {
      VAR_5++;
  }
  VAR_8 = FUNC_1(VAR_5, VAR_1->noPrint);
     } else {
  return VAR_5;
     }
 }
    }
    return VAR_5;
}
