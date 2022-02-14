
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned char const* (* order ) (int,size_t*) ;} ;
struct TYPE_5__ {unsigned char const* (* order ) (int,size_t*) ;} ;
struct TYPE_4__ {unsigned char const* (* order ) (int,size_t*) ;} ;




 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 unsigned char const* FUNC_0 (int,size_t*) ;
 unsigned char const* FUNC_1 (int,size_t*) ;
 unsigned char const* FUNC_2 (int,size_t*) ;

__attribute__((used)) static const unsigned char *
FUNC_3(int VAR_3, size_t *VAR_4)
{
 switch (VAR_3) {
 case 128:
  return VAR_1(VAR_3, VAR_4);
 case 129:
  return VAR_0(VAR_3, VAR_4);
 default:
  return VAR_2(VAR_3, VAR_4);
 }
}
