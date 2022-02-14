
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (void*,size_t,int ,int ,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;

void *
FUNC_3(
 void *VAR_4,
 size_t VAR_5,
 size_t VAR_6,
 size_t VAR_7





 )
{
 if ((VAR_5 >= VAR_1 || VAR_6 >= VAR_1) &&
     VAR_5 > 0 && VAR_2 / VAR_5 < VAR_6) {

  FUNC_2(VAR_0, "fatal allocation size overflow");





  FUNC_1(1);
 }

 return FUNC_0(VAR_4, VAR_7 + (VAR_6 * VAR_5), 0, VAR_3);



}
