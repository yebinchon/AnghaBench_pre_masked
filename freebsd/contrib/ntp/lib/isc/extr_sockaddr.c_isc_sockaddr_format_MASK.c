
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int sa_family; } ;
struct TYPE_6__ {TYPE_2__ sa; } ;
struct TYPE_8__ {TYPE_1__ type; } ;
typedef TYPE_3__ isc_sockaddr_t ;
typedef scalar_t__ isc_result_t ;
typedef int isc_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*,unsigned int) ;
 int VAR_3 ;
 char* FUNC_1 (int ,int ,int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_3__ const*,int *) ;
 int FUNC_3 (char*,unsigned int,char*,char*,int) ;

void
FUNC_4(const isc_sockaddr_t *VAR_4, char *VAR_5, unsigned int VAR_6) {
 isc_result_t VAR_7;
 isc_buffer_t VAR_8;

 if (VAR_6 == 0U)
  return;

 FUNC_0(&VAR_8, VAR_5, VAR_6);
 VAR_7 = FUNC_2(VAR_4, &VAR_8);
 if (VAR_7 != VAR_2) {



  FUNC_3(VAR_5, VAR_6,
    "<%s %u>",
    FUNC_1(VAR_3, VAR_0,
     VAR_1,
     "unknown address, family"),
    VAR_4->type.sa.sa_family);
  VAR_5[VAR_6 - 1] = '\0';
 }
}
