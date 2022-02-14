
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; scalar_t__ protocol; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static unsigned FUNC_1(const struct sk_buff *VAR_3)
{
 unsigned VAR_4 = VAR_3->len - VAR_0;

 if (VAR_3->protocol == FUNC_0(VAR_1))
  VAR_4 -= VAR_2;

 return VAR_4;
}
