
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* hv; } ;
typedef TYPE_1__ sha1_digest ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (char const*,char*,unsigned long*,unsigned long*,unsigned long*,unsigned long*,unsigned long*,int*) ;

__attribute__((used)) static int
FUNC_2(
 sha1_digest * VAR_2,
 char const * VAR_3 )
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 unsigned long VAR_8[5];

 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_6 = FUNC_1(VAR_3, " %lx %lx %lx %lx %lx%n",
       &VAR_8[0], &VAR_8[1], &VAR_8[2], &VAR_8[3], &VAR_8[4],
       &VAR_7);
 if (VAR_6 != 5 || VAR_3[VAR_7] > ' ')
  return VAR_0;


 for (VAR_4=0; VAR_4 < 5; ++VAR_4)
  for (VAR_5=3; VAR_5 >= 0; --VAR_5) {
   VAR_2->hv[VAR_4*4 + VAR_5] =
    (unsigned char)(VAR_8[VAR_4] & 0x0FF);
   VAR_8[VAR_4] >>= 8;
  }
 return VAR_1;
}
