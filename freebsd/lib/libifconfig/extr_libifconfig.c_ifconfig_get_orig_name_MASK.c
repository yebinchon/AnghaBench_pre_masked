
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ errcode; int errtype; } ;
struct TYPE_5__ {TYPE_1__ error; } ;
typedef TYPE_2__ ifconfig_handle_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*) ;
 unsigned int FUNC_1 (char const*) ;
 char* FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (int*,int,char*,size_t*,int ,int ) ;

int
FUNC_4(ifconfig_handle_t *VAR_8, const char *VAR_9,
    char **VAR_10)
{
 size_t VAR_11;
 unsigned int VAR_12;
 int VAR_13[6];

 VAR_12 = FUNC_1(VAR_9);
 if (VAR_12 == 0) {
  goto fail;
 }

 VAR_13[0] = VAR_0;
 VAR_13[1] = VAR_6;
 VAR_13[2] = VAR_4;
 VAR_13[3] = VAR_3;
 VAR_13[4] = VAR_12;
 VAR_13[5] = VAR_2;

 VAR_11 = 0;
 if (FUNC_3(VAR_13, 6, ((void*)0), &VAR_11, 0, 0) < 0) {
  goto fail;
 }

 *VAR_10 = FUNC_2(VAR_11);
 if (*VAR_10 == ((void*)0)) {
  goto fail;
 }

 if (FUNC_3(VAR_13, 6, *VAR_10, &VAR_11, 0, 0) < 0) {
  FUNC_0(*VAR_10);
  *VAR_10 = ((void*)0);
  goto fail;
 }

 return (0);

fail:
 VAR_8->error.errtype = VAR_5;
 VAR_8->error.errcode = (VAR_7 != 0) ? VAR_7 : VAR_1;
 return (-1);
}
