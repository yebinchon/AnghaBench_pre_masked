
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* rpc_gss_principal_t ;
typedef int gss_name_t ;
struct TYPE_8__ {size_t length; void* value; } ;
typedef TYPE_2__ gss_buffer_desc ;
typedef int gss_OID ;
typedef int bool_t ;
struct TYPE_7__ {int len; int name; } ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ,int ,int *) ;
 scalar_t__ FUNC_1 (scalar_t__*,int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (scalar_t__*,TYPE_2__*,int ,int *) ;
 int FUNC_3 (scalar_t__*,TYPE_2__*) ;
 int FUNC_4 (scalar_t__*,int *) ;
 int FUNC_5 (char*,int ,scalar_t__,scalar_t__) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (void*,size_t) ;
 int FUNC_8 (int ,void*,int) ;
 int FUNC_9 (char const*,int *) ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (char*,char const*) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 () ;

bool_t
FUNC_14(rpc_gss_principal_t *VAR_4,
    const char *VAR_5, const char *VAR_6, const char *VAR_7, const char *VAR_8)
{
 OM_uint32 VAR_9, VAR_10;
 gss_OID VAR_11;
 size_t VAR_12;
 gss_buffer_desc VAR_13;
 gss_name_t VAR_14, VAR_15;
 rpc_gss_principal_t VAR_16;

 FUNC_13();

 if (!FUNC_9(VAR_5, &VAR_11))
  return (VAR_0);





 VAR_12 = FUNC_12(VAR_6);
 if (VAR_7) {
  VAR_12 += FUNC_12(VAR_7) + 1;
 }
 if (VAR_8) {
  VAR_12 += FUNC_12(VAR_8) + 1;
 }

 VAR_13.value = FUNC_6(VAR_12);
 VAR_13.length = VAR_12;
 FUNC_11((char *) VAR_13.value, VAR_6);
 if (VAR_7) {
  FUNC_10((char *) VAR_13.value, "/");
  FUNC_10((char *) VAR_13.value, VAR_7);
 }
 if (VAR_8) {
  FUNC_10((char *) VAR_13.value, "@");
  FUNC_10((char *) VAR_13.value, VAR_8);
 }





 VAR_9 = FUNC_2(&VAR_10, &VAR_13,
     VAR_1, &VAR_14);
 FUNC_7(VAR_13.value, VAR_13.length);
 if (VAR_9 != VAR_2) {
  FUNC_5("gss_import_name", VAR_11, VAR_9, VAR_10);
  return (VAR_0);
 }
 VAR_9 = FUNC_0(&VAR_10, VAR_14, VAR_11,
     &VAR_15);
 if (VAR_9 != VAR_2) {
  FUNC_5("gss_canonicalize_name", VAR_11, VAR_9,
      VAR_10);
  FUNC_4(&VAR_10, &VAR_14);
  return (VAR_0);
 }
 FUNC_4(&VAR_10, &VAR_14);





 VAR_9 = FUNC_1(&VAR_10, VAR_15, &VAR_13);
 if (VAR_9 != VAR_2) {
  FUNC_5("gss_export_name", VAR_11, VAR_9, VAR_10);
  FUNC_4(&VAR_10, &VAR_15);
  return (VAR_0);
 }
 FUNC_4(&VAR_10, &VAR_15);

 VAR_16 = FUNC_6(sizeof(int) + VAR_13.length);
 if (!VAR_16) {
  FUNC_3(&VAR_10, &VAR_13);
  return (VAR_0);
 }
 VAR_16->len = VAR_13.length;
 FUNC_8(VAR_16->name, VAR_13.value, VAR_13.length);
 FUNC_3(&VAR_10, &VAR_13);

 *VAR_4 = VAR_16;
 return (VAR_3);
}
