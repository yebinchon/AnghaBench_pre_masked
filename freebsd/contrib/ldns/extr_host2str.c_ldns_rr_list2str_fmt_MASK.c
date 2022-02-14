
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ldns_rr_list ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ ldns_output_format ;
typedef int ldns_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_4 (int *,TYPE_1__ const*,int const*) ;

char *
FUNC_5(const ldns_output_format *VAR_4, const ldns_rr_list *VAR_5)
{
 char *VAR_6 = ((void*)0);
 ldns_buffer *VAR_7 = FUNC_2(VAR_1);

 if (!VAR_7) {
  return ((void*)0);
 }
 if (VAR_5) {
  if (FUNC_4(
       VAR_7, VAR_4, VAR_5)
           == VAR_2) {
  }
 } else {
  if (VAR_4 == ((void*)0)) {
   VAR_4 = VAR_3;
  }
  if (VAR_4->flags & VAR_0) {
   FUNC_3(VAR_7, "; (null)\n");
  }
 }


 VAR_6 = FUNC_0(VAR_7);
 FUNC_1(VAR_7);
 return VAR_6;
}
