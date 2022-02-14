
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ base; scalar_t__ last; char** text; int set; int msgcat; } ;
typedef TYPE_1__ resulttable ;
typedef scalar_t__ isc_result_t ;


 TYPE_1__* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int VAR_1 ;
 char* FUNC_5 (int ,int ,int,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

const char *
FUNC_6(isc_result_t VAR_5) {
 resulttable *VAR_6;
 const char *VAR_7, *VAR_8;
 int VAR_9;

 FUNC_4();

 FUNC_2(&VAR_3);

 VAR_7 = ((void*)0);
 for (VAR_6 = FUNC_0(VAR_4);
      VAR_6 != ((void*)0);
      VAR_6 = FUNC_1(VAR_6, VAR_2)) {
  if (VAR_5 >= VAR_6->base && VAR_5 <= VAR_6->last) {
   VAR_9 = (int)(VAR_5 - VAR_6->base);
   VAR_8 = VAR_6->text[VAR_9];





   VAR_7 = FUNC_5(VAR_6->msgcat, VAR_6->set,
          VAR_9 + 1, VAR_8);
   break;
  }
 }
 if (VAR_7 == ((void*)0))
  VAR_7 = FUNC_5(VAR_1, VAR_0,
         1, "(result code text not available)");

 FUNC_3(&VAR_3);

 return (VAR_7);
}
