
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ssize_t ;
typedef int off_t ;
struct TYPE_2__ {int (* sendfile ) (int,int,int *,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,size_t,int ) ;
 void* FUNC_2 (int *,size_t,int ,int ,int,int ) ;
 int FUNC_3 (void*,size_t) ;
 TYPE_1__ VAR_3 ;
 size_t FUNC_4 (int,void*,size_t) ;
 int FUNC_5 (int,int,int *,size_t) ;

ssize_t FUNC_6(int VAR_4, int VAR_5, off_t *VAR_6, size_t VAR_7)
{
 void *VAR_8;
 int VAR_9;
 size_t VAR_10;

 if (FUNC_0(VAR_4, &VAR_9) != VAR_2)
  return VAR_3.sendfile(VAR_9, VAR_5, VAR_6, VAR_7);

 VAR_8 = FUNC_2(((void*)0), VAR_7, VAR_0, 0, VAR_5, VAR_6 ? *VAR_6 : 0);
 if (VAR_8 == (void *) -1)
  return -1;

 VAR_10 = FUNC_4(VAR_9, VAR_8, VAR_7);
 if ((VAR_10 > 0) && VAR_6)
  FUNC_1(VAR_5, VAR_10, VAR_1);
 FUNC_3(VAR_8, VAR_7);
 return VAR_10;
}
