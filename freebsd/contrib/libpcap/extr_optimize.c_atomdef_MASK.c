
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmt {scalar_t__ code; int k; } ;


 int VAR_0 ;

 int FUNC_0 (scalar_t__) ;



 int FUNC_1 (scalar_t__) ;


 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(struct stmt *VAR_4)
{
 if (VAR_4->code == VAR_2)
  return -1;

 switch (FUNC_0(VAR_4->code)) {

 case 132:
 case 133:
  return VAR_0;

 case 131:
  return VAR_3;

 case 129:
 case 128:
  return VAR_4->k;

 case 130:
  return FUNC_1(VAR_4->code) == VAR_1 ? VAR_3 : VAR_0;
 }
 return -1;
}
