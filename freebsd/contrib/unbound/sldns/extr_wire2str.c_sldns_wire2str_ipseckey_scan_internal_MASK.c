
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (char**,size_t*,char*,...) ;
 int FUNC_1 (int**,size_t*,char**,size_t*) ;
 int FUNC_2 (int**,size_t*,char**,size_t*) ;
 scalar_t__ FUNC_3 (int**,size_t*,char**,size_t*,size_t) ;
 int FUNC_4 (int**,size_t*,char**,size_t*,int*,size_t) ;

__attribute__((used)) static int FUNC_5(uint8_t** VAR_0, size_t* VAR_1,
 char** VAR_2, size_t* VAR_3, uint8_t* VAR_4, size_t VAR_5)
{

 uint8_t VAR_6, VAR_7, VAR_8;
 int VAR_9 = 0;

 if(*VAR_1 < 3) return -1;
 VAR_6 = (*VAR_0)[0];
 VAR_7 = (*VAR_0)[1];
 VAR_8 = (*VAR_0)[2];
 if(VAR_7 > 3)
  return -1;
 (*VAR_0)+=3;
 (*VAR_1)-=3;
 VAR_9 += FUNC_0(VAR_2, VAR_3, "%d %d %d ",
  (int)VAR_6, (int)VAR_7, (int)VAR_8);

 switch(VAR_7) {
 case 0:
  VAR_9 += FUNC_0(VAR_2, VAR_3, ".");
  break;
 case 1:
  VAR_9 += FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
  break;
 case 2:
  VAR_9 += FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
  break;
 case 3:
  VAR_9 += FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  break;
 default:
  return -1;
 }

 if(*VAR_1 < 1)
  return -1;
 VAR_9 += FUNC_0(VAR_2, VAR_3, " ");
 VAR_9 += FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, *VAR_1);
 return VAR_9;
}
