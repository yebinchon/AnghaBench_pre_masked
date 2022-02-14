
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct auth_zone {size_t namelen; int name; } ;
typedef int hash ;


 int VAR_0 ;
 size_t FUNC_0 (scalar_t__*,int,scalar_t__*,size_t,int,size_t,scalar_t__*,size_t) ;
 int FUNC_1 (scalar_t__*,int ,size_t) ;
 int FUNC_2 (scalar_t__*,size_t,char*,size_t) ;

__attribute__((used)) static int
FUNC_3(struct auth_zone* VAR_1, uint8_t* VAR_2, size_t* VAR_3,
 uint8_t* VAR_4, size_t VAR_5, int VAR_6, size_t VAR_7, uint8_t* VAR_8,
 size_t VAR_9)
{
 uint8_t VAR_10[VAR_0];
 size_t VAR_11;
 int VAR_12;
 VAR_11 = FUNC_0(VAR_10, sizeof(VAR_10), VAR_4, VAR_5, VAR_6, VAR_7,
  VAR_8, VAR_9);
 if(!VAR_11) return 0;

 if(*VAR_3 < VAR_11*2+1+VAR_1->namelen)
  return 0;
 VAR_12 = FUNC_2(VAR_10, VAR_11, (char*)(VAR_2+1),
  (*VAR_3)-1);
 if(VAR_12<1)
  return 0;
 VAR_2[0] = (uint8_t)VAR_12;
 VAR_12++;
 if((*VAR_3) - VAR_12 < VAR_1->namelen)
  return 0;
 FUNC_1(VAR_2+VAR_12, VAR_1->name, VAR_1->namelen);
 *VAR_3 = VAR_1->namelen+(size_t)VAR_12;
 return 1;
}
