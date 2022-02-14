
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {size_t (* mulgen ) (unsigned char*,unsigned char const*,size_t,int) ;} ;
struct TYPE_5__ {size_t (* mulgen ) (unsigned char*,unsigned char const*,size_t,int) ;} ;
struct TYPE_4__ {size_t (* mulgen ) (unsigned char*,unsigned char const*,size_t,int) ;} ;




 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 size_t FUNC_0 (unsigned char*,unsigned char const*,size_t,int) ;
 size_t FUNC_1 (unsigned char*,unsigned char const*,size_t,int) ;
 size_t FUNC_2 (unsigned char*,unsigned char const*,size_t,int) ;

__attribute__((used)) static size_t
FUNC_3(unsigned char *VAR_3,
 const unsigned char *VAR_4, size_t VAR_5, int VAR_6)
{
 switch (VAR_6) {
 case 128:
  return VAR_1(VAR_3, VAR_4, VAR_5, VAR_6);
 case 129:
  return VAR_0(VAR_3, VAR_4, VAR_5, VAR_6);
 default:
  return VAR_2(VAR_3, VAR_4, VAR_5, VAR_6);
 }
}
