
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ isc_result_t ;
struct TYPE_4__ {int family; } ;
typedef TYPE_1__ isc_netaddr_t ;
typedef int isc_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,unsigned int) ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 char* FUNC_3 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_4 (TYPE_1__ const*,int *) ;
 int FUNC_5 (char*,unsigned int,char*,char*,int) ;

void
FUNC_6(const isc_netaddr_t *VAR_5, char *VAR_6, unsigned int VAR_7) {
 isc_result_t VAR_8;
 isc_buffer_t VAR_9;

 FUNC_1(&VAR_9, VAR_6, VAR_7);
 VAR_8 = FUNC_4(VAR_5, &VAR_9);

 if (VAR_7 == 0)
  return;




 if (VAR_8 == VAR_3) {
  if (FUNC_0(&VAR_9) >= 1)
   FUNC_2(&VAR_9, 0);
  else
   VAR_8 = VAR_2;
 }

 if (VAR_8 != VAR_3) {
  FUNC_5(VAR_6, VAR_7,
    "<%s %u>",
    FUNC_3(VAR_4, VAR_0,
     VAR_1,
     "unknown address, family"),
    VAR_5->family);
  VAR_6[VAR_7 - 1] = '\0';
 }
}
