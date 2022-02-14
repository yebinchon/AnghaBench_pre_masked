
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int base; unsigned int last; char const** text; int set; int * msgcat; } ;
typedef TYPE_1__ resulttable ;
typedef int isc_result_t ;
typedef int isc_msgcat_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_5 (int) ;
 int VAR_5 ;

__attribute__((used)) static isc_result_t
FUNC_6(unsigned int VAR_6, unsigned int VAR_7, const char **VAR_8,
        isc_msgcat_t *VAR_9, int VAR_10)
{
 resulttable *VAR_11;

 FUNC_3(VAR_6 % VAR_0 == 0);
 FUNC_3(VAR_7 <= VAR_0);
 FUNC_3(VAR_8 != ((void*)0));





 VAR_11 = FUNC_5(sizeof(*VAR_11));
 if (VAR_11 == ((void*)0))
  return (VAR_1);
 VAR_11->base = VAR_6;
 VAR_11->last = VAR_6 + VAR_7 - 1;
 VAR_11->text = VAR_8;
 VAR_11->msgcat = VAR_9;
 VAR_11->set = VAR_10;
 FUNC_0(VAR_11, VAR_3);

 FUNC_2(&VAR_4);

 FUNC_1(VAR_5, VAR_11, VAR_3);

 FUNC_4(&VAR_4);

 return (VAR_2);
}
