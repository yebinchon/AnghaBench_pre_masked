
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* seek ) (int ,scalar_t__*,int) ;} ;
struct fopencookie_thunk {int foc_cookie; TYPE_1__ foc_io; } ;
typedef scalar_t__ off64_t ;
typedef int fpos_t ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__*,int) ;

__attribute__((used)) static fpos_t
FUNC_1(void *VAR_3, fpos_t VAR_4, int VAR_5)
{
 struct fopencookie_thunk *VAR_6;
 off64_t VAR_7;
 int VAR_8;

 switch (VAR_5) {
 case 128:
 case 130:
 case 129:
  break;
 default:

  VAR_2 = VAR_0;
  return (-1);
 }

 VAR_6 = VAR_3;





 if (VAR_6->foc_io.seek == ((void*)0)) {
  VAR_2 = VAR_1;
  return (-1);
 }

 VAR_7 = (off64_t)VAR_4;
 VAR_8 = VAR_6->foc_io.seek(VAR_6->foc_cookie, &VAR_7, VAR_5);
 if (VAR_8 < 0)
  return (VAR_8);

 return ((fpos_t)VAR_7);
}
