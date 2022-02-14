
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;

__attribute__((used)) static int FUNC_1(struct ifnet *VAR_8, unsigned int VAR_9)
{
 unsigned int VAR_10;

 if (VAR_9 > VAR_7) {
  return -VAR_0;
 }

 VAR_10 = VAR_9 + VAR_2 + VAR_1 + VAR_4;
 VAR_10 = FUNC_0(VAR_6, VAR_3);

 VAR_10 = (VAR_10 + VAR_5 - 1) &
        ~(VAR_5 - 1);

 return VAR_10;
}
