
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int ccid_id; } ;


 int FUNC_0 (TYPE_1__**) ;
 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_1 () ;
 int* FUNC_2 (int,int ) ;

int FUNC_3(u8 **VAR_2, u8 *VAR_3)
{
 *VAR_2 = FUNC_2(FUNC_0(VAR_1), FUNC_1());
 if (*VAR_2 == ((void*)0))
  return -VAR_0;

 for (*VAR_3 = 0; *VAR_3 < FUNC_0(VAR_1); *VAR_3 += 1)
  (*VAR_2)[*VAR_3] = VAR_1[*VAR_3]->ccid_id;
 return 0;
}
