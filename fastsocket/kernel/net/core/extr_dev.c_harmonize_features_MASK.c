
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ ip_summed; int dev; } ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_3, __be16 VAR_4, int VAR_5)
{
 if (VAR_3->ip_summed != VAR_0 &&
     !FUNC_0(VAR_5, VAR_4)) {
  VAR_5 &= ~VAR_1;
 } else if (FUNC_1(VAR_3->dev, VAR_3)) {
  VAR_5 &= ~VAR_2;
 }

 return VAR_5;
}
