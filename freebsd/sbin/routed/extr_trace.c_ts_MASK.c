
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_2__ {scalar_t__ tv_sec; } ;


 int FUNC_0 (char*,char*,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (char*,scalar_t__,int) ;

__attribute__((used)) static char *
FUNC_3(time_t VAR_1) {
 static char VAR_2[20];

 VAR_1 += VAR_0.tv_sec;



 FUNC_2(VAR_2, FUNC_1(&VAR_1)+11, 8);
 VAR_2[8] = '\0';

 return VAR_2;
}
