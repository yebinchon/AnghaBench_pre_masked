
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ ldns_status ;
typedef int ldns_rr_type ;
struct TYPE_2__ {int flags; int bitmap; } ;
typedef TYPE_1__ ldns_output_format_storage ;
typedef int ldns_output_format ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;

ldns_status
FUNC_4(ldns_output_format* VAR_2, ldns_rr_type VAR_3)
{
 ldns_output_format_storage* VAR_4 = (ldns_output_format_storage*)VAR_2;
 ldns_status VAR_5;

 FUNC_0(VAR_2 != ((void*)0));

 if (!(VAR_4->flags & VAR_0)) {
  FUNC_2(VAR_2, VAR_0);
 }
 if (! VAR_4->bitmap) {
  VAR_5 = FUNC_3(&VAR_4->bitmap);
  if (VAR_5 != VAR_1) {
   return VAR_5;
  }
 }
 return FUNC_1(VAR_4->bitmap, VAR_3);
}
