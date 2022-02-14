
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_2__ {int (* read ) (int,void*,size_t) ;} ;


 scalar_t__ FUNC_0 (int,int*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int,void*,size_t) ;
 int FUNC_3 (int,void*,size_t) ;

ssize_t FUNC_4(int VAR_2, void *VAR_3, size_t VAR_4)
{
 int VAR_5;
 FUNC_1();
 return (FUNC_0(VAR_2, &VAR_5) == VAR_0) ?
  FUNC_2(VAR_5, VAR_3, VAR_4) : VAR_1.read(VAR_5, VAR_3, VAR_4);
}
