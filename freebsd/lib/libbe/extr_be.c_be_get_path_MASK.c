
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct libbe_deep_clone {char* bename; TYPE_1__* lbh; } ;
struct TYPE_2__ {char* root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*,char*,char*) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,char*,int) ;
 scalar_t__ FUNC_3 (char*) ;
 char* FUNC_4 (char const*,char*) ;

__attribute__((used)) static int
FUNC_5(struct libbe_deep_clone *VAR_2, const char *VAR_3, char *VAR_4, int VAR_5)
{
 char *VAR_6;
 char *VAR_7;


 VAR_6 = FUNC_4(VAR_3, VAR_2->lbh->root);


 if (VAR_6 == ((void*)0))
  return (VAR_0);


 FUNC_0(VAR_4, VAR_5, "%s/%s", VAR_2->lbh->root, VAR_2->bename);


 VAR_6 += FUNC_3(VAR_2->lbh->root) + 1;


 if ((VAR_7 = FUNC_1(VAR_6, '/')) != ((void*)0))
  FUNC_2(VAR_4, VAR_7, VAR_5);

 return (VAR_1);
}
