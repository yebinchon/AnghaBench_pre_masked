
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct indir {int total; int shift; void* array; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static struct indir *
FUNC_1(off_t VAR_6)
{
 off_t VAR_7;
 struct indir *VAR_8;
 int VAR_9;

 VAR_7 = VAR_6;
 VAR_9 = 0;
 while (VAR_7 > VAR_4) {
  VAR_7 /= VAR_4;
  VAR_9++;
 }





 VAR_8 = FUNC_0(sizeof *VAR_8, VAR_0, VAR_2 | VAR_3);
 VAR_8->array = FUNC_0(sizeof(uintptr_t) * VAR_4,
     VAR_1, VAR_2 | VAR_3);
 VAR_8->total = VAR_4;
 VAR_8->shift = VAR_9 * VAR_5;
 return (VAR_8);
}
