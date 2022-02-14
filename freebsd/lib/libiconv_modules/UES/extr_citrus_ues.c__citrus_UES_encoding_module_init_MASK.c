
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; int mb_cur_max; } ;
typedef TYPE_1__ _UESEncodingInfo ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (char const) ;
 int FUNC_2 (void*,int ,int) ;

__attribute__((used)) static int

FUNC_3(_UESEncodingInfo * __restrict VAR_2,
    const void * __restrict VAR_3, size_t VAR_4)
{
 const char *VAR_5;

 VAR_5 = VAR_3;
 FUNC_2((void *)VAR_2, 0, sizeof(*VAR_2));
 while (VAR_4 > 0) {
  switch (FUNC_1(*VAR_5)) {
  case 'C':
   FUNC_0(VAR_0, VAR_2->mode |= VAR_1);
   break;
  }
  ++VAR_5;
  --VAR_4;
 }
 VAR_2->mb_cur_max = (VAR_2->mode & VAR_1) ? 10 : 12;

 return (0);
}
