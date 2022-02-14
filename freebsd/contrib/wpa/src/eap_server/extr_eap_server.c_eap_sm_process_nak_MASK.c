
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct eap_sm {int user_eap_method_index; TYPE_1__* user; } ;
struct TYPE_5__ {scalar_t__ vendor; scalar_t__ method; } ;
struct TYPE_4__ {TYPE_2__* methods; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_1 (int ,char*,scalar_t__ const*,int) ;
 int FUNC_2 (int ,char*,int) ;

void FUNC_3(struct eap_sm *VAR_4, const u8 *VAR_5, size_t VAR_6)
{
 int VAR_7;
 size_t VAR_8;

 if (VAR_4->user == ((void*)0))
  return;

 FUNC_2(VAR_3, "EAP: processing NAK (current EAP method "
     "index %d)", VAR_4->user_eap_method_index);

 FUNC_1(VAR_3, "EAP: configured methods",
      (u8 *) VAR_4->user->methods,
      VAR_0 * sizeof(VAR_4->user->methods[0]));
 FUNC_1(VAR_3, "EAP: list of methods supported by the peer",
      VAR_5, VAR_6);

 VAR_7 = VAR_4->user_eap_method_index;
 while (VAR_7 < VAR_0 &&
        (VAR_4->user->methods[VAR_7].vendor != VAR_2 ||
  VAR_4->user->methods[VAR_7].method != VAR_1)) {
  if (VAR_4->user->methods[VAR_7].vendor != VAR_2)
   goto not_found;
  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
   if (VAR_5[VAR_8] == VAR_4->user->methods[VAR_7].method) {
    break;
   }
  }

  if (VAR_8 < VAR_6) {

   VAR_7++;
   continue;
  }

 not_found:

  if (VAR_7 + 1 < VAR_0) {
   FUNC_0(&VAR_4->user->methods[VAR_7],
       &VAR_4->user->methods[VAR_7 + 1],
       (VAR_0 - VAR_7 - 1) *
       sizeof(VAR_4->user->methods[0]));
  }
  VAR_4->user->methods[VAR_0 - 1].vendor =
   VAR_2;
  VAR_4->user->methods[VAR_0 - 1].method = VAR_1;
 }

 FUNC_1(VAR_3, "EAP: new list of configured methods",
      (u8 *) VAR_4->user->methods, VAR_0 *
      sizeof(VAR_4->user->methods[0]));
}
