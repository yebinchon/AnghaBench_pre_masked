
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* if_rxd_info_t ;
struct TYPE_3__ {int iri_csum_flags; void* iri_csum_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(uint32_t VAR_10, if_rxd_info_t VAR_11)
{
 VAR_11->iri_csum_flags = 0;


 if (VAR_10 & VAR_7)
  return;


 if ((VAR_10 & (VAR_6 | VAR_4)) ==
     VAR_6) {
  VAR_11->iri_csum_flags = (VAR_1 | VAR_2);
 }


 if ((VAR_10 & (VAR_8 | VAR_5)) ==
     VAR_8) {
  VAR_11->iri_csum_flags |= (VAR_0 | VAR_3);
  VAR_11->iri_csum_data = FUNC_0(0xffff);
 }
 if (VAR_10 & VAR_9) {
  VAR_11->iri_csum_flags |= (VAR_0 | VAR_3);
  VAR_11->iri_csum_data = FUNC_0(0xffff);
 }
}
