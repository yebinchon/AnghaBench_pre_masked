
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int iomap_sz; TYPE_1__*** iomap; } ;
typedef TYPE_2__ sb_devc ;
struct TYPE_7__ {int regno; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (TYPE_2__*,unsigned char*,int,size_t,int) ;
 unsigned char FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int,unsigned char) ;

int FUNC_3(sb_devc * VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;
 unsigned char VAR_8;

 if ((VAR_4 < 0) || (VAR_4 >= VAR_3->iomap_sz))
  return -VAR_0;

 VAR_7 = (*VAR_3->iomap)[VAR_4][VAR_1].regno;

 if (VAR_7 == 0)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_3, VAR_7);
 FUNC_0(VAR_3, &VAR_8, VAR_4, VAR_1, VAR_5);

 if ((*VAR_3->iomap)[VAR_4][VAR_2].regno != VAR_7)


 {
  FUNC_2(VAR_3, VAR_7, VAR_8);


  VAR_7 = (*VAR_3->iomap)[VAR_4][VAR_2].regno;

  if (VAR_7 == 0)
   return VAR_5 | (VAR_5 << 8);



  VAR_8 = FUNC_1(VAR_3, VAR_7);


 }
 FUNC_0(VAR_3, &VAR_8, VAR_4, VAR_2, VAR_6);

 FUNC_2(VAR_3, VAR_7, VAR_8);

 return VAR_5 | (VAR_6 << 8);
}
