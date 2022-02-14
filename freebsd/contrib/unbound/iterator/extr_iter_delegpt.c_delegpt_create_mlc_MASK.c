
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct delegpt {int dp_type_mlc; int name; int namelen; int namelabs; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct delegpt*) ;
 int FUNC_3 (int *,int ) ;

struct delegpt* FUNC_4(uint8_t* VAR_0)
{
 struct delegpt* VAR_1=(struct delegpt*)FUNC_0(1, sizeof(*VAR_1));
 if(!VAR_1)
  return ((void*)0);
 VAR_1->dp_type_mlc = 1;
 if(VAR_0) {
  VAR_1->namelabs = FUNC_1(VAR_0, &VAR_1->namelen);
  VAR_1->name = FUNC_3(VAR_0, VAR_1->namelen);
  if(!VAR_1->name) {
   FUNC_2(VAR_1);
   return ((void*)0);
  }
 }
 return VAR_1;
}
