
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int list_length; } ;
struct TYPE_10__ {TYPE_1__ header; int list_length; } ;
typedef TYPE_2__ reportlun_header_t ;
typedef TYPE_2__ reportlun_data_ext_t ;
typedef int report_lun_header ;
typedef int pqisrc_softstate_t ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*,int) ;
 TYPE_2__* FUNC_5 (int *,size_t) ;
 int FUNC_6 (int *,void*,size_t) ;
 int FUNC_7 (int *,int ,TYPE_2__*,size_t) ;

__attribute__((used)) static int FUNC_8(pqisrc_softstate_t *VAR_1, uint8_t VAR_2,
  reportlun_data_ext_t **VAR_3, size_t *VAR_4)
{
 int VAR_5;
 size_t VAR_6;
 size_t VAR_7;
 size_t VAR_8;
 reportlun_data_ext_t *VAR_9;
 reportlun_header_t VAR_10;

 FUNC_3("IN\n");

 VAR_5 = FUNC_7(VAR_1, VAR_2, &VAR_10,
  sizeof(VAR_10));

 if (VAR_5) {
  FUNC_2("failed return code: %d\n", VAR_5);
  return VAR_5;
 }
 VAR_6 = FUNC_0(VAR_10.list_length);

retry:
 VAR_7 = sizeof(reportlun_header_t) + VAR_6;
 *VAR_4 = VAR_7;

 VAR_9 = FUNC_5(VAR_1, VAR_7);

 if (!VAR_9) {
  FUNC_2("failed to allocate memory for lun_data\n");
  return VAR_0;
 }

 if (VAR_6 == 0) {
  FUNC_1("list_len is 0\n");
  FUNC_4(VAR_9, &VAR_10, sizeof(VAR_10));
  goto out;
 }

 VAR_5 = FUNC_7(VAR_1, VAR_2, VAR_9, VAR_7);

 if (VAR_5) {
  FUNC_2("error\n");
  goto error;
 }

 VAR_8 = FUNC_0(VAR_9->header.list_length);

 if (VAR_8 > VAR_6) {
  VAR_6 = VAR_8;
  FUNC_6(VAR_1, (void *)VAR_9, VAR_7);
  goto retry;
 }

out:
 *VAR_3 = VAR_9;
 FUNC_3("OUT\n");
 return 0;

error:
 FUNC_6(VAR_1, (void *)VAR_9, VAR_7);
 FUNC_2("FAILED\n");
 return VAR_5;
}
