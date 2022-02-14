
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad1816_info {int dummy; } ;
struct ad1816_chinfo {scalar_t__ dir; int blksz; int buffer; struct ad1816_info* parent; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

 int FUNC_0 (int) ;


 int FUNC_1 (struct ad1816_info*) ;
 int FUNC_2 (struct ad1816_info*,int) ;
 int FUNC_3 (struct ad1816_info*) ;
 int FUNC_4 (struct ad1816_info*,int,int) ;
 int FUNC_5 (struct ad1816_info*,int) ;
 int FUNC_6 (struct ad1816_info*,int,int) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int
FUNC_9(kobj_t VAR_4, void *VAR_5, int VAR_6)
{
 struct ad1816_chinfo *VAR_7 = VAR_5;
     struct ad1816_info *VAR_8 = VAR_7->parent;
     int VAR_9, VAR_10;

 if (!FUNC_0(VAR_6))
  return 0;

 FUNC_8(VAR_7->buffer, VAR_6);
     VAR_9 = (VAR_7->dir == VAR_3);
     VAR_10 = VAR_9? VAR_2 : VAR_0;
 FUNC_1(VAR_8);
     switch (VAR_6) {
     case 129:

  if (!(FUNC_5(VAR_8, VAR_10) & VAR_1)) {
       int VAR_11 = ((VAR_7->blksz) >> 2) - 1;
       FUNC_4(VAR_8, VAR_9? 8 : 10, VAR_11);
       FUNC_4(VAR_8, VAR_9? 9 : 11, 0);
       FUNC_4(VAR_8, 1, FUNC_2(VAR_8, 1) |
         (VAR_9? 0x8000 : 0x4000));

       FUNC_6(VAR_8, VAR_10, FUNC_5(VAR_8, VAR_10) | VAR_1);
       if (!(FUNC_5(VAR_8, VAR_10) & VAR_1))
    FUNC_7("ad1816: failed to start %s DMA!\n",
           VAR_9? "play" : "rec");
  }
  break;

     case 128:
     case 130:

  if (VAR_9) {
       FUNC_4(VAR_8, 1, FUNC_2(VAR_8, 1) &
         ~(VAR_9? 0x8000 : 0x4000));

       FUNC_6(VAR_8, VAR_10, FUNC_5(VAR_8, VAR_10) & ~VAR_1);

       if (FUNC_5(VAR_8, VAR_10) & VAR_1)
    FUNC_7("ad1816: failed to stop %s DMA!\n",
           VAR_9? "play" : "rec");
       FUNC_4(VAR_8, VAR_9? 8 : 10, 0);
       FUNC_4(VAR_8, VAR_9? 9 : 11, 0);
  }
  break;
     }
 FUNC_3(VAR_8);
     return 0;
}
