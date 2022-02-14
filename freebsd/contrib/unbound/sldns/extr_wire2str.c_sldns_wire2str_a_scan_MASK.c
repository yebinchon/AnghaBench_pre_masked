
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int socklen_t ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,char*,int ) ;
 int FUNC_1 (char**,size_t*,char*,char*) ;

int FUNC_2(uint8_t** VAR_1, size_t* VAR_2, char** VAR_3, size_t* VAR_4)
{
 char VAR_5[32];
 int VAR_6;
 if(*VAR_2 < 4) return -1;
 if(!FUNC_0(VAR_0, *VAR_1, VAR_5, (socklen_t)sizeof(VAR_5)))
  return -1;
 VAR_6 = FUNC_1(VAR_3, VAR_4, "%s", VAR_5);
 (*VAR_1)+=4;
 (*VAR_2)-=4;
 return VAR_6;
}
