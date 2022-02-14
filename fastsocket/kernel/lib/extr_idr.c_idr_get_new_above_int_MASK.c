
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idr_layer {int count; int * ary; } ;
struct idr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct idr*,int,struct idr_layer**) ;
 int FUNC_1 (struct idr_layer**,int) ;
 int FUNC_2 (int ,struct idr_layer*) ;

__attribute__((used)) static int FUNC_3(struct idr *VAR_2, void *VAR_3, int VAR_4)
{
 struct idr_layer *VAR_5[VAR_1];
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_4, VAR_5);
 if (VAR_6 >= 0) {




  FUNC_2(VAR_5[0]->ary[VAR_6 & VAR_0],
    (struct idr_layer *)VAR_3);
  VAR_5[0]->count++;
  FUNC_1(VAR_5, VAR_6);
 }

 return VAR_6;
}
