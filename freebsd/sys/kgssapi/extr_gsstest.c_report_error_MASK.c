
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ value; scalar_t__ length; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef scalar_t__ gss_OID ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__,int ,scalar_t__,scalar_t__*,TYPE_1__*) ;
 int FUNC_2 (scalar_t__*,TYPE_1__*) ;
 int FUNC_3 (char*,int,char*) ;

__attribute__((used)) static void
FUNC_4(gss_OID VAR_3, OM_uint32 VAR_4, OM_uint32 VAR_5)
{
 OM_uint32 VAR_6, VAR_7;
 OM_uint32 VAR_8;
 gss_buffer_desc VAR_9;

 FUNC_3("major_stat=%d, minor_stat=%d\n", VAR_4, VAR_5);
 VAR_8 = 0;
 do {
  VAR_6 = FUNC_1(&VAR_7, VAR_4,
      VAR_0, VAR_2, &VAR_8, &VAR_9);
  if (FUNC_0(VAR_6))
   break;
  FUNC_3("%.*s\n", (int)VAR_9.length, (char *) VAR_9.value);
  FUNC_2(&VAR_7, &VAR_9);
 } while (VAR_8);
 if (VAR_3 && VAR_5) {
  VAR_8 = 0;
  do {
   VAR_6 = FUNC_1(&VAR_7, VAR_5,
       VAR_1, VAR_3, &VAR_8, &VAR_9);
   if (FUNC_0(VAR_6))
    break;
   FUNC_3("%.*s\n", (int)VAR_9.length, (char *) VAR_9.value);
   FUNC_2(&VAR_7, &VAR_9);
  } while (VAR_8);
 }
}
