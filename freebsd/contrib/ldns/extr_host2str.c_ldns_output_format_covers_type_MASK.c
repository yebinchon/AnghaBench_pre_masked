
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ldns_rr_type ;
struct TYPE_4__ {scalar_t__ bitmap; } ;
typedef TYPE_1__ ldns_output_format_storage ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_2__ ldns_output_format ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static bool
FUNC_1(const ldns_output_format* VAR_1, ldns_rr_type VAR_2)
{
 return VAR_1 && (VAR_1->flags & VAR_0) &&
  ((ldns_output_format_storage*)VAR_1)->bitmap &&
  FUNC_0(
    ((ldns_output_format_storage*)VAR_1)->bitmap, VAR_2);
}
