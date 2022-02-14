
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int eof_flag; scalar_t__ size; } ;


 size_t FUNC_0 (TYPE_1__*,void*,int) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int,void*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int,TYPE_1__*,scalar_t__) ;

int
FUNC_3(int VAR_3, void *VAR_4, int VAR_5)
{
    size_t VAR_6;
    int VAR_7 = 0;

    if(VAR_2 == 0 || VAR_0 == 0)
 return FUNC_1(VAR_3, VAR_4, VAR_5);

    if(VAR_1.eof_flag){
 VAR_1.eof_flag = 0;
 return 0;
    }

    VAR_6 = FUNC_0(&VAR_1, VAR_4, VAR_5);
    VAR_5 -= VAR_6;
    VAR_7 += VAR_6;
    VAR_4 = (char*)VAR_4 + VAR_6;

    while(VAR_5){
 int VAR_8;

 VAR_8 = FUNC_2(VAR_3, &VAR_1, VAR_0);
 if (VAR_8 < 0)
     return -1;
 if(VAR_8 == 0 && VAR_1.size == 0) {
     if(VAR_7)
  VAR_1.eof_flag = 1;
     return VAR_7;
 }
 VAR_6 = FUNC_0(&VAR_1, VAR_4, VAR_5);
 VAR_5 -= VAR_6;
 VAR_7 += VAR_6;
 VAR_4 = (char*)VAR_4 + VAR_6;
    }
    return VAR_7;
}
