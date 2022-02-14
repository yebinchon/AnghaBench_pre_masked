
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct statsblobv1 {scalar_t__ abi; int lastrst; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct statsblobv1**,size_t,struct statsblobv1*,int) ;
 int FUNC_2 (struct statsblobv1*) ;
 int FUNC_3 (struct statsblobv1*,int ,int *,int ) ;
 int VAR_3 ;

int
FUNC_4(struct statsblobv1 **VAR_4, size_t VAR_5,
    struct statsblobv1 *VAR_6, uint32_t VAR_7)
{
 int VAR_8;

 if (VAR_6 != ((void*)0) && VAR_6->abi == VAR_2) {
  VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);
  if (!VAR_8) {
   if (VAR_7 & VAR_1) {
    FUNC_3(VAR_6,
        VAR_3, ((void*)0), 0);
    VAR_6->lastrst = FUNC_0();
   }
   FUNC_2(*VAR_4);
  }
 } else
  VAR_8 = VAR_0;

 return (VAR_8);
}
