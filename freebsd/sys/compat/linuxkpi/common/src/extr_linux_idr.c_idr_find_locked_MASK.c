
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr_layer {void** ary; } ;
struct idr {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct idr_layer* FUNC_0 (struct idr*,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static inline void *
FUNC_2(struct idr *VAR_2, int VAR_3)
{
 struct idr_layer *VAR_4;
 void *VAR_5;

 FUNC_1(&VAR_2->lock, VAR_1);
 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4 != ((void*)0))
  VAR_5 = VAR_4->ary[VAR_3 & VAR_0];
 else
  VAR_5 = ((void*)0);
 return (VAR_5);
}
