
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_diag_bc_op {int code; int no; int yes; } ;


 int VAR_0 ;
 int FUNC_0 (void const*,int,int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_1, int VAR_2)
{
 const void *VAR_3 = VAR_1;
 int VAR_4 = VAR_2;

 while (VAR_4 > 0) {
  const struct inet_diag_bc_op *VAR_5 = VAR_3;


  switch (VAR_5->code) {
  case 136:
  case 130:
  case 135:
  case 129:
  case 128:
  case 134:
  case 133:
  case 132:
   if (VAR_5->no < 4 || VAR_5->no > VAR_4 + 4 || VAR_5->no & 3)
    return -VAR_0;
   if (VAR_5->no < VAR_4 &&
       !FUNC_0(VAR_1, VAR_2, VAR_4 - VAR_5->no))
    return -VAR_0;
   break;
  case 131:
   break;
  default:
   return -VAR_0;
  }
  if (VAR_5->yes < 4 || VAR_5->yes > VAR_4 + 4 || VAR_5->yes & 3)
   return -VAR_0;
  VAR_3 += VAR_5->yes;
  VAR_4 -= VAR_5->yes;
 }
 return VAR_4 == 0 ? 0 : -VAR_0;
}
