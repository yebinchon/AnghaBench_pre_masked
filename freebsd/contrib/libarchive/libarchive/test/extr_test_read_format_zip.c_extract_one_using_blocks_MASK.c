
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct archive {int dummy; } ;
typedef scalar_t__ la_ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct archive*,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int) ;

__attribute__((used)) static
int FUNC_6(struct archive* VAR_1, int VAR_2, uint32_t VAR_3)
{
 uint8_t* VAR_4;
 int VAR_5 = 1;
 uint32_t VAR_6 = 0;
 la_ssize_t VAR_7;

 VAR_4 = FUNC_5(VAR_2);
 if(VAR_4 == ((void*)0))
  return 1;

 while(1) {
  VAR_7 = FUNC_0(VAR_1, VAR_4, VAR_2);
  if(VAR_7 == VAR_0)
   continue;
  else if(VAR_7 == 0)
   break;
  else if(VAR_7 < 0) {


   FUNC_1(0);
   VAR_5 = 1;
   goto fn_exit;
  } else {

  }

  VAR_6 = FUNC_3(VAR_6, VAR_4, VAR_7);
 }

 FUNC_2(VAR_6, VAR_3);
 VAR_5 = 0;

fn_exit:
 FUNC_4(VAR_4);
 return VAR_5;
}
