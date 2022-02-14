
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct delegpt {int * name; int namelen; int namelabs; int dp_type_mlc; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *,int ) ;

int FUNC_3(struct delegpt* VAR_0, uint8_t* VAR_1)
{
 FUNC_1(VAR_0->dp_type_mlc);
 VAR_0->namelabs = FUNC_0(VAR_1, &VAR_0->namelen);
 VAR_0->name = FUNC_2(VAR_1, VAR_0->namelen);
 return (VAR_0->name != ((void*)0));
}
