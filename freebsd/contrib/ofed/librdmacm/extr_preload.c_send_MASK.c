
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_2__ {int (* send ) (int,void const*,size_t,int) ;} ;


 scalar_t__ FUNC_0 (int,int*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int,void const*,size_t,int) ;
 int FUNC_2 (int,void const*,size_t,int) ;

ssize_t FUNC_3(int VAR_2, const void *VAR_3, size_t VAR_4, int VAR_5)
{
 int VAR_6;
 return (FUNC_0(VAR_2, &VAR_6) == VAR_0) ?
  FUNC_1(VAR_6, VAR_3, VAR_4, VAR_5) : VAR_1.send(VAR_6, VAR_3, VAR_4, VAR_5);
}
