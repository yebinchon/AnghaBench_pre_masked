
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ib_portid_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int*,int *,int ,int,int ,int ) ;
 int VAR_5 ;

int FUNC_2(ib_portid_t* VAR_6)
{
 int VAR_7;
 int VAR_8;

 if (VAR_3) {
  VAR_7 = VAR_3 / VAR_1;
  VAR_8 = VAR_3 - VAR_7 * VAR_1;

  if (!FUNC_1(VAR_2, VAR_6, VAR_0, VAR_7, 0, VAR_5))
   FUNC_0("linear forwarding table get failed");
  VAR_7 = VAR_3 / VAR_1;
  VAR_8 = VAR_3 - VAR_7 * VAR_1;
  return VAR_2[VAR_8];
 }
 else
  return VAR_4;
}
