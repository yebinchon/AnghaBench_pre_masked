
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* t_ardef; } ;
typedef TYPE_1__ tdesc_t ;
typedef int ardef_t ;
struct TYPE_5__ {int ad_nelems; int ad_contents; int ad_idxtype; } ;


 int FUNC_0 (char*,char*,char*) ;
 char* FUNC_1 (char*,int*) ;
 int FUNC_2 (int) ;
 char* FUNC_3 (char*,int*) ;
 int FUNC_4 (int,char*,char*,int,int,int) ;
 char* FUNC_5 (char*,int,int *) ;
 TYPE_2__* FUNC_6 (int) ;

__attribute__((used)) static char *
FUNC_7(char *VAR_0, tdesc_t **VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 VAR_0 = FUNC_1(VAR_0, &VAR_4);
 if (*VAR_0++ != ';')
  FUNC_0("arraydef/1", ";", VAR_0 - 1);

 (*VAR_1)->t_ardef = FUNC_6(sizeof (ardef_t));
 (*VAR_1)->t_ardef->ad_idxtype = FUNC_2(VAR_4);

 VAR_0 = FUNC_3(VAR_0, &VAR_2);
 if (*VAR_0++ != ';')
  FUNC_0("arraydef/2", ";", VAR_0 - 1);

 if (*VAR_0 == 'S') {
  VAR_0++;
  if (*VAR_0 == '-')
   VAR_0++;
  VAR_0 = FUNC_3(VAR_0, &VAR_3);
  VAR_3 = VAR_2;
 } else {





  VAR_0 = FUNC_3(VAR_0, &VAR_3);
 }

 if (*VAR_0++ != ';')
  FUNC_0("arraydef/3", ";", VAR_0 - 1);
 (*VAR_1)->t_ardef->ad_nelems = VAR_3 - VAR_2 + 1;
 VAR_0 = FUNC_5(VAR_0, VAR_4, &((*VAR_1)->t_ardef->ad_contents));

 FUNC_4(3, VAR_0, "defined array idx type %d %d-%d next ",
     VAR_4, VAR_2, VAR_3);

 return (VAR_0);
}
