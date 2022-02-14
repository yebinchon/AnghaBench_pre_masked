
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int temp ;
typedef int state ;
typedef int mbstate_t ;
typedef char const chtype ;
typedef int cchar_t ;
struct TYPE_4__ {int* list; } ;
typedef TYPE_1__ CACHE ;


 char const VAR_0 ;
 char FUNC_0 (char const) ;
 int VAR_1 ;
 int FUNC_1 (char const*) ;
 int* FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (char) ;
 TYPE_1__* FUNC_5 (int ,char const*) ;
 size_t FUNC_6 (int *,char const*,size_t,int *) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (TYPE_1__*,char const*,unsigned int) ;
 int FUNC_9 (int *,int *,int ,int ,int ) ;
 size_t FUNC_10 (char const*) ;
 char* FUNC_11 (char const) ;
 scalar_t__ FUNC_12 (int const*) ;
 int FUNC_13 (int ) ;
 int * FUNC_14 (int *) ;

const int *
FUNC_15(const char *VAR_2)
{
    unsigned VAR_3 = (unsigned) FUNC_1(VAR_2);
    unsigned VAR_4;
    CACHE *VAR_5 = FUNC_5(VAR_1, VAR_2);

    if (!FUNC_8(VAR_5, VAR_2, VAR_3)) {
 VAR_5->list[0] = 0;
 {
     for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
  chtype VAR_6 = FUNC_0(VAR_2[VAR_4]);

  if (VAR_6 == VAR_0)
      VAR_5->list[VAR_4 + 1] =
   ((VAR_5->list[VAR_4] | 7) + 1) - VAR_5->list[VAR_4];
  else if (FUNC_4(FUNC_0(VAR_6)))
      VAR_5->list[VAR_4 + 1] = 1;
  else {
      const char *VAR_7;
      VAR_7 = FUNC_11(VAR_6);
      VAR_5->list[VAR_4 + 1] = (VAR_7
         ? (int) FUNC_10(VAR_7)
         : 1);
  }
  if (VAR_4 != 0)
      VAR_5->list[VAR_4 + 1] += VAR_5->list[VAR_4];
     }
 }
    }
    return VAR_5->list;
}
