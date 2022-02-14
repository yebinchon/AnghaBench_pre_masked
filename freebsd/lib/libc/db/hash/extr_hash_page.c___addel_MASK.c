
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t u_int16_t ;
struct TYPE_15__ {char* page; int flags; } ;
struct TYPE_14__ {int NKEYS; int MAX_BUCKET; int FFACTOR; } ;
typedef TYPE_1__ HTAB ;
typedef int DBT ;
typedef TYPE_2__ BUFHEAD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (size_t*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_1 (size_t*,int const*,int const*) ;
 scalar_t__ FUNC_2 (int const*,int const*) ;
 size_t VAR_3 ;
 TYPE_2__* FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_2__*,int const*,int const*) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_2__* FUNC_6 (TYPE_1__*,size_t,TYPE_2__*,int ) ;
 int FUNC_7 (char*,int const*,int const*) ;
 int FUNC_8 (size_t*,int const*,int const*) ;

int
FUNC_9(HTAB *VAR_4, BUFHEAD *VAR_5, const DBT *VAR_6, const DBT *VAR_7)
{
 u_int16_t *VAR_8, *VAR_9;
 int VAR_10;

 VAR_8 = (u_int16_t *)VAR_5->page;
 VAR_10 = 0;
 while (VAR_8[0] && (VAR_8[2] < VAR_3 || VAR_8[VAR_8[0]] < VAR_3))

  if (VAR_8[2] == VAR_1 && VAR_8[0] == 2)


   break;
  else if (VAR_8[2] < VAR_3 && VAR_8[VAR_8[0]] != VAR_2) {
   VAR_5 = FUNC_6(VAR_4, VAR_8[VAR_8[0] - 1], VAR_5, 0);
   if (!VAR_5)
    return (-1);
   VAR_8 = (u_int16_t *)VAR_5->page;
  } else if (VAR_8[VAR_8[0]] != VAR_2) {

   break;
  } else {

   if (VAR_8[2] >= VAR_3 &&
       FUNC_0(VAR_8) >= FUNC_2(VAR_6, VAR_7)) {
    FUNC_8(VAR_8, VAR_6, VAR_7);
    goto stats;
   } else {
    VAR_5 = FUNC_6(VAR_4, VAR_8[VAR_8[0] - 1], VAR_5, 0);
    if (!VAR_5)
     return (-1);
    VAR_8 = (u_int16_t *)VAR_5->page;
   }
  }

 if (FUNC_1(VAR_8, VAR_6, VAR_7))
  FUNC_7(VAR_5->page, VAR_6, VAR_7);
 else {
  VAR_10 = 1;
  VAR_5 = FUNC_3(VAR_4, VAR_5);
  if (!VAR_5)
   return (-1);
  VAR_9 = (u_int16_t *)VAR_5->page;

  if (FUNC_1(VAR_9, VAR_6, VAR_7))
   FUNC_7((char *)VAR_9, VAR_6, VAR_7);
  else
   if (FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7))
    return (-1);
 }
stats:
 VAR_5->flags |= VAR_0;




 VAR_4->NKEYS++;
 if (VAR_10 ||
     (VAR_4->NKEYS / (VAR_4->MAX_BUCKET + 1) > VAR_4->FFACTOR))
  return (FUNC_5(VAR_4));
 return (0);
}
