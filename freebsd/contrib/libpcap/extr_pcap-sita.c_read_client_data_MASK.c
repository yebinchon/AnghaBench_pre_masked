
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int * imsg; } ;
typedef TYPE_1__ unit_t ;
typedef int buf ;


 int FUNC_0 (int,int*,int*,TYPE_1__**) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int,unsigned char*,int,int ) ;

__attribute__((used)) static int FUNC_4 (int VAR_0) {
 unsigned char VAR_1[256];
 int VAR_2, VAR_3;
 unit_t *VAR_4;
 int VAR_5;

 FUNC_0(VAR_0, &VAR_2, &VAR_3, &VAR_4);

 if ((VAR_5 = FUNC_3(VAR_0, VAR_1, sizeof(VAR_1), 0)) <= 0) return 0;

 if ((VAR_4->imsg = FUNC_2(VAR_4->imsg, (VAR_4->len + VAR_5))) == ((void*)0))
  return 0;
 FUNC_1((VAR_4->imsg + VAR_4->len), VAR_1, VAR_5);
 VAR_4->len += VAR_5;
 return 1;
}
