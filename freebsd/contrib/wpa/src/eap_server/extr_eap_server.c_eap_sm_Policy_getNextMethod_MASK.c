
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct eap_sm {int user_eap_method_index; int currentId; TYPE_2__* user; int update_user; int * identity; } ;
struct TYPE_4__ {TYPE_1__* methods; } ;
struct TYPE_3__ {int vendor; scalar_t__ method; } ;
typedef scalar_t__ EapType ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,scalar_t__) ;

__attribute__((used)) static EapType FUNC_1(struct eap_sm *VAR_6, int *VAR_7)
{
 EapType VAR_8;
 int VAR_9 = VAR_6->user_eap_method_index;
 if (VAR_6->identity == ((void*)0) || VAR_6->currentId == -1) {
  *VAR_7 = VAR_3;
  VAR_8 = VAR_1;
  VAR_6->update_user = VAR_5;
 } else if (VAR_6->user && VAR_9 < VAR_0 &&
     (VAR_6->user->methods[VAR_9].vendor != VAR_3 ||
      VAR_6->user->methods[VAR_9].method != VAR_2)) {
  *VAR_7 = VAR_6->user->methods[VAR_9].vendor;
  VAR_8 = VAR_6->user->methods[VAR_9].method;
  VAR_6->user_eap_method_index++;
 } else {
  *VAR_7 = VAR_3;
  VAR_8 = VAR_2;
 }
 FUNC_0(VAR_4, "EAP: getNextMethod: vendor %d type %d",
     *VAR_7, VAR_8);
 return VAR_8;
}
