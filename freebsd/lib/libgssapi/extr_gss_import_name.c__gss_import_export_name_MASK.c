
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct _gss_name {int dummy; } ;
struct _gss_mech_switch {scalar_t__ (* gm_import_name ) (scalar_t__*,TYPE_1__* const,int ,scalar_t__*) ;int (* gm_release_name ) (scalar_t__*,scalar_t__*) ;} ;
typedef scalar_t__ gss_name_t ;
typedef TYPE_1__* gss_buffer_t ;
struct TYPE_7__ {int length; unsigned char* elements; } ;
typedef TYPE_2__ gss_OID_desc ;
struct TYPE_6__ {unsigned char* value; size_t length; } ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct _gss_mech_switch* FUNC_0 (TYPE_2__*) ;
 struct _gss_name* FUNC_1 (struct _gss_mech_switch*,scalar_t__) ;
 int FUNC_2 (struct _gss_mech_switch*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__*,TYPE_1__* const,int ,scalar_t__*) ;
 int FUNC_4 (scalar_t__*,scalar_t__*) ;

__attribute__((used)) static OM_uint32
FUNC_5(OM_uint32 *VAR_5,
    const gss_buffer_t VAR_6,
    gss_name_t *VAR_7)
{
 OM_uint32 VAR_8;
 unsigned char *VAR_9 = VAR_6->value;
 size_t VAR_10 = VAR_6->length;
 size_t VAR_11;
 gss_OID_desc VAR_12;
 struct _gss_mech_switch *VAR_13;
 struct _gss_name *VAR_14;
 gss_name_t VAR_15;

 *VAR_5 = 0;
 *VAR_7 = 0;




 if (VAR_10 < 2)
  return (VAR_2);
 if (VAR_9[0] != 4 || VAR_9[1] != 1)
  return (VAR_2);
 VAR_9 += 2;
 VAR_10 -= 2;





 if (VAR_10 < 2)
  return (VAR_2);
 VAR_11 = (VAR_9[0] << 8) + VAR_9[1];
 VAR_9 += 2;
 VAR_10 -= 2;





 if (VAR_9[0] != 6)
  return (VAR_2);
 VAR_9++;
 VAR_10--;
 VAR_11--;
 if (VAR_9[0] & 0x80) {
  int VAR_16 = VAR_9[0];
  VAR_9++;
  VAR_10--;
  VAR_11--;
  VAR_12.length = 0;
  while (VAR_16--) {
   VAR_12.length = (VAR_12.length << 8) | VAR_9[0];
   VAR_9++;
   VAR_10--;
   VAR_11--;
  }
 } else {
  VAR_12.length = VAR_9[0];
  VAR_9++;
  VAR_10--;
  VAR_11--;
 }
 if (VAR_12.length != VAR_11)
  return (VAR_2);

 VAR_12.elements = VAR_9;

 if (VAR_10 < VAR_11 + 4)
  return (VAR_2);
 VAR_9 += VAR_11;
 VAR_10 -= VAR_11;

 VAR_11 = (VAR_9[0] << 24) | (VAR_9[1] << 16) | (VAR_9[2] << 8) | VAR_9[3];
 VAR_9 += 4;
 VAR_10 -= 4;

 if (VAR_10 != VAR_11)
  return (VAR_2);

 VAR_13 = FUNC_0(&VAR_12);
 if (!VAR_13)
  return (VAR_1);




 VAR_8 = VAR_13->gm_import_name(VAR_5,
     VAR_6, VAR_0, &VAR_15);
 if (VAR_8 != VAR_3) {
  FUNC_2(VAR_13, VAR_8, *VAR_5);
  return (VAR_8);
 }




 VAR_14 = FUNC_1(VAR_13, VAR_15);
 if (!VAR_14) {
  VAR_13->gm_release_name(VAR_5, &VAR_15);
  return (VAR_4);
 }

 *VAR_7 = (gss_name_t) VAR_14;

 *VAR_5 = 0;
 return (VAR_3);
}
