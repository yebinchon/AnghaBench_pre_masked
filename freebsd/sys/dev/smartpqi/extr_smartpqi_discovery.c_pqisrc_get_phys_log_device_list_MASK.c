
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int reportlun_header_t ;
typedef int reportlun_ext_entry_t ;
struct TYPE_9__ {size_t list_length; } ;
struct TYPE_10__ {TYPE_1__ header; } ;
typedef TYPE_2__ reportlun_data_ext_t ;
typedef int report_lun_header ;
typedef int pqisrc_softstate_t ;


 void* FUNC_0 (size_t) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,size_t) ;
 int FUNC_4 (int *,int ,int) ;
 TYPE_2__* FUNC_5 (int *,size_t) ;
 int FUNC_6 (int *,char*,size_t) ;
 int FUNC_7 (int *,int ,TYPE_2__**,size_t*) ;

__attribute__((used)) static int FUNC_8(pqisrc_softstate_t *VAR_4,
 reportlun_data_ext_t **VAR_5,
 reportlun_data_ext_t **VAR_6,
 size_t *VAR_7,
 size_t *VAR_8)
{
 int VAR_9 = VAR_1;
 size_t VAR_10;
 size_t VAR_11;
 size_t VAR_12;
 reportlun_data_ext_t *VAR_13;
 reportlun_data_ext_t *VAR_14;
 reportlun_header_t VAR_15;


 FUNC_2("IN\n");

 VAR_9 = FUNC_7(VAR_4, VAR_3, VAR_5, VAR_7);
 if (VAR_9) {
  FUNC_1("report physical LUNs failed");
  return VAR_9;
 }

 VAR_9 = FUNC_7(VAR_4, VAR_2, VAR_6, VAR_8);
 if (VAR_9) {
  FUNC_1("report logical LUNs failed");
  return VAR_9;
 }


 VAR_14 = *VAR_6;

 if (VAR_14) {
  VAR_10 =
   FUNC_0(VAR_14->header.list_length);
 } else {
  FUNC_4(&VAR_15, 0, sizeof(VAR_15));
  VAR_14 =
   (reportlun_data_ext_t *)&VAR_15;
  VAR_10 = 0;
 }

 VAR_11 = sizeof(reportlun_header_t) +
  VAR_10;


 VAR_13 = FUNC_5(VAR_4,
         VAR_11 + sizeof(reportlun_ext_entry_t));
 if (!VAR_13) {
  VAR_12 = *VAR_8;
  FUNC_6(VAR_4, (char *)*VAR_6, VAR_12);
  *VAR_6 = ((void*)0);
  return VAR_0;
 }

 FUNC_3(VAR_13, VAR_14, VAR_11);
 FUNC_4((uint8_t *)VAR_13 + VAR_11, 0,
  sizeof(reportlun_ext_entry_t));
 VAR_13->header.list_length = FUNC_0(VAR_10 +
       sizeof(reportlun_ext_entry_t));
 VAR_12 = *VAR_8;
 FUNC_6(VAR_4, (char *)*VAR_6, VAR_12);
 *VAR_8 = VAR_11 + sizeof(reportlun_ext_entry_t);
 *VAR_6 = VAR_13;

 FUNC_2("OUT\n");

 return VAR_9;
}
