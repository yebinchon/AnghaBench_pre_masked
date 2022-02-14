
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dso {void* needs_swap; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (char*,unsigned char) ;

__attribute__((used)) static int FUNC_1(struct dso *VAR_3, unsigned char VAR_4)
{
 static unsigned int const VAR_5 = 1;

 VAR_3->needs_swap = VAR_0;

 switch (VAR_4) {
 case 129:

  if (*(unsigned char const *)&VAR_5 != 1)
   VAR_3->needs_swap = VAR_1;
  break;

 case 128:

  if (*(unsigned char const *)&VAR_5 != 0)
   VAR_3->needs_swap = VAR_1;
  break;

 default:
  FUNC_0("unrecognized DSO data encoding %d\n", VAR_4);
  return -VAR_2;
 }

 return 0;
}
