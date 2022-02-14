
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned char isc_uint32_t ;
typedef int isc_time_t ;
typedef scalar_t__ isc_result_t ;
struct TYPE_4__ {int kbd; } ;
typedef TYPE_1__ isc_entropysource_t ;
typedef int isc_boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,unsigned char,unsigned char) ;
 scalar_t__ FUNC_5 (int *,unsigned char*) ;
 unsigned char FUNC_6 (int *) ;
 int VAR_2 ;

__attribute__((used)) static isc_result_t
FUNC_7(isc_entropysource_t *VAR_3, void *VAR_4, isc_boolean_t VAR_5) {
 isc_result_t VAR_6;
 isc_time_t VAR_7;
 isc_uint32_t VAR_8;
 isc_uint32_t VAR_9;
 unsigned char VAR_10;

 FUNC_1(VAR_4);

 if (!VAR_5)
  return (VAR_0);

 VAR_6 = FUNC_5(&VAR_3->kbd, &VAR_10);
 if (VAR_6 != VAR_1)
  return (VAR_6);

 FUNC_0(&VAR_7);

 VAR_8 = FUNC_6(&VAR_7);
 VAR_9 = VAR_10;

 VAR_6 = FUNC_4(VAR_3, VAR_8, VAR_9);
 if (VAR_6 != VAR_1) {
  FUNC_3(VAR_2, "\r\n");
  return (VAR_6);
 }

 FUNC_3(VAR_2, ".");
 FUNC_2(VAR_2);

 return (VAR_6);
}
