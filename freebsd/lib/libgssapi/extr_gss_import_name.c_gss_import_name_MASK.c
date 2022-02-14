
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct _gss_name {int gn_mn; int gn_value; int gn_type; } ;
typedef scalar_t__ gss_name_t ;
typedef TYPE_1__* gss_buffer_t ;
typedef scalar_t__ gss_OID ;
struct TYPE_5__ {scalar_t__ length; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__*,TYPE_1__* const,int *) ;
 scalar_t__ FUNC_2 (scalar_t__*,scalar_t__,int *) ;
 scalar_t__ FUNC_3 (scalar_t__*,TYPE_1__* const,scalar_t__*) ;
 int FUNC_4 (struct _gss_name*) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__*,scalar_t__*) ;
 struct _gss_name* FUNC_7 (int) ;
 int FUNC_8 (struct _gss_name*,int ,int) ;

OM_uint32
FUNC_9(OM_uint32 *VAR_15,
    const gss_buffer_t VAR_16,
    const gss_OID VAR_17,
    gss_name_t *VAR_18)
{
 gss_OID VAR_19 = VAR_17;
 OM_uint32 VAR_20;
 struct _gss_name *VAR_21;

 *VAR_18 = VAR_1;

 if (VAR_16->length == 0) {
  *VAR_15 = 0;
  return (VAR_11);
 }




 if (VAR_19 == VAR_2)
  VAR_19 = VAR_9;






 if (FUNC_5(VAR_19, VAR_4)) {
  return FUNC_3(VAR_15,
      VAR_16, VAR_18);
 }






 if (!FUNC_5(VAR_19, VAR_9)
     && !FUNC_5(VAR_19, VAR_7)
     && !FUNC_5(VAR_19, VAR_8)
     && !FUNC_5(VAR_19, VAR_6)
     && !FUNC_5(VAR_19, VAR_5)
     && !FUNC_5(VAR_19, VAR_3)
     && !FUNC_5(VAR_19, VAR_10)) {
  *VAR_15 = 0;
  return (VAR_12);
 }

 *VAR_15 = 0;
 VAR_21 = FUNC_7(sizeof(struct _gss_name));
 if (!VAR_21) {
  *VAR_15 = VAR_0;
  return (VAR_14);
 }
 FUNC_8(VAR_21, 0, sizeof(struct _gss_name));

 VAR_20 = FUNC_2(VAR_15,
     VAR_19, &VAR_21->gn_type);
 if (VAR_20) {
  FUNC_4(VAR_21);
  return (VAR_14);
 }

 VAR_20 = FUNC_1(VAR_15,
     VAR_16, &VAR_21->gn_value);
 if (VAR_20) {
  gss_name_t VAR_22 = (gss_name_t)VAR_21;
  FUNC_6(VAR_15, &VAR_22);
  return (VAR_14);
 }

 FUNC_0(&VAR_21->gn_mn);

 *VAR_18 = (gss_name_t) VAR_21;
 return (VAR_13);
}
