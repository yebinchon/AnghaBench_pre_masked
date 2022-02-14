
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint_t ;
typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
struct TYPE_3__ {scalar_t__ ne_guid; char* ne_name; struct TYPE_3__* ne_next; } ;
typedef TYPE_1__ name_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int ,char*) ;
 scalar_t__ FUNC_3 (int *,int ,int ***,size_t*) ;
 scalar_t__ FUNC_4 (int *,int ,char**) ;
 scalar_t__ FUNC_5 (int *,int ,scalar_t__*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int
FUNC_9(nvlist_t *VAR_4, name_entry_t *VAR_5)
{
 nvlist_t **VAR_6;
 uint_t VAR_7, VAR_8;
 uint64_t VAR_9;
 name_entry_t *VAR_10, *VAR_11;
 char *VAR_12, *VAR_13;
 int VAR_14;

 if (FUNC_3(VAR_4, VAR_0,
     &VAR_6, &VAR_8) == 0) {
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
   if (FUNC_9(VAR_6[VAR_7], VAR_5) != 0)
    return (-1);
  return (0);
 }
 FUNC_8(FUNC_5(VAR_4, VAR_2, &VAR_9) == 0);
 if (FUNC_4(VAR_4, VAR_3, &VAR_12) != 0)
  VAR_12 = ((void*)0);

 VAR_14 = 0;
 VAR_11 = ((void*)0);
 for (VAR_10 = VAR_5; VAR_10 != ((void*)0); VAR_10 = VAR_10->ne_next) {
  if (VAR_10->ne_guid == VAR_9) {
   const char *VAR_15, *VAR_16;
   int VAR_17;

   if (VAR_12 == ((void*)0)) {
    VAR_11 = VAR_10;
    break;
   }

   VAR_15 = VAR_10->ne_name + FUNC_7(VAR_10->ne_name) - 1;
   VAR_16 = VAR_12 + FUNC_7(VAR_12) - 1;
   for (VAR_17 = 0; VAR_15 >= VAR_10->ne_name && VAR_16 >= VAR_12;
       VAR_15--, VAR_16--, VAR_17++)
    if (*VAR_15 != *VAR_16)
     break;





   if (VAR_17 > VAR_14 || VAR_11 == ((void*)0)) {
    VAR_11 = VAR_10;
    VAR_14 = VAR_17;
   }
  }
 }

 if (VAR_11 == ((void*)0))
  return (0);

 if (FUNC_2(VAR_4, VAR_3, VAR_11->ne_name) != 0)
  return (-1);

 if ((VAR_13 = FUNC_1(VAR_11->ne_name)) == ((void*)0)) {
  (void) FUNC_6(VAR_4, VAR_1);
 } else {
  if (FUNC_2(VAR_4, VAR_1, VAR_13) != 0) {
   FUNC_0(VAR_13);
   return (-1);
  }
  FUNC_0(VAR_13);
 }

 return (0);
}
