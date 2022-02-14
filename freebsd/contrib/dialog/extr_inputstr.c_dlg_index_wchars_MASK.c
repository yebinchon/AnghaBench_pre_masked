
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int state ;
typedef int mbstate_t ;
struct TYPE_4__ {int* list; } ;
typedef TYPE_1__ CACHE ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 () ;
 TYPE_1__* FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (char const*,int ,int *) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (TYPE_1__*,char const*,unsigned int) ;
 int FUNC_6 (char const*) ;

const int *
FUNC_7(const char *VAR_1)
{
    unsigned VAR_2 = (unsigned) FUNC_0(VAR_1);
    unsigned VAR_3;
    CACHE *VAR_4 = FUNC_2(VAR_0, VAR_1);

    if (!FUNC_5(VAR_4, VAR_1, VAR_2)) {
 const char *VAR_5 = VAR_1;

 VAR_4->list[0] = 0;
 for (VAR_3 = 1; VAR_3 <= VAR_2; ++VAR_3) {
     {
  (void) VAR_5;
  VAR_4->list[VAR_3] = (int) VAR_3;
     }
 }
    }
    return VAR_4->list;
}
