
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* gss_buffer_t ;
struct TYPE_9__ {int length; scalar_t__ value; } ;
typedef TYPE_2__ gss_buffer_desc ;
typedef int gss_OID ;
struct TYPE_8__ {char* value; void* length; } ;
typedef scalar_t__ OM_uint32 ;


 int FUNC_0 (scalar_t__) ;


 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int const,int,scalar_t__,TYPE_1__*) ;
 int FUNC_5 (char**,char*,unsigned long,...) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__*,int const,TYPE_2__*) ;
 int FUNC_8 (scalar_t__*,TYPE_2__*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (char*) ;
 void* FUNC_11 (char*) ;
 int FUNC_12 (int ) ;

OM_uint32
FUNC_13(OM_uint32 *VAR_2,
    OM_uint32 VAR_3,
    int VAR_4,
    const gss_OID VAR_5,
    OM_uint32 *VAR_6,
    gss_buffer_t VAR_7)
{
 OM_uint32 VAR_8;

 FUNC_3(VAR_7);
 *VAR_6 = 0;

 VAR_8 = FUNC_4(VAR_5, VAR_4,
      VAR_3, VAR_7);
 if (VAR_8 == VAR_1) {

  *VAR_6 = 0;
  *VAR_2 = 0;
  return (VAR_1);
 }

 *VAR_2 = 0;
 switch (VAR_4) {
 case 129: {
  char *VAR_9;

  if (FUNC_2(VAR_3))
      FUNC_5(&VAR_9, "%lu", FUNC_12(
          FUNC_2(VAR_3)));
  else
      FUNC_5 (&VAR_9, "%lu %d",
          FUNC_6(FUNC_0(VAR_3)),
   FUNC_9(FUNC_1(VAR_3)));

  if (VAR_9 == ((void*)0))
   break;

  VAR_7->length = FUNC_11(VAR_9);
  VAR_7->value = VAR_9;

  return (VAR_1);
 }
 case 128: {
  OM_uint32 VAR_10, VAR_11;
  gss_buffer_desc VAR_12;
  char *VAR_13;

  VAR_10 = FUNC_7(&VAR_11, VAR_5, &VAR_12);
  if (VAR_10 != VAR_1) {
   VAR_12.value = FUNC_10("unknown");
   VAR_12.length = 7;
  }

  FUNC_5 (&VAR_13, "unknown mech-code %lu for mech %.*s",
     (unsigned long)VAR_3,
     (int)VAR_12.length, (char *)VAR_12.value);
  if (VAR_10 == VAR_1)
   FUNC_8(&VAR_11, &VAR_12);

  if (VAR_13 == ((void*)0))
      break;

  VAR_7->length = FUNC_11(VAR_13);
  VAR_7->value = VAR_13;

  return (VAR_1);
 }
 }
 FUNC_3(VAR_7);
 return (VAR_0);
}
