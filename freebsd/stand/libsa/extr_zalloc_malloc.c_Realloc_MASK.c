
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ga_Bytes; } ;
typedef TYPE_1__ Guard ;


 int VAR_0 ;
 int FUNC_0 (void*,char const*,int) ;
 int VAR_1 ;
 void* FUNC_1 (size_t,char const*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void*,void*,size_t) ;
 int VAR_4 ;

void *
FUNC_4(void *VAR_5, size_t VAR_6, const char *VAR_7, int VAR_8)
{
 void *VAR_9;
 size_t VAR_10;

 if ((VAR_9 = FUNC_1(VAR_6, VAR_7, VAR_8)) != ((void*)0)) {
  if (VAR_5 != ((void*)0)) {
   Guard *VAR_11 = (Guard *)((char *)VAR_5 - VAR_1);

   VAR_10 = VAR_11->ga_Bytes - VAR_1;
   if (VAR_10 < VAR_6)
    FUNC_3(VAR_5, VAR_9, VAR_10);
   else
    FUNC_3(VAR_5, VAR_9, VAR_6);
   FUNC_0(VAR_5, VAR_7, VAR_8);
  } else {
  }
 }
 return (VAR_9);
}
