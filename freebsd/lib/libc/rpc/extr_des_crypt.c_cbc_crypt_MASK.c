
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* UDES_buf; } ;
struct desparams {char* des_ivec; int des_mode; TYPE_1__ UDES; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,unsigned int,unsigned int,struct desparams*) ;

int
FUNC_2(char *VAR_2, char *VAR_3, unsigned VAR_4, unsigned VAR_5, char *VAR_6)
{
 int VAR_7;
 struct desparams VAR_8;





 VAR_8.des_mode = VAR_0;

 FUNC_0(VAR_6, VAR_8.des_ivec);
 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, &VAR_8);
 FUNC_0(VAR_8.des_ivec, VAR_6);
 return(VAR_7);
}
